/****************************************************************************
** Meta object code from reading C++ file 'ToyGrid.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "ToyGrid.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ToyGrid.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_GridSizeButton[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      15,   40,   48,   48, 0x05,
      49,   40,   48,   48, 0x05,

 // slots: signature, parameters, type, tag, flags
      74,   90,   48,   48, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_GridSizeButton[] = {
    "GridSizeButton\0hoveredGridSize(int,int)\0"
    "col,row\0\0clickedGridSize(int,int)\0"
    "onClicked(bool)\0checked\0"
};

void GridSizeButton::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        GridSizeButton *_t = static_cast<GridSizeButton *>(_o);
        switch (_id) {
        case 0: _t->hoveredGridSize((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->clickedGridSize((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: _t->onClicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData GridSizeButton::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject GridSizeButton::staticMetaObject = {
    { &FadeButton::staticMetaObject, qt_meta_stringdata_GridSizeButton,
      qt_meta_data_GridSizeButton, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &GridSizeButton::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *GridSizeButton::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *GridSizeButton::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_GridSizeButton))
        return static_cast<void*>(const_cast< GridSizeButton*>(this));
    return FadeButton::qt_metacast(_clname);
}

int GridSizeButton::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = FadeButton::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void GridSizeButton::hoveredGridSize(int _t1, int _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void GridSizeButton::clickedGridSize(int _t1, int _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
static const uint qt_meta_data_GridSizeMenu[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      13,   32,   37,   37, 0x05,

 // slots: signature, parameters, type, tag, flags
      38,   57,   37,   37, 0x08,
      65,   57,   37,   37, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_GridSizeMenu[] = {
    "GridSizeMenu\0gridResized(QSize)\0size\0"
    "\0onHovered(int,int)\0col,row\0"
    "onClicked(int,int)\0"
};

void GridSizeMenu::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        GridSizeMenu *_t = static_cast<GridSizeMenu *>(_o);
        switch (_id) {
        case 0: _t->gridResized((*reinterpret_cast< const QSize(*)>(_a[1]))); break;
        case 1: _t->onHovered((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: _t->onClicked((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData GridSizeMenu::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject GridSizeMenu::staticMetaObject = {
    { &QMenu::staticMetaObject, qt_meta_stringdata_GridSizeMenu,
      qt_meta_data_GridSizeMenu, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &GridSizeMenu::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *GridSizeMenu::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *GridSizeMenu::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_GridSizeMenu))
        return static_cast<void*>(const_cast< GridSizeMenu*>(this));
    return QMenu::qt_metacast(_clname);
}

int GridSizeMenu::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMenu::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void GridSizeMenu::gridResized(const QSize & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
static const uint qt_meta_data_ToyGrid[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
       8,   17,   17,   17, 0x08,
      18,   17,   17,   17, 0x08,
      36,   17,   17,   17, 0x08,
      47,   17,   17,   17, 0x08,
      68,   95,   17,   17, 0x08,
     102,   17,   17,   17, 0x08,
     113,   17,   17,   17, 0x08,
     122,  143,   17,   17, 0x08,
     148,   17,   17,   17, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_ToyGrid[] = {
    "ToyGrid\0onEdit()\0\0onEditToyWidget()\0"
    "onDelete()\0onToggleMainWindow()\0"
    "onWidgetEdited(ToyWidget*)\0widget\0"
    "onEdited()\0onDone()\0onGridResized(QSize)\0"
    "size\0onClearLabels()\0"
};

void ToyGrid::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ToyGrid *_t = static_cast<ToyGrid *>(_o);
        switch (_id) {
        case 0: _t->onEdit(); break;
        case 1: _t->onEditToyWidget(); break;
        case 2: _t->onDelete(); break;
        case 3: _t->onToggleMainWindow(); break;
        case 4: _t->onWidgetEdited((*reinterpret_cast< ToyWidget*(*)>(_a[1]))); break;
        case 5: _t->onEdited(); break;
        case 6: _t->onDone(); break;
        case 7: _t->onGridResized((*reinterpret_cast< const QSize(*)>(_a[1]))); break;
        case 8: _t->onClearLabels(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ToyGrid::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ToyGrid::staticMetaObject = {
    { &Toy::staticMetaObject, qt_meta_stringdata_ToyGrid,
      qt_meta_data_ToyGrid, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ToyGrid::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ToyGrid::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ToyGrid::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ToyGrid))
        return static_cast<void*>(const_cast< ToyGrid*>(this));
    return Toy::qt_metacast(_clname);
}

int ToyGrid::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Toy::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
