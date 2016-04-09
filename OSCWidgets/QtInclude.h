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
#ifndef QT_INCLUDE_H
#define QT_INCLUDE_H

////////////////////////////////////////////////////////////////////////////////

#define TEXT_COLOR			QColor(180,180,180)
#define MUTED_COLOR			QColor(100,100,100)
#define SUCCESS_COLOR		QColor(16,183,87)
#define ERROR_COLOR			QColor(164,66,66)
#define WARNING_COLOR		QColor(172,122,57)
#define RECV_COLOR			QColor(153,179,255)
#define SEND_COLOR			QColor(0,181,149)
#define TIME_COLOR			QColor(105,92,152)
#define PROGRESS_COLOR		QColor(61,103,198)
#define BG_COLOR			QColor(40,40,40)

#define MARGIN				2
#define MARGIN2				4	// MARGIN*2
#define ROUNDED				4
#define BORDER				2
#define HALF_BORDER			1	// BORDER/2

#define BUTTON_HOVER_SPEED	0.002f
#define BUTTON_CLICK_MS		500
#define BUTTON_BRIGHTESS	0.2f
#define BUTTON_RAISE		6

#include <QtCore/QDateTime>
#include <QtCore/QMutex>
#include <QtCore/QTimer>
#include <QtCore/QThread>
#include <QtCore/QSettings>
#include <QtCore/QFile>
#include <QtCore/QDir>
#include <QtCore/QTextStream>
#include <QtCore/QUrl>
#include <QtCore/QElapsedTimer>

#include <QtGui/QApplication>
#include <QtGui/QWidget>
#include <QtGui/QGridLayout>
#include <QtGui/QPushButton>
#include <QtGui/QPlastiqueStyle>
#include <QtGui/QScrollBar>
#include <QtGui/QLineEdit>
#include <QtGui/QSpinBox>
#include <QtGui/QLabel>
#include <QtGui/QSplitter>
#include <QtGui/QScrollArea>
#include <QtGui/QProgressBar>
#include <QtGui/QTextEdit>
#include <QtGui/QSpacerItem>
#include <QtGui/QDesktopServices>
#include <QtGui/QFileDialog>
#include <QtGui/QMessageBox>
#include <QtGui/QCloseEvent>
#include <QtGui/QPainter>
#include <QtGui/QColorDialog>
#include <QtGui/QMenu>
#include <QtGui/QComboBox>
#include <QtGui/QDesktopWidget>
#include <QtGui/QImageReader>
#include <QtGui/QFontDatabase>
#include <QtGui/QTreeWidget>
#include <QtGui/QGroupBox>
#include <QtGui/QMatrix4x4>
#include <QtGui/QCheckBox>
#include <QtGui/QSystemTrayIcon>
#include <QtGui/QMenuBar>

#include <QtNetwork/QNetworkInterface>

////////////////////////////////////////////////////////////////////////////////

#endif
