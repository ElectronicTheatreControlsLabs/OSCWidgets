// Copyright (c) 2016 Electronic Theatre Controls, Inc., http://www.etcconnect.com
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
// THE SOFTWARE.

#include "ToyGrid.h"
#include "EditPanel.h"
#include "Utils.h"

////////////////////////////////////////////////////////////////////////////////

#define QUICK_GRID_BUTTON_SIZE	24
#define QUICK_GRID_WIDTH		10
#define QUICK_GRID_HEIGHT		10

////////////////////////////////////////////////////////////////////////////////

GridSizeButton::GridSizeButton(int col, int row, QWidget *parent)
	: FadeButton(parent)
	, m_Col(col)
	, m_Row(row)
{
	connect(this, SIGNAL(clicked(bool)), this, SLOT(onClicked(bool)));
}

////////////////////////////////////////////////////////////////////////////////

void GridSizeButton::onClicked(bool /*checked*/)
{
	emit clickedGridSize(m_Col, m_Row);
}

////////////////////////////////////////////////////////////////////////////////

void GridSizeButton::StartHover()
{
	FadeButton::StartHover();
	emit hoveredGridSize(m_Col, m_Row);
}

////////////////////////////////////////////////////////////////////////////////

GridSizeMenu::GridSizeMenu(const QIcon &icon, const QString &title, QWidget* parent/* =0 */)
	: QMenu(title, parent)
{
	setIcon(icon);

	m_Label = new QLabel(" ", this);
	m_Label->setAlignment(Qt::AlignCenter);
	m_Label->resize( m_Label->sizeHint() );

	int y = 0;
	m_Label->setGeometry(0, 0, sizeHint().width(), m_Label->height());
	y += m_Label->height();

	m_Buttons = new GridSizeButton**[QUICK_GRID_WIDTH];
	for(int col=0; col<QUICK_GRID_WIDTH; col++)
		m_Buttons[col] = new GridSizeButton*[QUICK_GRID_HEIGHT];

	for(int row=0; row<QUICK_GRID_HEIGHT; row++)
	{
		for(int col=0; col<QUICK_GRID_WIDTH; col++)
		{
			GridSizeButton *button = new GridSizeButton(col, row, this);
			connect(button, SIGNAL(hoveredGridSize(int,int)), this, SLOT(onHovered(int,int)));
			connect(button, SIGNAL(clickedGridSize(int,int)), this, SLOT(onClicked(int,int)));
			button->setGeometry(col*QUICK_GRID_BUTTON_SIZE, y + row*QUICK_GRID_BUTTON_SIZE, QUICK_GRID_BUTTON_SIZE, QUICK_GRID_BUTTON_SIZE);
			m_Buttons[col][row] = button;
		}
	}

	SetHover(0, 0);

	resize( sizeHint() );
}

////////////////////////////////////////////////////////////////////////////////

void GridSizeMenu::SetHover(int hoverCol, int hoverRow)
{
	if(hoverCol < 0)
		hoverCol = 0;

	if(hoverRow < 0)
		hoverRow = 0;

	QPalette pal( m_Buttons[0][0]->palette() );
	for(int row=0; row<QUICK_GRID_HEIGHT; row++)
	{
		for(int col=0; col<QUICK_GRID_WIDTH; col++)
		{
			bool highlight = (col<=hoverCol && row<=hoverRow);
			pal.setColor(QPalette::Button, highlight ? QColor(0,85,127) : QColor(60,60,60));

			GridSizeButton *button = m_Buttons[col][row];
			button->setPalette(pal);

			if(highlight &&	(col==hoverCol || row==hoverRow))
				button->Flash();
		}
	}

	m_Label->setText( QString("%1 x %2").arg(hoverCol+1).arg(hoverRow+1) );
}

////////////////////////////////////////////////////////////////////////////////

QSize GridSizeMenu::sizeHint() const
{
	return QSize(QUICK_GRID_WIDTH*QUICK_GRID_BUTTON_SIZE, m_Label->height() + QUICK_GRID_HEIGHT*QUICK_GRID_BUTTON_SIZE);
}

