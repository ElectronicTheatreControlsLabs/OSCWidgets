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

#include "EditPanel.h"
#include "ToyButton.h"
#include "ToyMath.h"
#include "Utils.h"

////////////////////////////////////////////////////////////////////////////////

EditButton::EditButton(QWidget *parent)
	: QPushButton(parent)
	, m_Selected(false)
	, m_T(PI_PLUS_PI_2)
	, m_Alpha(0)
{
	m_Timer = new QTimer(this);
	connect(m_Timer, SIGNAL(timeout()), this, SLOT(onTick()));
}

////////////////////////////////////////////////////////////////////////////////

void EditButton::SetSelected(bool selected)
{
	if(m_Selected != selected)
	{
		m_Selected = selected;
		
		if( m_Selected )
		{
			m_T = PI_PLUS_PI_2;
			m_Timer->start(20);
		}
		else
		{
			m_Alpha = 0;
			m_Timer->stop();
			update();
		}
	}
}

////////////////////////////////////////////////////////////////////////////////

void EditButton::paintEvent(QPaintEvent*)
{
	if(m_Alpha > 0)
	{
		QPainter painter(this);
		QColor color(0, 60, 200, m_Alpha);
		painter.fillRect(QRect(0,0,width(),MARGIN), color);
		painter.fillRect(QRect(0,MARGIN,MARGIN,height()-MARGIN2), color);
		painter.fillRect(QRect(width()-MARGIN,MARGIN,MARGIN,height()-MARGIN2), color);
		painter.fillRect(QRect(0,height()-MARGIN,width(),MARGIN2), color);
		color.setAlpha( qRound(m_Alpha*0.4) );
		painter.fillRect(rect(), color);
	}
}

////////////////////////////////////////////////////////////////////////////////

void EditButton::onTick()
{
	m_T += 0.075;
	qreal opacity = ((1.0 + sin(m_T)) * 0.5);
	opacity = (0.4 + (opacity*0.6));
	int alpha = qRound(255 * opacity);
	if(m_Alpha != alpha)
	{
		m_Alpha = alpha;
		update();
	}
}

////////////////////////////////////////////////////////////////////////////////

