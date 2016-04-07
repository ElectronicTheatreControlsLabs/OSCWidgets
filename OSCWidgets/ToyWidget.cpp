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

#include "ToyWidget.h"
#include "EditPanel.h"
#include "Toy.h"
#include "Utils.h"
#include "ToyGrid.h"

////////////////////////////////////////////////////////////////////////////////

ToyWidget::ToyWidget(QWidget *parent)
	: QWidget(parent)
	, m_Widget(0)
	, m_Mode(MODE_DEFAULT)
	, m_Visible(true)
	, m_Min("0")
	, m_Max("1")
	, m_Min2("0")
	, m_Max2("1")
{
	m_EditButton = new EditButton(this);
	m_EditButton->hide();
	connect(m_EditButton, SIGNAL(clicked(bool)), this, SLOT(onEditButtonClicked(bool)));
}

////////////////////////////////////////////////////////////////////////////////

void ToyWidget::SetMode(EnumMode mode)
{
	if(m_Mode != mode)
	{
		m_Mode = mode;
		UpdateMode();
	}
}

////////////////////////////////////////////////////////////////////////////////

void ToyWidget::UpdateMode()
{
	switch( m_Mode )
	{
		case MODE_DEFAULT:
			m_EditButton->hide();
			break;
			
		case MODE_EDIT:
			m_EditButton->raise();
			m_EditButton->show();
			break;
	}

	UpdateVisible();
}

////////////////////////////////////////////////////////////////////////////////

void ToyWidget::SetVisible(bool b)
{
	if(m_Visible != b)
	{
		m_Visible = b;
		UpdateVisible();
	}
}

////////////////////////////////////////////////////////////////////////////////

void ToyWidget::UpdateVisible()
{
	setVisible(m_Visible || m_Mode==MODE_EDIT);
}

////////////////////////////////////////////////////////////////////////////////

void ToyWidget::SetRecvPath(const QString &recvPath)
{
	if(m_RecvPath != recvPath)
	{
		m_RecvPath = recvPath;
		UpdateToolTip();
	}
}

////////////////////////////////////////////////////////////////////////////////

void ToyWidget::SetFeedbackPath(const QString &feedbackPath)
{
	if(m_FeedbackPath != feedbackPath)
	{
		m_FeedbackPath = feedbackPath;
		UpdateToolTip();
	}
}

const QString& ToyWidget::GetFeedbackPath() const
{

	//std::cout << m_FeedbackPath << std::endl;
	qDebug("hello world");
	qDebug(((ToyGrid*)parent())->GetFeedbackPath().toLatin1());
	
	qDebug(m_FeedbackPath.toLatin1());

	
	return (m_FeedbackPath!=""?m_FeedbackPath:((ToyGrid*)parent())->GetFeedbackPath());

}


////////////////////////////////////////////////////////////////////////////////

void ToyWidget::SetPath(const QString &path)
{
	if(m_Path != path)
	{
		m_Path = path;
		UpdateToolTip();
	}
}

////////////////////////////////////////////////////////////////////////////////

void ToyWidget::SetPath2(const QString &path)
{
	if(m_Path2 != path)
	{
		m_Path2 = path;
		UpdateToolTip();
	}
}

////////////////////////////////////////////////////////////////////////////////

bool ToyWidget::GetSelected() const
{
	return m_EditButton->GetSelected();
}

////////////////////////////////////////////////////////////////////////////////

void ToyWidget::SetSelected(bool selected)
{
	m_EditButton->SetSelected(selected);
}

////////////////////////////////////////////////////////////////////////////////

void ToyWidget::UpdateToolTip()
{
	QString tip;

	if(HasPath() && !m_Path.isEmpty())
		tip = tr("OSC Output: %1").arg(m_Path);
	
	if(HasPath2() && !m_Path2.isEmpty())
	{
		if( tip.isEmpty() )
			tip = tr("OSC Output: %1").arg(m_Path2);
		else
			tip = tr("\nOSC Output 2: %1").arg(m_Path2);
	}

	if( !m_RecvPath.isEmpty() )
	{
		if( !tip.isEmpty() )
			tip.append("\n");
		tip.append( tr("OSC Label: %1").arg(m_RecvPath) );
	}

	if( !m_FeedbackPath.isEmpty() )
	{
		if( !tip.isEmpty() )
			tip.append("\n");
		tip.append( tr("OSC Trigger: %1").arg(m_FeedbackPath) );
	}

	m_Widget->setToolTip(tip);
}