////////////////////////////////////////////////////////////////////////////////

void GridSizeMenu::onHovered(int col, int row)
{
	SetHover(col, row);
}

////////////////////////////////////////////////////////////////////////////////

void GridSizeMenu::onClicked(int col, int row)
{
	emit gridResized( QSize(col+1,row+1) );
	emit triggered(0);
}

////////////////////////////////////////////////////////////////////////////////

ToyGrid::ToyGrid(EnumToyType type, Client *pClient, QWidget *parent, Qt::WindowFlags flags)
	: Toy(type, pClient, parent, flags)
	, m_Mode(ToyWidget::MODE_DEFAULT)
	, m_GridSize(0, 0)
	, m_SendOnConnect(false)
	, m_IgnoreEdits(0)
	, m_pContextMenu(0)
	, m_Loading(false)
{
	m_EditPanel = new EditPanel(this);
	m_EditPanel->hide();
	connect(m_EditPanel, SIGNAL(edited()), this, SLOT(onEdited()));
	connect(m_EditPanel, SIGNAL(done()), this, SLOT(onDone()));
	
	QString name;
	Toy::GetName(m_Type, name);
	SetText(name);
	
	SetColor( palette().color(QPalette::Window) );
	UpdateImagePath();
}

////////////////////////////////////////////////////////////////////////////////

ToyGrid::~ToyGrid()
{
	Clear();
}

////////////////////////////////////////////////////////////////////////////////

 void ToyGrid::Clear()
 {
	SetGridSize( QSize(0,0) );
 }

 ////////////////////////////////////////////////////////////////////////////////

void ToyGrid::SetMode(ToyWidget::EnumMode mode)
{
	if(m_Mode != mode)
	{
		m_Mode = mode;
		UpdateMode();
	}
}

////////////////////////////////////////////////////////////////////////////////

void ToyGrid::UpdateMode()
{
	for(WIDGET_LIST::const_iterator i=m_List.begin(); i!=m_List.end(); i++)
		(*i)->SetMode(m_Mode);
	
	switch( m_Mode )
	{
		case ToyWidget::MODE_DEFAULT:
			m_EditPanel->hide();
			break;
			
		case ToyWidget::MODE_EDIT:
			{
				m_EditPanel->show();
				m_EditPanel->move(frameGeometry().topRight() + QPoint(2,0));
				ClipToScreen( *m_EditPanel );
			}
			break;
	}

	UpdateText();
}

////////////////////////////////////////////////////////////////////////////////

void ToyGrid::SetGridSize(const QSize &gridSize)
{
	QSize gs(gridSize);
	if(gs.width() < 1)
		gs.setWidth(1);
	if(gs.height() < 1)
		gs.setHeight(1);
	
	if(m_GridSize != gs) //grid size has changed.. update
	{
		QSize widgetSize(0, 0);
		if( !m_List.empty() )
			widgetSize = m_List.front()->size();
		
		m_GridSize = gs;
		
		size_t numWidgets = static_cast<size_t>(m_GridSize.width() * m_GridSize.height());
		
		// remove excess
		while(m_List.size() > numWidgets)
		{
			m_List.back()->deleteLater(); //mark the list widget
			m_List.pop_back(); //pop it off the array
		}
		
		// add new
		while(m_List.size() < numWidgets)
		{
			ToyWidget *widget = CreateWidget();
			if( widget )
			{
				m_List.push_back(widget);
				ApplyDefaultSettings(widget, m_List.size());
				widget->SetMode(m_Mode);
				
				if( !m_Loading )
					widget->show();
				
				connect(widget, SIGNAL(edit(ToyWidget*)), this, SLOT(onWidgetEdited(ToyWidget*)));
				
			}
			else
				break;
		}

		setMinimumSize(m_GridSize.width()*24, m_GridSize.height()*24);
		
		m_EditWidgetIndex = m_List.size();
		
		//iterate through all widgets and tell them their position - better to do now to save calling every time we need info?
		
		int curRow = 0;
		int curCol = 0;
		for (int i=0; i<m_List.size(); i++)
		{
		  
		  ToyWidget *w = m_List.at(i);
		  w->setNum(i);
		  w->setRow(curRow);
		  w->setCol(curCol);
		  
		  curCol++;
		  if (curCol >= gs.width())
		  {
			curCol = 0;
			curRow++;
		  }
		}
		
		if( !m_Loading )
		{
			if( widgetSize.isEmpty() )
				widgetSize = GetDefaultWidgetSize();
			AutoSize(widgetSize);
			UpdateLayout();
			emit recvWidgetsChanged();
		}
	}
}