EditPanel::EditPanel(QWidget *parent)
	: QWidget(parent, Qt::Window)
{
	QGridLayout *layout = new QGridLayout(this);
	
	int row = 0;
	m_GridLabel = new QLabel(tr("Grid"), this);
	layout->addWidget(m_GridLabel, row, 0);
	m_Cols = new QSpinBox(this);
	m_Cols->setRange(1, 100);
	connect(m_Cols, SIGNAL(valueChanged(int)), this, SLOT(onGridChanged(int)));
	layout->addWidget(m_Cols, row, 1);
	m_Rows = new QSpinBox(this);
	m_Rows->setRange(1, 100);
	connect(m_Rows, SIGNAL(valueChanged(int)), this, SLOT(onGridChanged(int)));
	layout->addWidget(m_Rows, row, 2);
	
	++row;
	layout->addWidget(new QLabel(tr("Label"),this), row, 0);
	m_Text = new QLineEdit(this);
	connect(m_Text, SIGNAL(editingFinished()), this, SLOT(onEditingFinished()));
	layout->addWidget(m_Text, row, 1, 1, 2);
	
	++row;
	m_PathLabel = new QLabel(tr("OSC Output"), this);
	layout->addWidget(m_PathLabel, row, 0);
	m_Path = new QLineEdit(this);
	connect(m_Path, SIGNAL(editingFinished()), this, SLOT(onEditingFinished()));
	connect(m_Path, SIGNAL(textChanged(const QString&)), this, SLOT(onPathTextChanged(const QString&)));
	layout->addWidget(m_Path, row, 1, 1, 2);
	
	++row;
	m_Path2Label = new QLabel(tr("OSC Output 2"), this);
	layout->addWidget(m_Path2Label, row, 0);
	m_Path2 = new QLineEdit(this);
	connect(m_Path2, SIGNAL(editingFinished()), this, SLOT(onEditingFinished()));
	connect(m_Path2, SIGNAL(textChanged(const QString&)), this, SLOT(onPath2TextChanged(const QString&)));
	layout->addWidget(m_Path2, row, 1, 1, 2);
	
	++row;
	m_Local = new QCheckBox(tr("Local"), this);
	m_Local->setToolTip( tr("send commands to other OSCToy widgets") );
	connect(m_Local, SIGNAL(stateChanged(int)), this, SLOT(onLocalStateChanged(int)));
	layout->addWidget(m_Local, row, 1, 1, 2);
	
	++row;
	m_MinMaxLabel = new QLabel(tr("Min/Max"), this);
	layout->addWidget(m_MinMaxLabel, row, 0);
	m_Min = new QLineEdit(this);
	connect(m_Min, SIGNAL(editingFinished()), this, SLOT(onEditingFinished()));
	layout->addWidget(m_Min, row, 1);
	m_Max = new QLineEdit(this);
	connect(m_Max, SIGNAL(editingFinished()), this, SLOT(onEditingFinished()));
	layout->addWidget(m_Max, row, 2);

	++row;
	m_MinMax2Label = new QLabel(tr("Min/Max 2"), this);
	layout->addWidget(m_MinMax2Label, row, 0);
	m_Min2 = new QLineEdit(this);
	connect(m_Min2, SIGNAL(editingFinished()), this, SLOT(onEditingFinished()));
	layout->addWidget(m_Min2, row, 1);
	m_Max2 = new QLineEdit(this);
	connect(m_Max2, SIGNAL(editingFinished()), this, SLOT(onEditingFinished()));
	layout->addWidget(m_Max2, row, 2);
	
	++row;
	m_toggleLabel = new QLabel(tr("Toggle"), this);
	layout->addWidget(m_toggleLabel, row, 0);
	m_toggle = new QCheckBox(tr("Toggle"), this);
	m_toggle->setToolTip( tr("set button to toggle on/off on press"));
	connect(m_toggle, SIGNAL(editingFinished()), this, SLOT(onEditingFinished()));
	layout->addWidget(m_toggle, row, 1, 1, 2);

	++row;
	m_BPMLabel = new QLabel(tr("BPM"), this);
	layout->addWidget(m_BPMLabel, row, 0);
	m_BPM = new QLineEdit(this);
	m_BPM->setToolTip( tr("Beats per Minute") );
	SetToolTips(tr("Beats per Minute"), m_BPMLabel, m_BPM);
	connect(m_BPM, SIGNAL(editingFinished()), this, SLOT(onEditingFinished()));
	layout->addWidget(m_BPM, row, 1);

	++row;
	m_RecvPathLabel = new QLabel(tr("OSC Label"), this);
	layout->addWidget(m_RecvPathLabel, row, 0);
	m_RecvPath = new QLineEdit(this);
	SetToolTips(tr("Designate an incoming OSC command as a text label for this widget"), m_RecvPathLabel, m_RecvPath);
	connect(m_RecvPath, SIGNAL(editingFinished()), this, SLOT(onEditingFinished()));
	layout->addWidget(m_RecvPath, row, 1, 1, 2);

	++row;
	m_FeedbackPathLabel = new QLabel(tr("OSC Trigger"), this);
	layout->addWidget(m_FeedbackPathLabel, row, 0);
	m_FeedbackPath = new QLineEdit(this);
	SetToolTips(tr("Trigger this widget via OSC"), m_FeedbackPathLabel, m_FeedbackPath);
	connect(m_FeedbackPath, SIGNAL(editingFinished()), this, SLOT(onEditingFinished()));
	layout->addWidget(m_FeedbackPath, row, 1, 1, 2);

	++row;
	QLabel *label = new QLabel(tr("Icon"), this);
	layout->addWidget(label, row, 0);
	m_ImagePathButton = new FadeButton(this);
	SetToolTips(tr("Image files are referenced relative to the *.oscwidgets.txt file"), label, m_ImagePathButton);
	m_ImagePathButton->setFixedSize(40, 40);
	connect(m_ImagePathButton, SIGNAL(clicked(bool)), this, SLOT(onImagePathButtonClicked(bool)));
	layout->addWidget(m_ImagePathButton, row, 1, 1, 2);

	++row;
	m_HiddenLabel = new QLabel(tr("Hidden"), this);
	layout->addWidget(m_HiddenLabel, row, 0);
	m_Hidden = new QCheckBox(this);
	SetToolTips(tr("Hide this widget"), label, m_ImagePathButton);
	connect(m_Hidden, SIGNAL(stateChanged(int)), this, SLOT(onHiddenStateChanged(int)));
	layout->addWidget(m_Hidden, row, 1, 1, 2);
	
	++row;
	m_Color = new QPushButton(tr("Color..."), this);
	connect(m_Color, SIGNAL(clicked(bool)), this, SLOT(onColorClicked(bool)));
	layout->addWidget(m_Color, row, 0, 1, 3);
	
	++row;
	m_TextColor = new QPushButton(tr("Text Color..."), this);
	connect(m_TextColor, SIGNAL(clicked(bool)), this, SLOT(onTextColorClicked(bool)));
	layout->addWidget(m_TextColor, row, 0, 1, 3);

	++row;
	QPushButton *button = new QPushButton(tr("Done"), this);
	connect(button, SIGNAL(clicked(bool)), this, SLOT(onDoneClicked(bool)));
	layout->addWidget(button, row, 0, 1, 3);

	++row;
	QGroupBox *group = new QGroupBox(tr("Notes"), this);
	group->setFixedWidth(200);
	QGridLayout *groupLayout = new QGridLayout(group);
	layout->addWidget(group, 0, 4, row, 1);

	m_Help = new QLabel(group);
	m_Help->setWordWrap(true);
	m_Help->setAlignment(Qt::AlignTop|Qt::AlignLeft);
	groupLayout->addWidget(m_Help, 0, 0);
}

