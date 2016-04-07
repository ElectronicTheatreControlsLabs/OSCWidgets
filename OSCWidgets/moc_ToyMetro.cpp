/****************************************************************************
** Meta object code from reading C++ file 'ToyMetro.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "ToyMetro.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ToyMetro.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_FadeMetro[] = {

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
      10,   20,   24,   24, 0x05,

 // slots: signature, parameters, type, tag, flags
      25,   41,   24,   24, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_FadeMetro[] = {
    "FadeMetro\0tick(int)\0pos\0\0onClicked(bool)\0"
    "checked\0"
};

void FadeMetro::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        FadeMetro *_t = static_cast<FadeMetro *>(_o);
        switch (_id) {
        case 0: _t->tick((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->onClicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData FadeMetro::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject FadeMetro::staticMetaObject = {
    { &FadeButton::staticMetaObject, qt_meta_stringdata_FadeMetro,
      qt_meta_data_FadeMetro, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &FadeMetro::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *FadeMetro::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *FadeMetro::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_FadeMetro))
        return static_cast<void*>(const_cast< FadeMetro*>(this));
    return FadeButton::qt_metacast(_clname);
}

int FadeMetro::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = FadeButton::qt_metacall(_c, _id, _a);
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
void FadeMetro::tick(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
static const uint qt_meta_data_ToyMetroWidget[] = {

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
      15,   41,   46,   46, 0x05,

 // slots: signature, parameters, type, tag, flags
      47,   59,   46,   46, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_ToyMetroWidget[] = {
    "ToyMetroWidget\0tick(ToyMetroWidget*,int)\0"
    ",pos\0\0onTick(int)\0pos\0"
};

void ToyMetroWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ToyMetroWidget *_t = static_cast<ToyMetroWidget *>(_o);
        switch (_id) {
        case 0: _t->tick((*reinterpret_cast< ToyMetroWidget*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->onTick((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ToyMetroWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ToyMetroWidget::staticMetaObject = {
    { &ToyWidget::staticMetaObject, qt_meta_stringdata_ToyMetroWidget,
      qt_meta_data_ToyMetroWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ToyMetroWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ToyMetroWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ToyMetroWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ToyMetroWidget))
        return static_cast<void*>(const_cast< ToyMetroWidget*>(this));
    return ToyWidget::qt_metacast(_clname);
}

int ToyMetroWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ToyWidget::qt_metacall(_c, _id, _a);
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
void ToyMetroWidget::tick(ToyMetroWidget * _t1, int _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
static const uint qt_meta_data_ToyMetroGrid[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      13,   41,   46,   46, 0x08,
      47,   46,   46,   46, 0x08,
      59,   79,   46,   46, 0x08,
      87,   79,   46,   46, 0x08,
     108,   79,   46,   46, 0x08,
     132,   79,   46,   46, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_ToyMetroGrid[] = {
    "ToyMetroGrid\0onTick(ToyMetroWidget*,int)\0"
    ",pos\0\0onTimeout()\0onPlayClicked(bool)\0"
    "checked\0onPauseClicked(bool)\0"
    "onReCenterClicked(bool)\0onFanClicked(bool)\0"
};

void ToyMetroGrid::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ToyMetroGrid *_t = static_cast<ToyMetroGrid *>(_o);
        switch (_id) {
        case 0: _t->onTick((*reinterpret_cast< ToyMetroWidget*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->onTimeout(); break;
        case 2: _t->onPlayClicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->onPauseClicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->onReCenterClicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->onFanClicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ToyMetroGrid::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ToyMetroGrid::staticMetaObject = {
    { &ToyGrid::staticMetaObject, qt_meta_stringdata_ToyMetroGrid,
      qt_meta_data_ToyMetroGrid, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ToyMetroGrid::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ToyMetroGrid::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ToyMetroGrid::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ToyMetroGrid))
        return static_cast<void*>(const_cast< ToyMetroGrid*>(this));
    return ToyGrid::qt_metacast(_clname);
}

int ToyMetroGrid::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ToyGrid::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