////////////////////////////////////////////////////////////////////////////////

void ToyGrid::AutoSize(const QSize &widgetSize)
{
	resize(m_GridSize.width()*widgetSize.width() + MARGIN2, m_GridSize.height()*widgetSize.height() + MARGIN2);
}

////////////////////////////////////////////////////////////////////////////////

void ToyGrid::ApplyDefaultSettings(ToyWidget *widget, size_t index)
{
	widget->SetText( QString::number(index) );

	QString pathName;
	Toy::GetDefaultPathName(m_Type, pathName);

	QString path = QString("/%1/%2").arg(pathName).arg(index);
	widget->SetPath(path);
}

////////////////////////////////////////////////////////////////////////////////

void ToyGrid::SetText(const QString &text)
{
	if(m_Text != text)
	{
		m_Text = text;
		UpdateText();
	}
}

////////////////////////////////////////////////////////////////////////////////

void ToyGrid::UpdateText()
{
	QString title(m_Text);
	if(m_Mode == ToyWidget::MODE_EDIT)
		title.append( tr(" :: EDIT") );
	setWindowTitle(title);
}

////////////////////////////////////////////////////////////////////////////////

void ToyGrid::SetImagePath(const QString &imagePath)
{
	if(m_ImagePath != imagePath)
	{
		m_ImagePath = imagePath;
		UpdateImagePath();
	}
}

////////////////////////////////////////////////////////////////////////////////

void ToyGrid::UpdateImagePath()
{
	QIcon icon(m_ImagePath);
	if( icon.isNull() )
		SetDefaultWindowIcon( *this );
	else
		setWindowIcon(icon);
}

////////////////////////////////////////////////////////////////////////////////

void ToyGrid::GetName(QString &name) const
{
	if( m_Text.isEmpty() )
		Toy::GetName(m_Type, name);
	else
		name = m_Text;
}

////////////////////////////////////////////////////////////////////////////////

void ToyGrid::SetColor(const QColor &color)
{
	if(m_Color != color)
	{
		m_Color = color;
		UpdateColor();
	}
}

////////////////////////////////////////////////////////////////////////////////

void ToyGrid::UpdateColor()
{
	QPalette pal( palette() );
	pal.setColor(QPalette::Window, m_Color);
	setPalette(pal);
	setAutoFillBackground(true);
}

////////////////////////////////////////////////////////////////////////////////

void ToyGrid::UpdateLayout()
{
	UpdateLayoutForRect( rect() );
}

////////////////////////////////////////////////////////////////////////////////

void ToyGrid::UpdateLayoutForRect(const QRect &r)
{
	if( !m_GridSize.isEmpty() )
	{
		int w = (r.width() - MARGIN2)/m_GridSize.width();
		int h = (r.height() - MARGIN2)/m_GridSize.height();
		int x = (r.x() + MARGIN);
		int y = (r.y() + MARGIN);
		int col = 0;
		for(WIDGET_LIST::const_iterator i=m_List.begin(); i!=m_List.end(); i++)
		{
			(*i)->setGeometry(x, y, w, h);
			if(++col >= m_GridSize.width())
			{
				col = 0;
				x = (r.x() + MARGIN);
				y += h;
			}
			else
				x += w;
		}
	}
}

////////////////////////////////////////////////////////////////////////////////

