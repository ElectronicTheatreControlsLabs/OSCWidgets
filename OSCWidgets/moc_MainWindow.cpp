/****************************************************************************
** Meta object code from reading C++ file 'MainWindow.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "MainWindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MainWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_OpacityAction[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      14,   40,   48,   48, 0x05,

 // slots: signature, parameters, type, tag, flags
      49,   65,   48,   48, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_OpacityAction[] = {
    "OpacityAction\0triggeredWithOpacity(int)\0"
    "opacity\0\0onToggled(bool)\0checked\0"
};

void OpacityAction::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        OpacityAction *_t = static_cast<OpacityAction *>(_o);
        switch (_id) {
        case 0: _t->triggeredWithOpacity((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->onToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData OpacityAction::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject OpacityAction::staticMetaObject = {
    { &QAction::staticMetaObject, qt_meta_stringdata_OpacityAction,
      qt_meta_data_OpacityAction, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &OpacityAction::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *OpacityAction::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *OpacityAction::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_OpacityAction))
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
    }
    return _id;
}

// SIGNAL 0
void OpacityAction::triggeredWithOpacity(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
static const uint qt_meta_data_OpacityMenu[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      12,   32,   40,   40, 0x05,

 // slots: signature, parameters, type, tag, flags
      41,   32,   40,   40, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_OpacityMenu[] = {
    "OpacityMenu\0opacityChanged(int)\0opacity\0"
    "\0onTriggeredWithOpacity(int)\0"
};

void OpacityMenu::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        OpacityMenu *_t = static_cast<OpacityMenu *>(_o);
        switch (_id) {
        case 0: _t->opacityChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->onTriggeredWithOpacity((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData OpacityMenu::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject OpacityMenu::staticMetaObject = {
    { &QMenu::staticMetaObject, qt_meta_stringdata_OpacityMenu,
      qt_meta_data_OpacityMenu, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &OpacityMenu::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *OpacityMenu::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *OpacityMenu::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_OpacityMenu))
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
    }
    return _id;
}

// SIGNAL 0
void OpacityMenu::opacityChanged(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
static const uint qt_meta_data_MainWindow[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      26,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      11,   20,   20,   20, 0x08,
      21,   20,   20,   20, 0x08,
      40,   20,   20,   20, 0x08,
      60,   20,   20,   20, 0x08,
      80,   20,   20,   20, 0x08,
     102,   20,   20,   20, 0x08,
     122,   20,   20,   20, 0x08,
     141,   20,   20,   20, 0x08,
     161,   20,   20,   20, 0x08,
     181,   20,   20,   20, 0x08,
     201,  227,   20,   20, 0x08,
     229,  227,   20,   20, 0x08,
     253,   20,   20,   20, 0x08,
     273,  292,   20,   20, 0x08,
     300,   20,   20,   20, 0x08,
     320,  342,   20,   20, 0x08,
     347,   20,   20,   20, 0x08,
     363,   20,   20,   20, 0x08,
     389,  434,   20,   20, 0x08,
     446,  490,   20,   20, 0x08,
     492,   20,   20,   20, 0x08,
     515,   20,   20,   20, 0x08,
     536,   20,   20,   20, 0x08,
     568,   20,   20,   20, 0x08,
     593,   20,   20,   20, 0x08,
     612,  669,   20,   20, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_MainWindow[] = {
    "MainWindow\0onTick()\0\0onNewFileClicked()\0"
    "onOpenFileClicked()\0onSaveFileClicked()\0"
    "onSaveAsFileClicked()\0onClearLogClicked()\0"
    "onOpenLogClicked()\0onSettingsChanged()\0"
    "onAdvancedClicked()\0onAdvancedChanged()\0"
    "onMenuFramesEnabled(bool)\0b\0"
    "onMenuAlwaysOnTop(bool)\0onMenuSnapToEdges()\0"
    "onMenuOpacity(int)\0opacity\0"
    "onMenuClearLabels()\0onSettingsAddToy(int)\0"
    "type\0onToysChanged()\0onToysToggledMainWindow()\0"
    "onToyTreeItemActivated(QTreeWidgetItem*,int)\0"
    "item,column\0onToyTreeCustomContextMenuRequested(QPoint)\0"
    "p\0onToyTreeItemDeleted()\0onToyTreeItemAdded()\0"
    "onSystemTrayToggledMainWindow()\0"
    "onSystemTrayToggleToys()\0onSystemTrayExit()\0"
    "onSystemTrayActivated(QSystemTrayIcon::ActivationReason)\0"
    "reason\0"
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        MainWindow *_t = static_cast<MainWindow *>(_o);
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

const QMetaObjectExtraData MainWindow::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject MainWindow::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_MainWindow,
      qt_meta_data_MainWindow, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MainWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow))
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
    }
    return _id;
}
QT_END_MOC_NAMESPACE