////////////////////////////////////////////////////////////////////////////////

void ToyWidget::SetLabel(const QString &)
{
}

////////////////////////////////////////////////////////////////////////////////

void ToyWidget::Recv(const QString& /*path*/, const OSCArgument* /*args*/, size_t /*count*/)
{
}

////////////////////////////////////////////////////////////////////////////////

bool ToyWidget::Save(EosLog &log, const QString &path, QStringList &lines)
{
	QString line;

	QString imagePath(m_ImagePath);
	Toy::ResourceAbsolutePathToRelative(&log, path, imagePath);

	line.append( QString("%1").arg(static_cast<int>(m_Visible ? 1 : 0)) );
	line.append( QString(", %1").arg(Utils::QuotedString(m_Path)) );
	line.append( QString(", %1").arg(Utils::QuotedString(m_Path2)) );
	line.append( QString(", %1").arg(Utils::QuotedString(m_RecvPath)) );
	line.append( QString(", %1").arg(Utils::QuotedString(m_FeedbackPath)) );
	line.append( QString(", %1").arg(Utils::QuotedString(m_Text)) );
	line.append( QString(", %1").arg(Utils::QuotedString(imagePath)) );
	line.append( QString(", %1").arg(m_Color.rgba(),0,16) );
	line.append( QString(", %1").arg(m_TextColor.rgba(),0,16) );
	line.append( QString(", %1").arg(m_Min) );
	line.append( QString(", %1").arg(m_Max) );
	line.append( QString(", %1").arg(m_Min2) );
	line.append( QString(", %1").arg(m_Max2) );
	line.append( QString(", %1").arg(m_BPM) );

	lines << line;
	return true;
}

////////////////////////////////////////////////////////////////////////////////

bool ToyWidget::Load(EosLog &log, const QString &path, QStringList &lines, int &index)
{
	if(index>=0 && index<lines.size())
	{
		QStringList items;
		Utils::GetItemsFromQuotedString(lines[index++], items);

		if(items.size() > 0)
			m_Visible = (items[0].toInt() != 0);
		UpdateVisible();

		if(items.size() > 1)
			SetPath( items[1] );
		
		if(items.size() > 2)
			SetPath2( items[2] );

		if(items.size() > 3)
			SetRecvPath( items[3] );

		if(HasFeedbackPath() && items.size() > 4)
			SetFeedbackPath( items[4] );

		if(items.size() > 5)
			SetText( items[5] );

		if(items.size() > 6)
		{
			QString imagePath( items[6] );
			Toy::ResourceRelativePathToAbsolute(&log, path, imagePath);
			SetImagePath(imagePath);
		}

		if(items.size() > 7)
			SetColor( items[7].toUInt(0,16) );

		if(items.size() > 8)
			SetTextColor( items[8].toUInt(0,16) );

		if(items.size() > 9)
			SetMin( items[9] );

		if(items.size() > 10)
			SetMax( items[10] );

		if( HasMinMax2() )
		{
			if(items.size() > 11)
				SetMin2( items[11] );

			if(items.size() > 12)
				SetMax2( items[12] );
		}

		if(HasBPM() && items.size()>13)
			SetBPM( items[13] );

		return true;
	}

	return false;
}

////////////////////////////////////////////////////////////////////////////////

void ToyWidget::resizeEvent(QResizeEvent *event)
{
	QWidget::resizeEvent(event);
	m_Widget->setGeometry(MARGIN, MARGIN, width()-MARGIN2, height()-MARGIN2);
	m_EditButton->setGeometry(0, 0, width(), height());
}

////////////////////////////////////////////////////////////////////////////////

void ToyWidget::onEditButtonClicked(bool /*checked*/)
{
	emit edit(this);
}

////////////////////////////////////////////////////////////////////////////////