void ToyGrid::EditWidget(ToyWidget *widget, bool toggle)
{
	++m_IgnoreEdits;

	for(WIDGET_LIST::const_iterator i=m_List.begin(); i!=m_List.end(); i++)
	{
		ToyWidget *w = *i;
		if(w == widget)
		{
			w->SetSelected(!toggle || !w->GetSelected());
		}
		else
			w->SetSelected(false);
	}
	
	m_EditPanel->SetCols( m_GridSize.width() );
	m_EditPanel->SetRows( m_GridSize.height() );
	
	if(widget && widget->GetSelected())
	{
		m_EditPanel->SetGridEnabled(false);
		m_EditPanel->SetText( widget->GetText() );
		m_EditPanel->SetImagePath( widget->GetImagePath() );
		if( widget->HasImagePath2() )
		{
			m_EditPanel->SetImagePath2( widget->GetImagePath2() );
			m_EditPanel->SetImagePath2Enabled(true);
		}
		else
		{
			m_EditPanel->SetImagePath2( QString() );
			m_EditPanel->SetImagePath2Enabled(false);
		}
		if( widget->HasPath() )
		{
			m_EditPanel->SetPath( widget->GetPath() );
			m_EditPanel->SetPathEnabled(true);
		}
		else
		{
			m_EditPanel->SetPath( QString() );
			m_EditPanel->SetPathEnabled(false);
		}
		if( widget->HasPath2() )
		{
			m_EditPanel->SetPath2( widget->GetPath2() );
			m_EditPanel->SetPath2Enabled(true);
		}
		else
		{
			m_EditPanel->SetPath2( QString() );
			m_EditPanel->SetPath2Enabled(false);
		}
		m_EditPanel->SetLabelPath( widget->GetLabelPath() );
		m_EditPanel->SetLabelPathEnabled(true);
		if( widget->HasFeedbackPath() )
		{
			m_EditPanel->SetFeedbackPath( widget->GetRawFeedbackPath() );
			m_EditPanel->SetFeedbackPathEnabled(true);
		}
		else
		{
			m_EditPanel->SetFeedbackPath( QString() );
			m_EditPanel->SetFeedbackPathEnabled(false);
		}
		if( widget->HasTriggerPath() )
		{
			m_EditPanel->SetTriggerPath( widget->GetTriggerPath() );
			m_EditPanel->SetTriggerPathEnabled(true);
		}
		else
		{
			m_EditPanel->SetTriggerPath( QString() );
			m_EditPanel->SetTriggerPathEnabled(false);
		}
		if( widget->HasMinMax() )
		{
			m_EditPanel->SetMin( widget->GetMin() );
			m_EditPanel->SetMax( widget->GetMax() );
			m_EditPanel->SetMinMaxEnabled(true);
		}
		else
		{
			m_EditPanel->SetMin( QString() );
			m_EditPanel->SetMax( QString() );
			m_EditPanel->SetMinMaxEnabled(false);
		}
		if( widget->HasMinMax2() )
		{
			m_EditPanel->SetMin2( widget->GetMin2() );
			m_EditPanel->SetMax2( widget->GetMax2() );
			m_EditPanel->SetMinMax2Enabled(true);
		}
		else
		{
			m_EditPanel->SetMin2( QString() );
			m_EditPanel->SetMax2( QString() );
			m_EditPanel->SetMinMax2Enabled(false);
		}
		if( widget->HasBPM() )
		{
			m_EditPanel->SetBPM( widget->GetBPM() );
			m_EditPanel->SetBPMEnabled(true);
		}
		else
		{
			m_EditPanel->SetBPM( QString() );
			m_EditPanel->SetBPMEnabled(false);
		}
		if( widget->HasVisible() )
		{
			m_EditPanel->SetHidden( !widget->GetVisible() );
			m_EditPanel->SetHiddenEnabled(true);
		}
		else
		{
			m_EditPanel->SetHidden(false);
			m_EditPanel->SetHiddenEnabled(false);
		}
		m_EditPanel->SetColor( widget->GetColor() );
		if( widget->HasColor2() )
		{
			m_EditPanel->SetColor2( widget->GetColor2() );
			m_EditPanel->SetColor2Enabled(true);
		}
		else
			m_EditPanel->SetColor2Enabled(false);
		m_EditPanel->SetTextColor( widget->GetTextColor() );
		m_EditPanel->SetTextColorEnabled(true);
		if( widget->HasTextColor2() )
		{
			m_EditPanel->SetTextColor2( widget->GetTextColor2() );
			m_EditPanel->SetTextColor2Enabled(true);
		}
		else
			m_EditPanel->SetTextColor2Enabled(false);
		m_EditPanel->SetHelpText( widget->GetHelpText() );
	}
	else
	{
		m_EditPanel->SetGridEnabled(true);
		m_EditPanel->SetText(m_Text);
		m_EditPanel->SetImagePath(m_ImagePath);
		m_EditPanel->SetImagePath2( QString() );
		m_EditPanel->SetImagePath2Enabled(false);
		m_EditPanel->SetPath( QString() );
		m_EditPanel->SetPathEnabled(false);
		m_EditPanel->SetPath2Enabled(false);
		m_EditPanel->SetLabelPath( QString() );
		m_EditPanel->SetLabelPathEnabled(false);
		m_EditPanel->SetFeedbackPath( QString() );
		m_EditPanel->SetFeedbackPathEnabled(true); //so that the children can look up to it
		m_EditPanel->SetFeedbackPath( GetRawFeedbackPath() );
		m_EditPanel->SetFeedbackPathEnabled(true);
		m_EditPanel->SetFeedbackPathEnabled(false);
		m_EditPanel->SetTriggerPath( QString() );
		m_EditPanel->SetTriggerPathEnabled(false);
		m_EditPanel->SetMin( QString() );
		m_EditPanel->SetMax( QString() );
		m_EditPanel->SetMinMaxEnabled(false);
		m_EditPanel->SetMin2( QString() );
		m_EditPanel->SetMax2( QString() );
		m_EditPanel->SetMinMax2Enabled(false);
		m_EditPanel->SetBPM( QString() );
		m_EditPanel->SetBPMEnabled(false);
		m_EditPanel->SetColor(m_Color);
		m_EditPanel->SetColor2Enabled(false);
		m_EditPanel->SetTextColor( palette().color(QPalette::Disabled,QPalette::ButtonText) );
		m_EditPanel->SetTextColorEnabled(false);
		m_EditPanel->SetTextColor2Enabled(false);
		m_EditPanel->SetHidden(false);
		m_EditPanel->SetHiddenEnabled(false);
		m_EditPanel->SetHelpText( QString() );
	}
	
	--m_IgnoreEdits;
}