////////////////////////////////////////////////////////////////////////////////

void EditPanel::SetToolTips(const QString &text, QWidget *label, QWidget *widget)
{
	if( label )
		label->setToolTip(text);
	
	if( widget )
		widget->setToolTip(text);
}

////////////////////////////////////////////////////////////////////////////////

int EditPanel::GetCols() const
{
	return m_Cols->value();
}

////////////////////////////////////////////////////////////////////////////////

void EditPanel::SetCols(int cols)
{
	m_Cols->setValue(cols);
}

////////////////////////////////////////////////////////////////////////////////

int EditPanel::GetRows() const
{
	return m_Rows->value();
}

////////////////////////////////////////////////////////////////////////////////

void EditPanel::SetRows(int rows)
{
	m_Rows->setValue(rows);
}

////////////////////////////////////////////////////////////////////////////////

void EditPanel::SetGridEnabled(bool b)
{
	m_GridLabel->setEnabled(b);
	m_Cols->setEnabled(b);
	m_Rows->setEnabled(b);
}

////////////////////////////////////////////////////////////////////////////////

bool EditPanel::GetHidden() const
{
	return m_Hidden->isChecked();
}

////////////////////////////////////////////////////////////////////////////////

void EditPanel::SetHidden(bool b)
{
	m_Hidden->setChecked(b);
}

////////////////////////////////////////////////////////////////////////////////

void EditPanel::SetHiddenEnabled(bool b)
{
	m_HiddenLabel->setEnabled(b);
	m_Hidden->setEnabled(b);
}

////////////////////////////////////////////////////////////////////////////////

void EditPanel::GetText(QString &text) const
{
	text = m_Text->text();
}

////////////////////////////////////////////////////////////////////////////////

void EditPanel::SetText(const QString &text)
{
	m_Text->setText(text);
}

////////////////////////////////////////////////////////////////////////////////

void EditPanel::GetImagePath(QString &imagePath) const
{
	imagePath = m_ImagePath;
}

////////////////////////////////////////////////////////////////////////////////

void EditPanel::SetImagePath(const QString &imagePath)
{
	if(m_ImagePath != imagePath)
	{
		m_ImagePath = imagePath;
		m_ImagePathButton->SetImagePath(m_ImagePath);
	}
}

////////////////////////////////////////////////////////////////////////////////

void EditPanel::UpdateLocal(bool primaryPath)
{
	if( m_Path->isEnabled() )
	{
		if( m_Path2->isEnabled() )
		{
			// both enabled
			QString path;
			if( primaryPath )
				GetPath(path);
			else
				GetPath2(path);
	
			m_Local->setChecked( Utils::IsLocalOSCPath(path) );
			m_Local->setEnabled(true);
		}
		else if( primaryPath )
		{
			// only path enabled
			QString path;
			GetPath(path);
			m_Local->setChecked( Utils::IsLocalOSCPath(path) );
			m_Local->setEnabled(true);
		}
	}
	else if( m_Path2->isEnabled() )
	{
		if( !primaryPath )
		{
			// only path2 enabled
			QString path;
			GetPath2(path);
			m_Local->setChecked( Utils::IsLocalOSCPath(path) );
			m_Local->setEnabled(true);
		}
	}
	else
	{
		// no path enabled
		m_Local->setChecked(false);
		m_Local->setEnabled(false);
	}
}

////////////////////////////////////////////////////////////////////////////////

void EditPanel::GetPath(QString &path) const
{
	path = m_Path->text();
}

////////////////////////////////////////////////////////////////////////////////

void EditPanel::SetPath(const QString &path)
{
	m_Path->setText(path);
	UpdateLocal(/*primaryPath*/true);
}

////////////////////////////////////////////////////////////////////////////////

