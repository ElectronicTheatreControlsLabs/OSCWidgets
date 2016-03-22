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
#ifndef TOY_BUTTON_H
#define TOY_BUTTON_H

#ifndef TOY_WIDGET_H
#include "ToyWidget.h"
#endif

#ifndef TOY_GRID_H
#include "ToyGrid.h"
#endif

////////////////////////////////////////////////////////////////////////////////

class ToyButtonWidget
	: public ToyWidget
{
	Q_OBJECT
	
public:
	ToyButtonWidget(QWidget *parent);
	
	virtual void SetText(const QString &text);
	virtual void SetImagePath(const QString &imagePath);
	virtual void SetColor(const QColor &color);
	virtual void SetTextColor(const QColor &textColor);
	virtual void Recv(const QString &path, const OSCArgument *args, size_t count);
	virtual void SetLabel(const QString &label);
    virtual bool HasFeedbackPath() const {return true;}
	virtual void HasToggle() const {return true;}
	
signals:
	void pressed(ToyButtonWidget*);
	void released(ToyButtonWidget*);
	
private slots:
	void onPressed();
	void onReleased();

protected:
	bool m_IsPressed;
};

////////////////////////////////////////////////////////////////////////////////

class ToyButtonGrid
	: public ToyGrid
{
	Q_OBJECT
	
public:
	ToyButtonGrid(Client *pClient, QWidget *parent, Qt::WindowFlags flags);
	
private slots:
	void onPressed(ToyButtonWidget*);
	void onReleased(ToyButtonWidget*);
	
protected:
	virtual ToyWidget* CreateWidget();
	
	virtual bool SendButtonCommand(ToyButtonWidget *button, bool press);
};

////////////////////////////////////////////////////////////////////////////////

#endif