////////////////////////////////////////////////////////////////////////////////

const ToyWidget* ToyGrid::ToyWidgetAt(const QPoint &pos) const
{
	size_t index = ToyWidgetIndexAt(pos);
	return ((index<m_List.size()) ? m_List[index] : 0);
}

////////////////////////////////////////////////////////////////////////////////

size_t ToyGrid::ToyWidgetIndexAt(const QPoint &pos) const
{
	for(size_t i=0; i<m_List.size(); i++)
	{
		if( m_List[i]->geometry().contains(pos) )
			return i;
	}
	
	return m_List.size();
}

////////////////////////////////////////////////////////////////////////////////

void ToyGrid::AddRecvWidgets(RECV_WIDGETS &recvWidgets) const
{
	for(WIDGET_LIST::const_iterator i=m_List.begin(); i!=m_List.end(); i++)
	{
		ToyWidget *w = *i;
		if( !w->GetLabelPath().isEmpty() )
			recvWidgets.insert( RECV_WIDGETS_PAIR(w->GetLabelPath(),w) );
		if(w->HasFeedbackPath() && !w->GetFeedbackPath().isEmpty())
			recvWidgets.insert( RECV_WIDGETS_PAIR(w->GetFeedbackPath(),w) );
		if(w->HasTriggerPath() && !w->GetTriggerPath().isEmpty())
			recvWidgets.insert( RECV_WIDGETS_PAIR(w->GetTriggerPath(),w) );
	}
}

////////////////////////////////////////////////////////////////////////////////