void EditPanel::SetPathEnabled(bool b)
{
	m_PathLabel->setEnabled(b);
	m_Path->setEnabled(b);
	UpdateLocal(/*primaryPath*/true);
}

////////////////////////////////////////////////////////////////////////////////

void EditPanel::GetPath2(QString &path) const
{
	path = m_Path2->text();
}

////////////////////////////////////////////////////////////////////////////////

void EditPanel::SetPath2(const QString &path)
{
	m_Path2->setText(path);
	UpdateLocal(/*primaryPath*/false);
}

////////////////////////////////////////////////////////////////////////////////

void EditPanel::SetPath2Enabled(bool b)
{
	m_Path2Label->setEnabled(b);
	m_Path2->setEnabled(b);
	UpdateLocal(/*primaryPath*/false);
}

////////////////////////////////////////////////////////////////////////////////

void EditPanel::GetRecvPath(QString &recvPath) const
{
	recvPath = m_RecvPath->text();
}

////////////////////////////////////////////////////////////////////////////////

void EditPanel::SetRecvPath(const QString &recvPath)
{
	m_RecvPath->setText(recvPath);
}

////////////////////////////////////////////////////////////////////////////////

void EditPanel::SetRecvPathEnabled(bool b)
{
	m_RecvPathLabel->setEnabled(b);
	m_RecvPath->setEnabled(b);
}

////////////////////////////////////////////////////////////////////////////////

void EditPanel::GetFeedbackPath(QString &feedbackPath) const
{
	feedbackPath = m_FeedbackPath->text();
}

////////////////////////////////////////////////////////////////////////////////

void EditPanel::SetFeedbackPath(const QString &feedbackPath)
{
	m_FeedbackPath->setText(feedbackPath);
}

////////////////////////////////////////////////////////////////////////////////

void EditPanel::SetFeedbackPathEnabled(bool b)
{
	m_FeedbackPathLabel->setEnabled(b);
	m_FeedbackPath->setEnabled(b);
}

////////////////////////////////////////////////////////////////////////////////

void EditPanel::GetColor(QColor &color) const
{
	color = m_Color->palette().color(QPalette::Button);
}

////////////////////////////////////////////////////////////////////////////////

void EditPanel::SetColor(const QColor &color)
{
	QPalette pal( m_Color->palette() );
	pal.setColor(QPalette::Button, color);
	m_Color->setPalette(pal);
	
	pal = m_TextColor->palette();
	pal.setColor(QPalette::Button, color);
	m_TextColor->setPalette(pal);
}

////////////////////////////////////////////////////////////////////////////////

void EditPanel::GetTextColor(QColor &textColor) const
{
	textColor = m_TextColor->palette().color(QPalette::ButtonText);
}

////////////////////////////////////////////////////////////////////////////////

void EditPanel::SetTextColor(const QColor &textColor)
{
	QPalette pal( m_TextColor->palette() );
	pal.setColor(QPalette::ButtonText, textColor);
	m_TextColor->setPalette(pal);
	
	pal = m_Color->palette();
	pal.setColor(QPalette::ButtonText, textColor);
	m_Color->setPalette(pal);
}

////////////////////////////////////////////////////////////////////////////////

void EditPanel::SetTextColorEnabled(bool b)
{
	m_TextColor->setEnabled(b);
}

////////////////////////////////////////////////////////////////////////////////

void EditPanel::GetMin(QString &n) const
{
	n = m_Min->text();
}

////////////////////////////////////////////////////////////////////////////////

void EditPanel::SetMin(const QString &n)
{
	m_Min->setText(n);
}

////////////////////////////////////////////////////////////////////////////////

void EditPanel::GetMax(QString &n) const
{
	n = m_Max->text();
}

////////////////////////////////////////////////////////////////////////////////

void EditPanel::SetMax(const QString &n)
{
	m_Max->setText(n);
}

////////////////////////////////////////////////////////////////////////////////

void EditPanel::SetMinMaxEnabled(bool b)
{
	m_MinMaxLabel->setEnabled(b);
	m_Min->setEnabled(b);
	m_Max->setEnabled(b);
}

////////////////////////////////////////////////////////////////////////////////

void EditPanel::GetMin2(QString &n) const
{
	n = m_Min2->text();
}

////////////////////////////////////////////////////////////////////////////////

void EditPanel::SetMin2(const QString &n)
{
	m_Min2->setText(n);
}

////////////////////////////////////////////////////////////////////////////////

void EditPanel::GetMax2(QString &n) const
{
	n = m_Max2->text();
}

