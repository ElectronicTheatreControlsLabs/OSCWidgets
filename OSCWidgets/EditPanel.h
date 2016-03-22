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
#ifndef EDIT_PANEL_H
#define EDIT_PANEL_H

#ifndef QT_INCLUDE_H
#include "QtInclude.h"
#endif

class FadeButton;

////////////////////////////////////////////////////////////////////////////////

class EditButton
	: public QPushButton
{
	Q_OBJECT
	
public:
	EditButton(QWidget *parent);
	
	virtual bool GetSelected() const {return m_Selected;}
	virtual void SetSelected(bool selected);
	
private slots:
	void onTick();
	
protected:
	bool		m_Selected;
	int			m_Alpha;
	qreal		m_T;
	QTimer		*m_Timer;
	
	virtual void paintEvent(QPaintEvent *event);
};

////////////////////////////////////////////////////////////////////////////////

class EditPanel
	: public QWidget
{
	Q_OBJECT
	
public:
	EditPanel(QWidget *parent);
	
	virtual int GetCols() const;
	virtual void SetCols(int cols);
	virtual int GetRows() const;
	virtual void SetRows(int rows);
	virtual void SetGridEnabled(bool b);
	virtual bool GetHidden() const;
	virtual void SetHidden(bool b);
	virtual void SetHiddenEnabled(bool b);
	virtual void GetText(QString &text) const;
	virtual void SetText(const QString &text);
	virtual void GetImagePath(QString &imagePath) const;
	virtual void SetImagePath(const QString &imagePath);
	virtual void GetPath(QString &path) const;
	virtual void SetPath(const QString &path);
	virtual void SetPathEnabled(bool b);
	virtual void GetPath2(QString &path) const;
	virtual void SetPath2(const QString &path);
	virtual void SetPath2Enabled(bool b);
	virtual void GetRecvPath(QString &recvPath) const;
	virtual void SetRecvPath(const QString &recvPath);
	virtual void SetRecvPathEnabled(bool b);
	virtual void GetFeedbackPath(QString &feedbackPath) const;
	virtual void SetFeedbackPath(const QString &feedbackPath);
	virtual void SetFeedbackPathEnabled(bool b);	
	virtual void GetColor(QColor &color) const;
	virtual void SetColor(const QColor &color);
	virtual void GetTextColor(QColor &textColor) const;
	virtual void SetTextColor(const QColor &textColor);
	virtual void SetTextColorEnabled(bool b);
	virtual void GetMin(QString &n) const;
	virtual void SetMin(const QString &n);
	virtual void GetMax(QString &n) const;
	virtual void SetMax(const QString &n);
	virtual void SetMinMaxEnabled(bool b);
	virtual void GetMin2(QString &n) const;
	virtual void SetMin2(const QString &n);
	virtual void GetMax2(QString &n) const;
	virtual void SetMax2(const QString &n);
	virtual void SetMinMax2Enabled(bool b);
	virtual void GetBPM(QString &n) const;
	virtual void SetBPM(const QString &n);
	virtual void SetBPMEnabled(bool b);
	virtual void SetHelpText(const QString &text);
	virtual void SetToggle(bool b);
	virtual void setToggleEnabled(bool b);
	
signals:
	void edited();
	void done();
	
private slots:
	void onGridChanged(int value);
	void onEditingFinished();
	void onHiddenStateChanged(int state);
	void onPathTextChanged(const QString &text);
	void onPath2TextChanged(const QString &text);
	void onLocalStateChanged(int state);
	void onImagePathButtonClicked(bool checked);
	void onColorClicked(bool checked);
	void onTextColorClicked(bool checked);
	void onDoneClicked(bool checked);
	
protected:
	QLabel		*m_GridLabel;
	QSpinBox	*m_Cols;	
	QSpinBox	*m_Rows;
	QLineEdit	*m_Text;
	FadeButton	*m_ImagePathButton;
	QString		m_ImagePath;
	QLabel		*m_PathLabel;
	QLineEdit	*m_Path;
	QLabel		*m_Path2Label;
	QLineEdit	*m_Path2;
	QCheckBox	*m_Local;
	QLabel		*m_RecvPathLabel;
	QLineEdit	*m_RecvPath;
	QLabel		*m_FeedbackPathLabel;
	QLineEdit	*m_FeedbackPath;
	QPushButton	*m_Color;
	QPushButton	*m_TextColor;
	QLabel		*m_MinMaxLabel;
	QLineEdit	*m_Min;
	QLineEdit	*m_Max;
	QLabel		*m_MinMax2Label;
	QLineEdit	*m_Min2;
	QLineEdit	*m_Max2;
	QLabel		*m_BPMLabel;
	QLineEdit	*m_BPM;
	QLabel		*m_HiddenLabel;
	QCheckBox	*m_Hidden;
	QLabel		*m_Help;
	QLabel		*m_toggleLabel;
	QCheckBox	*m_toggle;
	
	virtual void closeEvent(QCloseEvent *event);
	virtual void UpdateLocal(bool primaryPath);
	virtual void SetToolTips(const QString &text, QWidget *label, QWidget *widget);
};

////////////////////////////////////////////////////////////////////////////////

#endif