void ToyGrid::SetFeedbackPath(const QString &feedbackPath)
{
	if(m_FeedbackPath != feedbackPath)
	{
		m_FeedbackPath = feedbackPath;
		//UpdateToolTip();
	}
}


////////////////////////////////////////////////////////////////////////////////

bool ToyGrid::Save(EosLog &log, const QString &path, QStringList &lines)
{
	QRect r(frameGeometry().topLeft(), size());

	QString imagePath(m_ImagePath);
	Toy::ResourceAbsolutePathToRelative(&log, path, imagePath);

	QString line;

	line.append( QString("%1").arg(static_cast<int>(m_Type)) );
	line.append( QString(", %1").arg(r.x()) );
	line.append( QString(", %1").arg(r.y()) );
	line.append( QString(", %1").arg(r.width()) );
	line.append( QString(", %1").arg(r.height()) );
	line.append( QString(", %1").arg(static_cast<int>(windowState())) );
	line.append( QString(", %1").arg(static_cast<int>(isVisible() ? 1 : 0)) );
	line.append( QString(", %1").arg(m_GridSize.width()) );
	line.append( QString(", %1").arg(m_GridSize.height()) );
	line.append( QString(", %1").arg(Utils::QuotedString(m_Text)) );
	line.append( QString(", %1").arg(Utils::QuotedString(imagePath)) );
	line.append( QString(", %1").arg(m_Color.rgba(),0,16) );
	line.append( QString(", %1").arg(static_cast<int>(m_SendOnConnect ? 1 : 0)) );

	lines << line;

	for(WIDGET_LIST::const_iterator i=m_List.begin(); i!=m_List.end(); i++)
		(*i)->Save(log, path, lines);

	return true;
}

////////////////////////////////////////////////////////////////////////////////

bool ToyGrid::Load(EosLog &log, const QString &path, QStringList &lines, int &index)
{
	//items[] is a row of the csv,
	if(index>=0 && index<lines.size())
	{
		m_Loading = true;
		
		QStringList items;
		Utils::GetItemsFromQuotedString(lines[index++], items);

		QSize gridSize(0, 0);
		if(items.size() > 7)
		{
			gridSize.setWidth( items[7].toInt() );
			gridSize.setHeight( items[8].toInt() );
			SetGridSize(gridSize);
			setGeometry(items[1].toInt(), items[2].toInt(), items[3].toInt(), items[4].toInt());
			
			if(items.size() > 9)
				SetText( items[9] );
			
			if(items.size() > 10)
			{
				QString imagePath( items[10] );
				Toy::ResourceRelativePathToAbsolute(&log, path, imagePath);
				SetImagePath(imagePath);
			}
			
			if(items.size() > 11)
				SetColor( items[11].toUInt(0,16) );
			
			if(items.size() > 12)
				SetSendOnConnect(items[12].toInt() != 0);
			
			int numToyWidgets = (gridSize.width() * gridSize.height());
			for(int i=0; i<numToyWidgets && index<lines.size(); i++)
			{
				size_t widgetIndex = static_cast<size_t>(i);
				if(widgetIndex < m_List.size())
					m_List[widgetIndex]->Load(log, path, lines, index);
			}
			
//			Qt::WindowStates ws = static_cast<Qt::WindowStates>( items[5].toInt() );
			bool windowVisible = (items[6].toInt() != 0);
//			if( ws.testFlag(Qt::WindowMinimized) )
//			{
//				if( ws.testFlag(Qt::WindowMaximized) )
//					showMaximized();
//				showMinimized();
//				windowVisible = false;
//			}
//			else if( ws.testFlag(Qt::WindowMaximized) )
//			{
//				showMaximized();
//				if( !windowVisible )
//					close();
//			}
//			else
			{
				ClipToScreen( *this );
				if( windowVisible )
				{
					showNormal();
					raise();
				}
				else
					close();
			}
		}
		
		m_Loading = false;
		
		UpdateLayout();
		
		emit recvWidgetsChanged();
	}

	return true;
}

////////////////////////////////////////////////////////////////////////////////

void ToyGrid::ClearLabels()
{
	for(WIDGET_LIST::const_iterator i=m_List.begin(); i!=m_List.end(); i++)
		(*i)->SetLabel( QString() );
}