////////////////////////////////////////////////////////////////////////////////

void EditPanel::SetMax2(const QString &n)
{
	m_Max2->setText(n);
}

////////////////////////////////////////////////////////////////////////////////

void EditPanel::SetMinMax2Enabled(bool b)
{
	m_MinMax2Label->setEnabled(b);
	m_Min2->setEnabled(b);
	m_Max2->setEnabled(b);
}

////////////////////////////////////////////////////////////////////////////////

void EditPanel::GetBPM(QString &n) const
{
	n = m_BPM->text();
}

////////////////////////////////////////////////////////////////////////////////

void EditPanel::SetBPM(const QString &n)
{
	m_BPM->setText(n);
}

////////////////////////////////////////////////////////////////////////////////

void EditPanel::SetBPMEnabled(bool b)
{
	m_BPMLabel->setEnabled(b);
	m_BPM->setEnabled(b);
}

////////////////////////////////////////////////////////////////////////////////
void EditPanel::SetToggle(bool b)
{
	m_toggle->setChecked(b);
}
void EditPanel::setToggleEnabled(bool b)
{
  	m_toggleLabel->setEnabled(b);
	m_toggle->setEnabled(b);

}

////////////////////////////////////////////////////////////////////////////////

void EditPanel::SetHelpText(const QString &text)
{
	m_Help->setText(text);
}

////////////////////////////////////////////////////////////////////////////////

void EditPanel::closeEvent(QCloseEvent *event)
{
	QWidget::closeEvent(event);
	emit done();
}

////////////////////////////////////////////////////////////////////////////////

void EditPanel::onGridChanged(int /*value*/)
{
	emit edited();
}

////////////////////////////////////////////////////////////////////////////////

void EditPanel::onEditingFinished()
{
	emit edited();
}

////////////////////////////////////////////////////////////////////////////////

void EditPanel::onHiddenStateChanged(int /*state*/)
{
	emit edited();
}

////////////////////////////////////////////////////////////////////////////////

void EditPanel::onPathTextChanged(const QString& /*text*/)
{
	UpdateLocal(/*primaryPath*/true);
}

////////////////////////////////////////////////////////////////////////////////

void EditPanel::onPath2TextChanged(const QString& /*text*/)
{
	UpdateLocal(/*primaryPath*/false);
}

////////////////////////////////////////////////////////////////////////////////

void EditPanel::onLocalStateChanged(int /*state*/)
{
	if( m_Path->isEnabled() )
	{
		QString path;
		GetPath(path);
		if( Utils::MakeLocalOSCPath(m_Local->isChecked(),path) )
		{
			m_Path->setText(path);
			emit edited();
		}
	}
	
	if( m_Path2->isEnabled() )
	{
		QString path2;
		GetPath2(path2);
		if( Utils::MakeLocalOSCPath(m_Local->isChecked(),path2) )
		{
			m_Path2->setText(path2);
			emit edited();
		}
	}
}

////////////////////////////////////////////////////////////////////////////////

void EditPanel::onImagePathButtonClicked(bool /*checked*/)
{
	QList<QByteArray> formats = QImageReader::supportedImageFormats();

	QString filter;
	for(QList<QByteArray>::const_iterator i=formats.begin(); i!=formats.end(); i++)
	{
		QString ext(*i);
		if( !ext.isEmpty() )
		{
			if( !filter.isEmpty() )
				filter.append(' ');
			filter.append( QString("*.%1").arg(ext) );
		}
	}

	if( !filter.isEmpty() )
	{
		filter.prepend( tr("Image Files (") );
		filter.append(")");
	}

	QString imagePath = QFileDialog::getOpenFileName(this,
		tr("Select Icon"),
		QDesktopServices::storageLocation(QDesktopServices::PicturesLocation),
		filter);

	SetImagePath(imagePath);

	emit edited();
}

////////////////////////////////////////////////////////////////////////////////

void EditPanel::onColorClicked(bool /*checked*/)
{
	QColor color;
	GetColor(color);
	color = QColorDialog::getColor(color, this, tr("Color"));
	SetColor(color);
	emit edited();
}

////////////////////////////////////////////////////////////////////////////////

void EditPanel::onTextColorClicked(bool /*checked*/)
{
	QColor color;
	GetTextColor(color);
	color = QColorDialog::getColor(color, this, tr("Text Color"));
	SetTextColor(color);
	emit edited();
}

////////////////////////////////////////////////////////////////////////////////

void EditPanel::onDoneClicked(bool /*checked*/)
{
	done();
}

////////////////////////////////////////////////////////////////////////////////
