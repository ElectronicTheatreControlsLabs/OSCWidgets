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

#pragma once
#ifndef TOY_GRID_H
#define TOY_GRID_H

#ifndef TOY_H
#include "Toy.h"
#endif

#ifndef TOY_WIDGET_H
#include "ToyWidget.h"
#endif

#ifndef FADE_BUTTON_H
#include "FadeButton.h"
#endif

class EditPanel;

////////////////////////////////////////////////////////////////////////////////

class GridSizeButton
	: public FadeButton
{
	Q_OBJECT

public:
	GridSizeButton(int col, int row, QWidget *parent);

signals:
	void hoveredGridSize(int col, int row);
	void clickedGridSize(int col, int row);

private slots:
	void onClicked(bool checked);

protected:
	int	m_Col;
	int	m_Row;

	virtual void StartHover();
};

////////////////////////////////////////////////////////////////////////////////

class GridSizeMenu
	: public QMenu
{
	Q_OBJECT

public:
	GridSizeMenu(const QIcon &Icon, const QString &title, QWidget *parent=0);

	QSize sizeHint() const;

signals:
	void gridResized(const QSize &size);

private slots:
	void onHovered(int col, int row);
	void onClicked(int col, int row);

protected:
	QLabel			*m_Label;
	GridSizeButton	***m_Buttons;
	void SetHover(int hoverCol, int hoverRow);
};

////////////////////////////////////////////////////////////////////////////////

class ToyGrid
	: public Toy
{
	Q_OBJECT
	
public:
	typedef std::vector<ToyWidget*> WIDGET_LIST;

	ToyGrid(EnumToyType type, Client *pClient, QWidget *parent, Qt::WindowFlags flags);
	virtual ~ToyGrid();
	
	virtual void Clear();
	virtual ToyWidget::EnumMode GetMode() const {return m_Mode;}
	virtual void SetMode(ToyWidget::EnumMode mode);
	virtual const QSize& GetGridSize() const {return m_GridSize;}
	virtual void SetGridSize(const QSize &gridSize);
	virtual const QString& GetText() const {return m_Text;}
	virtual void SetText(const QString &text);
	virtual const QString& GetImagePath() const {return m_ImagePath;}
	virtual void SetImagePath(const QString &imagePath);
	virtual const QColor& GetColor() const {return m_Color;}
	virtual void SetColor(const QColor &color);
	virtual bool GetSendOnConnect() const {return m_SendOnConnect;}
	virtual void SetSendOnConnect(bool b) {m_SendOnConnect = b;}
	virtual const ToyWidget* ToyWidgetAt(const QPoint &pos) const;
	virtual size_t ToyWidgetIndexAt(const QPoint &pos) const;
	virtual void AddRecvWidgets(RECV_WIDGETS &recvWidgets) const;
	virtual bool Save(EosLog &log, const QString &path, QStringList &lines);
	virtual bool Load(EosLog &log, const QString &path, QStringList &lines, int &index);
	virtual void GetName(QString &name) const;
	virtual void ClearLabels();
	
	virtual void SetFeedbackPath(const QString &feedbackPath);
	virtual const QString& GetFeedbackPath() const {return m_FeedbackPath;}
	
	virtual void SetPath(const QString &Path);
	virtual const QString& GetPath() const {return m_Path;}
	
	virtual void SetPath2(const QString &Path2);
	virtual const QString& GetPath2() const {return m_Path2;}
	
	virtual void SetLabelPath(const QString &labelPath);
	virtual const QString& GetLabelPath() const {return m_LabelPath;}
	
	virtual void SetTriggerPath(const QString &triggerPath);
	virtual const QString& GetTriggerPath() const {return m_TriggerPath;}
  
	
	virtual int getPageNumber() {return m_pageNumber;}

	

	
private slots:
	void onEdit();	
	void onEditToyWidget();
	void onDelete();
	void onToggleMainWindow();
	void onWidgetEdited(ToyWidget *widget);
	void onEdited();
	void onDone();
	void onGridResized(const QSize &size);
	void onClearLabels();
	void upPressed();
	void downPressed();
	
protected:
	ToyWidget::EnumMode	m_Mode;
	QSize				m_GridSize;
	WIDGET_LIST			m_List;
	EditPanel			*m_EditPanel;
	unsigned int		m_IgnoreEdits;
	QString				m_Text;
	QString				m_ImagePath;
	QColor				m_Color;
	bool				m_SendOnConnect;
	size_t				m_EditWidgetIndex;
	QMenu				*m_pContextMenu;
	bool				m_Loading;
	
	int					m_pageNumber;
	
	
	QString		m_FeedbackPath;
	QString		m_Path;
	QString		m_Path2;
	QString		m_LabelPath;
	QString		m_TriggerPath;

	
	QPushButton	*m_upButton;
	QPushButton	*m_downButton;
	
	QLabel		*m_pageNumberLabel;

	
	virtual ToyWidget* CreateWidget() = 0;
	virtual QSize GetDefaultWidgetSize() const {return QSize(80,80);}
	virtual void UpdateMode();
	virtual void UpdateLayout();
	virtual void UpdateLayoutForRect(const QRect &r);
	virtual void UpdateText();
	virtual void UpdateImagePath();
	virtual void UpdateColor();
	virtual void ApplyDefaultSettings(ToyWidget *widget, size_t index);
	virtual void EditWidget(ToyWidget *widget, bool toggle);
	virtual void AutoSize(const QSize &widgetSize);
	virtual void resizeEvent(QResizeEvent *event);
	virtual void contextMenuEvent(QContextMenuEvent *event);
	virtual void closeEvent(QCloseEvent *event);
};

////////////////////////////////////////////////////////////////////////////////

#endif