////////////////////////////////////////////////////////////////////////////////

void ToyGrid::resizeEvent(QResizeEvent *event)
{
	Toy::resizeEvent(event);
	UpdateLayout();
}

////////////////////////////////////////////////////////////////////////////////

void ToyGrid::contextMenuEvent(QContextMenuEvent *event)
{
	QString name;	
	
	QMenu menu(this);
	
	m_EditWidgetIndex = ToyWidgetIndexAt( event->pos() );
	if(m_EditWidgetIndex < m_List.size())
	{
		const ToyWidget *toyWidget = m_List[m_EditWidgetIndex];
		name = toyWidget->GetText();
		if( name.isEmpty() )
			Toy::GetDefaultPathName(m_Type, name);
		menu.addAction(QIcon(":/assets/images/MenuIconEdit.png"), tr("Edit %1...").arg(name), this, SLOT(onEditToyWidget()));
	}

	GridSizeMenu *gridSizeMenu = new GridSizeMenu(QIcon(":/assets/images/MenuIconGrid.png"), tr("Grid"));
	connect(gridSizeMenu, SIGNAL(gridResized(const QSize&)), this, SLOT(onGridResized(const QSize&)));
	menu.addMenu(gridSizeMenu);

	GetName(name);
	menu.addAction(QIcon(":/assets/images/MenuIconSettings.png"), tr("%1 Settings...").arg(name), this, SLOT(onEdit()));

	if(m_Mode == ToyWidget::MODE_EDIT)
		menu.addAction(QIcon(":/assets/images/MenuIconCheck.png"), tr("Done Editing"), this, SLOT(onDone()));

	menu.addAction(QIcon(":/assets/images/MenuIconRefresh.png"), tr("Clear OSC Labels"), this, SLOT(onClearLabels()));

	menu.addSeparator();
	menu.addAction(QIcon(":/assets/images/MenuIconTrash.png"), tr("Delete %1...").arg(name), this, SLOT(onDelete()));
	
	menu.addSeparator();
	menu.addAction(QIcon(":/assets/images/MenuIconHome.png"), tr("Toggle Main Window"), this, SLOT(onToggleMainWindow()));

	m_pContextMenu = &menu;
    menu.exec( event->globalPos() );
	m_pContextMenu = 0;
}

////////////////////////////////////////////////////////////////////////////////

void ToyGrid::closeEvent(QCloseEvent *event)
{
	Toy::closeEvent(event);
	m_EditPanel->close();
}

////////////////////////////////////////////////////////////////////////////////

void ToyGrid::onEdit()
{
	m_EditWidgetIndex = m_List.size();
	onEditToyWidget();
}

////////////////////////////////////////////////////////////////////////////////

void ToyGrid::onEditToyWidget()
{
	SetMode(ToyWidget::MODE_EDIT);
	EditWidget((m_EditWidgetIndex<m_List.size()) ? m_List[m_EditWidgetIndex] : 0, /*toggle*/false);
}

////////////////////////////////////////////////////////////////////////////////

void ToyGrid::onDelete()
{
	QString name;
	GetName(name);
	QMessageBox mb(QMessageBox::NoIcon, tr("Delete"), tr("Are you sure you want to delete %1").arg(name), QMessageBox::Yes|QMessageBox::Cancel, this);
	mb.setIconPixmap( QPixmap(":/assets/images/IconQuestion.png") );
	if(mb.exec() == QMessageBox::Yes)
	{
		m_EditPanel->close();
		emit closing(this);
	}
}

////////////////////////////////////////////////////////////////////////////////

void ToyGrid::onToggleMainWindow()
{
	emit toggleMainWindow();
}

////////////////////////////////////////////////////////////////////////////////

void ToyGrid::onWidgetEdited(ToyWidget *widget)
{
	EditWidget(widget, /*toggle*/true);
}

