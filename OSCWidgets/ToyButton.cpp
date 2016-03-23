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

#include "ToyButton.h"
#include "Utils.h"
#include "OSCParser.h"
#include "FadeButton.h"

////////////////////////////////////////////////////////////////////////////////

ToyButtonWidget::ToyButtonWidget(QWidget *parent)
	: ToyWidget(parent)
{
	m_HelpText = tr("Min = Button Down\nMax = Button Up\n\nOSC Trigger:\nNo Arguments = Click\nArgument(1) = Press\nArgument(0) = Release");

	m_Widget = new FadeButton(this);
	connect(m_Widget, SIGNAL(pressed()), this, SLOT(onPressed()));
	connect(m_Widget, SIGNAL(released()), this, SLOT(onReleased()));
	
	QPalette pal( m_Widget->palette() );
	m_Color = pal.color(QPalette::Button);
	m_TextColor = pal.color(QPalette::ButtonText);
	
	m_IsPressed = false;
}

////////////////////////////////////////////////////////////////////////////////

void ToyButtonWidget::SetText(const QString &text)
{
	ToyWidget::SetText(text);
	static_cast<FadeButton*>(m_Widget)->setText(m_Text);
}

////////////////////////////////////////////////////////////////////////////////

void ToyButtonWidget::SetImagePath(const QString &imagePath)
{
	ToyWidget::SetImagePath(imagePath);
	static_cast<FadeButton*>(m_Widget)->SetImagePath(m_ImagePath);
}

////////////////////////////////////////////////////////////////////////////////

void ToyButtonWidget::SetColor(const QColor &color)
{
	ToyWidget::SetColor(color);
	QPalette pal( m_Widget->palette() );
	pal.setColor(QPalette::Button, m_Color);
	m_Widget->setPalette(pal);
}

////////////////////////////////////////////////////////////////////////////////

void ToyButtonWidget::SetTextColor(const QColor &textColor)
{
	ToyWidget::SetTextColor(textColor);
	QPalette pal( m_Widget->palette() );
	pal.setColor(QPalette::ButtonText, m_TextColor);
	m_Widget->setPalette(pal);
}

////////////////////////////////////////////////////////////////////////////////

void ToyButtonWidget::SetLabel(const QString &label)
{
	static_cast<FadeButton*>(m_Widget)->SetLabel(label);
}

////////////////////////////////////////////////////////////////////////////////

void ToyButtonWidget::Recv(const QString &path, const OSCArgument *args, size_t count)
{
	if(path == m_FeedbackPath)
    {
		FadeButton *button = static_cast<FadeButton*>(m_Widget);

        bool edge = false;
        
        if(args && count>0)
        {
            bool press = false;
            if( args[0].GetBool(press) )
            {
                edge = true;
                
                if( press )
                    button->Press();
                else
                    button->Release();
            }
        }
        
        if( !edge )
        {
            button->Press();
            button->Release();
        }
    }
    else
    {
        std::string str;
        if(args && count>0)
        {
            if( !args[0].GetString(str) )
                str.clear();
        }

        SetLabel( QString::fromUtf8(str.c_str()) );
    }
}

////////////////////////////////////////////////////////////////////////////////

void ToyButtonWidget::onPressed()
{
    if (!HasToggle() || !m_IsPressed))
	{
	  emit pressed(this);
	  if (HasToggle()) m_IsPressed = true;
	} else
	{
	  emit released(this);
	  is_Pressed = false;
	}
}

////////////////////////////////////////////////////////////////////////////////

void ToyButtonWidget::onReleased()
{
	if (!HasToggle()) emit released(this);
}

////////////////////////////////////////////////////////////////////////////////

ToyButtonGrid::ToyButtonGrid(Client *pClient, QWidget *parent, Qt::WindowFlags flags)
	: ToyGrid(TOY_BUTTON_GRID, pClient, parent, flags)
{
	SetGridSize( QSize(5,1) );
}

////////////////////////////////////////////////////////////////////////////////

ToyWidget* ToyButtonGrid::CreateWidget()
{
	ToyButtonWidget *w = new ToyButtonWidget(this);
	connect(w, SIGNAL(pressed(ToyButtonWidget*)), this, SLOT(onPressed(ToyButtonWidget*)));
	connect(w, SIGNAL(released(ToyButtonWidget*)), this, SLOT(onReleased(ToyButtonWidget*)));
	return w;
}

////////////////////////////////////////////////////////////////////////////////

bool ToyButtonGrid::SendButtonCommand(ToyButtonWidget *button, bool press)
{
	if(	m_pClient &&
		button &&
		!button->GetPath().isEmpty() )
	{
		const QString &minStr = button->GetMin();
		const QString &maxStr = button->GetMax();
		
		int edgeCount = 0;
		float value = 0;
		if( minStr.isEmpty() )
		{
			if( !maxStr.isEmpty() )
			{
				// only have max field, so always send it
				bool ok = false;
				value = maxStr.toFloat(&ok);
				if( ok )
					edgeCount = 1;
			}
		}
		else if( maxStr.isEmpty() )
		{
			// only have min field, so always send it
			bool ok = false;
			value = minStr.toFloat(&ok);
			if( ok )
				edgeCount = 1;
		}
		else
		{
			// have both min & max fields
			bool minOk = false;
			float nMin = minStr.toFloat(&minOk);
			bool maxOk = false;
			float nMax = maxStr.toFloat(&maxOk);
			if( minOk )
			{
				if( maxOk )
				{
					edgeCount = 2;
					value = (press ? nMax : nMin);
				}
				else
				{
					value = nMin;
					edgeCount = 1;
				}
			}
			else if( maxOk )
			{
				value = nMax;
				edgeCount = 1;
			}
		}
		
		if(press || edgeCount>1)
		{
			QString path( button->GetPath() );
			bool local = Utils::MakeLocalOSCPath(false, path);
			OSCPacketWriter packetWriter( path.toUtf8().constData() );
			if(edgeCount > 0)
				packetWriter.AddFloat32(value);
			
			size_t size;
			char *data = packetWriter.Create(size);
			if(data && m_pClient->ToyClient_Send(local,data,size))
				return true;
		}
	}
	
	return false;
}

////////////////////////////////////////////////////////////////////////////////

void ToyButtonGrid::onPressed(ToyButtonWidget *button)
{
	SendButtonCommand(button, /*press*/true);
}

////////////////////////////////////////////////////////////////////////////////

void ToyButtonGrid::onReleased(ToyButtonWidget *button)
{
	SendButtonCommand(button, /*press*/false);
}

////////////////////////////////////////////////////////////////////////////////
