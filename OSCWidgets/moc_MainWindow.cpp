/****************************************************************************
** Meta object code from reading C++ file 'MainWindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "MainWindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MainWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_OpacityAction_t {
    QByteArrayData data[6];
    char stringdata0[62];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OpacityAction_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OpacityAction_t qt_meta_stringdata_OpacityAction = {
    {
QT_MOC_LITERAL(0, 0, 13), // "OpacityAction"
QT_MOC_LITERAL(1, 14, 20), // "triggeredWithOpacity"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 7), // "opacity"
QT_MOC_LITERAL(4, 44, 9), // "onToggled"
QT_MOC_LITERAL(5, 54, 7) // "checked"

    },
    "OpacityAction\0triggeredWithOpacity\0\0"
    "opacity\0onToggled\0checked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OpacityAction[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   27,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    5,

       0        // eod
};

void OpacityAction::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        OpacityAction *_t = static_cast<OpacityAction *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->triggeredWithOpacity((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->onToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (OpacityAction::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&OpacityAction::triggeredWithOpacity)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject OpacityAction::staticMetaObject = {
    { &QAction::staticMetaObject, qt_meta_stringdata_OpacityAction.data,
      qt_meta_data_OpacityAction,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *OpacityAction::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OpacityAction::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_OpacityAction.stringdata0))
        return static_cast<void*>(const_cast< OpacityAction*>(this));
    return QAction::qt_metacast(_clname);
}

int OpacityAction::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAction::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void OpacityAction::triggeredWithOpacity(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_OpacityMenu_t {
    QByteArrayData data[5];
    char stringdata0[59];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OpacityMenu_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OpacityMenu_t qt_meta_stringdata_OpacityMenu = {
    {
QT_MOC_LITERAL(0, 0, 11), // "OpacityMenu"
QT_MOC_LITERAL(1, 12, 14), // "opacityChanged"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 7), // "opacity"
QT_MOC_LITERAL(4, 36, 22) // "onTriggeredWithOpacity"

    },
    "OpacityMenu\0opacityChanged\0\0opacity\0"
    "onTriggeredWithOpacity"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OpacityMenu[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   27,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,

       0        // eod
};

void OpacityMenu::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        OpacityMenu *_t = static_cast<OpacityMenu *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->opacityChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->onTriggeredWithOpacity((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (OpacityMenu::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&OpacityMenu::opacityChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject OpacityMenu::staticMetaObject = {
    { &QMenu::staticMetaObject, qt_meta_stringdata_OpacityMenu.data,
      qt_meta_data_OpacityMenu,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *OpacityMenu::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OpacityMenu::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_OpacityMenu.stringdata0))
        return static_cast<void*>(const_cast< OpacityMenu*>(this));
    return QMenu::qt_metacast(_clname);
}

int OpacityMenu::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMenu::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void OpacityMenu::opacityChanged(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[37];
    char stringdata0[602];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 6), // "onTick"
QT_MOC_LITERAL(2, 18, 0), // ""
QT_MOC_LITERAL(3, 19, 16), // "onNewFileClicked"
QT_MOC_LITERAL(4, 36, 17), // "onOpenFileClicked"
QT_MOC_LITERAL(5, 54, 17), // "onSaveFileClicked"
QT_MOC_LITERAL(6, 72, 19), // "onSaveAsFileClicked"
QT_MOC_LITERAL(7, 92, 17), // "onClearLogClicked"
QT_MOC_LITERAL(8, 110, 16), // "onOpenLogClicked"
QT_MOC_LITERAL(9, 127, 17), // "onSettingsChanged"
QT_MOC_LITERAL(10, 145, 17), // "onAdvancedClicked"
QT_MOC_LITERAL(11, 163, 17), // "onAdvancedChanged"
QT_MOC_LITERAL(12, 181, 19), // "onMenuFramesEnabled"
QT_MOC_LITERAL(13, 201, 1), // "b"
QT_MOC_LITERAL(14, 203, 17), // "onMenuAlwaysOnTop"
QT_MOC_LITERAL(15, 221, 17), // "onMenuSnapToEdges"
QT_MOC_LITERAL(16, 239, 13), // "onMenuOpacity"
QT_MOC_LITERAL(17, 253, 7), // "opacity"
QT_MOC_LITERAL(18, 261, 17), // "onMenuClearLabels"
QT_MOC_LITERAL(19, 279, 16), // "onSettingsAddToy"
QT_MOC_LITERAL(20, 296, 4), // "type"
QT_MOC_LITERAL(21, 301, 13), // "onToysChanged"
QT_MOC_LITERAL(22, 315, 23), // "onToysToggledMainWindow"
QT_MOC_LITERAL(23, 339, 22), // "onToyTreeItemActivated"
QT_MOC_LITERAL(24, 362, 16), // "QTreeWidgetItem*"
QT_MOC_LITERAL(25, 379, 4), // "item"
QT_MOC_LITERAL(26, 384, 6), // "column"
QT_MOC_LITERAL(27, 391, 35), // "onToyTreeCustomContextMenuReq..."
QT_MOC_LITERAL(28, 427, 1), // "p"
QT_MOC_LITERAL(29, 429, 20), // "onToyTreeItemDeleted"
QT_MOC_LITERAL(30, 450, 18), // "onToyTreeItemAdded"
QT_MOC_LITERAL(31, 469, 29), // "onSystemTrayToggledMainWindow"
QT_MOC_LITERAL(32, 499, 22), // "onSystemTrayToggleToys"
QT_MOC_LITERAL(33, 522, 16), // "onSystemTrayExit"
QT_MOC_LITERAL(34, 539, 21), // "onSystemTrayActivated"
QT_MOC_LITERAL(35, 561, 33), // "QSystemTrayIcon::ActivationRe..."
QT_MOC_LITERAL(36, 595, 6) // "reason"

    },
    "MainWindow\0onTick\0\0onNewFileClicked\0"
    "onOpenFileClicked\0onSaveFileClicked\0"
    "onSaveAsFileClicked\0onClearLogClicked\0"
    "onOpenLogClicked\0onSettingsChanged\0"
    "onAdvancedClicked\0onAdvancedChanged\0"
    "onMenuFramesEnabled\0b\0onMenuAlwaysOnTop\0"
    "onMenuSnapToEdges\0onMenuOpacity\0opacity\0"
    "onMenuClearLabels\0onSettingsAddToy\0"
    "type\0onToysChanged\0onToysToggledMainWindow\0"
    "onToyTreeItemActivated\0QTreeWidgetItem*\0"
    "item\0column\0onToyTreeCustomContextMenuRequested\0"
    "p\0onToyTreeItemDeleted\0onToyTreeItemAdded\0"
    "onSystemTrayToggledMainWindow\0"
    "onSystemTrayToggleToys\0onSystemTrayExit\0"
    "onSystemTrayActivated\0"
    "QSystemTrayIcon::ActivationReason\0"
    "reason"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      26,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,  144,    2, 0x08 /* Private */,
       3,    0,  145,    2, 0x08 /* Private */,
       4,    0,  146,    2, 0x08 /* Private */,
       5,    0,  147,    2, 0x08 /* Private */,
       6,    0,  148,    2, 0x08 /* Private */,
       7,    0,  149,    2, 0x08 /* Private */,
       8,    0,  150,    2, 0x08 /* Private */,
       9,    0,  151,    2, 0x08 /* Private */,
      10,    0,  152,    2, 0x08 /* Private */,
      11,    0,  153,    2, 0x08 /* Private */,
      12,    1,  154,    2, 0x08 /* Private */,
      14,    1,  157,    2, 0x08 /* Private */,
      15,    0,  160,    2, 0x08 /* Private */,
      16,    1,  161,    2, 0x08 /* Private */,
      18,    0,  164,    2, 0x08 /* Private */,
      19,    1,  165,    2, 0x08 /* Private */,
      21,    0,  168,    2, 0x08 /* Private */,
      22,    0,  169,    2, 0x08 /* Private */,
      23,    2,  170,    2, 0x08 /* Private */,
      27,    1,  175,    2, 0x08 /* Private */,
      29,    0,  178,    2, 0x08 /* Private */,
      30,    0,  179,    2, 0x08 /* Private */,
      31,    0,  180,    2, 0x08 /* Private */,
      32,    0,  181,    2, 0x08 /* Private */,
      33,    0,  182,    2, 0x08 /* Private */,
      34,    1,  183,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   13,
    QMetaType::Void, QMetaType::Bool,   13,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   17,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   20,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 24, QMetaType::Int,   25,   26,
    QMetaType::Void, QMetaType::QPoint,   28,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 35,   36,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindow *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onTick(); break;
        case 1: _t->onNewFileClicked(); break;
        case 2: _t->onOpenFileClicked(); break;
        case 3: _t->onSaveFileClicked(); break;
        case 4: _t->onSaveAsFileClicked(); break;
        case 5: _t->onClearLogClicked(); break;
        case 6: _t->onOpenLogClicked(); break;
        case 7: _t->onSettingsChanged(); break;
        case 8: _t->onAdvancedClicked(); break;
        case 9: _t->onAdvancedChanged(); break;
        case 10: _t->onMenuFramesEnabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: _t->onMenuAlwaysOnTop((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 12: _t->onMenuSnapToEdges(); break;
        case 13: _t->onMenuOpacity((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 14: _t->onMenuClearLabels(); break;
        case 15: _t->onSettingsAddToy((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 16: _t->onToysChanged(); break;
        case 17: _t->onToysToggledMainWindow(); break;
        case 18: _t->onToyTreeItemActivated((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 19: _t->onToyTreeCustomContextMenuRequested((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 20: _t->onToyTreeItemDeleted(); break;
        case 21: _t->onToyTreeItemAdded(); break;
        case 22: _t->onSystemTrayToggledMainWindow(); break;
        case 23: _t->onSystemTrayToggleToys(); break;
        case 24: _t->onSystemTrayExit(); break;
        case 25: _t->onSystemTrayActivated((*reinterpret_cast< QSystemTrayIcon::ActivationReason(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject MainWindow::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_MainWindow.data,
      qt_meta_data_MainWindow,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QWidget::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 26)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 26;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 26)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 26;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