////////////////////////////////////////////////////////////////////////////////

 void ToyGrid::onEdited()
 {
	if(m_IgnoreEdits != 0)
		return;
		
	ToyWidget *widget = 0;
	for(WIDGET_LIST::const_iterator i=m_List.begin(); i!=m_List.end(); i++)
	{
		if( (*i)->GetSelected() )
		{
			widget = *i;
			break;
		}
	}
	
	if( widget )
	{
		QString str;
		m_EditPanel->GetText(str);
		widget->SetText(str);

		m_EditPanel->GetImagePath(str);
		widget->SetImagePath(str);
		
		if( widget->HasImagePath2() )
		{
			m_EditPanel->GetImagePath2(str);
			widget->SetImagePath2(str);
		}
		
		if( widget->HasPath() )
		{
			m_EditPanel->GetPath(str);
			widget->SetPath(str);
		}
		
		if( widget->HasPath2() )
		{
			m_EditPanel->GetPath2(str);
			widget->SetPath2(str);
		}

		bool recvWidgetsDirty = false;
		m_EditPanel->GetLabelPath(str);
		if(widget->GetLabelPath() != str)
		{
			widget->SetLabelPath(str);
			recvWidgetsDirty = true;
		}

		if( widget->HasFeedbackPath() )
		{
			m_EditPanel->GetFeedbackPath(str);
			if(widget->GetRawFeedbackPath() != str)
			{
				widget->SetFeedbackPath(str);
				recvWidgetsDirty = true;
			}
		}

		if( widget->HasTriggerPath() )
		{
			m_EditPanel->GetTriggerPath(str);
			if(widget->GetTriggerPath() != str)
			{
				widget->SetTriggerPath(str);
				recvWidgetsDirty = true;
			}
		}
		
		m_EditPanel->GetMin(str);
		widget->SetMin(str);
		
		m_EditPanel->GetMax(str);
		widget->SetMax(str);

		if( widget->HasMinMax2() )
		{
			m_EditPanel->GetMin2(str);
			widget->SetMin2(str);
		
			m_EditPanel->GetMax2(str);
			widget->SetMax2(str);
		}

		if( widget->HasBPM() )
		{
			m_EditPanel->GetBPM(str);
			widget->SetBPM(str);
		}

		if( widget->HasVisible() )
			widget->SetVisible( !m_EditPanel->GetHidden() );
		
		QColor color;
		m_EditPanel->GetColor(color);
		widget->SetColor(color);
		
		if( widget->HasColor2() )
		{
			m_EditPanel->GetColor2(color);
			widget->SetColor2(color);
		}
		
		m_EditPanel->GetTextColor(color);
		widget->SetTextColor(color);
		
		if( widget->HasTextColor2() )
		{
			m_EditPanel->GetTextColor2(color);
			widget->SetTextColor2(color);
		}

		if( recvWidgetsDirty )
			emit recvWidgetsChanged();
	}
	else
	{
		QSize gridSize(m_EditPanel->GetCols(), m_EditPanel->GetRows());
		SetGridSize(gridSize);
	
		QString str;
		m_EditPanel->GetText(str);
		SetText(str);

		m_EditPanel->GetImagePath(str);
		SetImagePath(str);
		
		m_EditPanel->GetFeedbackPath(str);
		if (m_FeedbackPath!=str)
		{
			SetFeedbackPath(str);
			emit recvWidgetsChanged();
		}
		
		QColor color;
		m_EditPanel->GetColor(color);
		SetColor(color);
	}

	emit changed();
 }

////////////////////////////////////////////////////////////////////////////////

void ToyGrid::onDone()
{
	if(m_IgnoreEdits != 0)
		return;
	
	SetMode(ToyWidget::MODE_DEFAULT);
	activateWindow();
}

////////////////////////////////////////////////////////////////////////////////

void ToyGrid::onGridResized(const QSize &size)
{
	if(m_GridSize != size)
	{
		SetGridSize(size);
		emit changed();
	}

	if( m_pContextMenu )
		m_pContextMenu->close();
}

////////////////////////////////////////////////////////////////////////////////

void ToyGrid::onClearLabels()
{
	ClearLabels();
}

////////////////////////////////////////////////////////////////////////////////
