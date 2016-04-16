/****************************************************************************
** Meta object code from reading C++ file 'ToySine.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "ToySine.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ToySine.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_FadeSine[] = {

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
       9,   21,   27,   27, 0x05,

 // slots: signature, parameters, type, tag, flags
      28,   44,   27,   27, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_FadeSine[] = {
    "FadeSine\0tick(float)\0value\0\0onClicked(bool)\0"
    "checked\0"
};

void FadeSine::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        FadeSine *_t = static_cast<FadeSine *>(_o);
        switch (_id) {
        case 0: _t->tick((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 1: _t->onClicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData FadeSine::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject FadeSine::staticMetaObject = {
    { &FadeButton::staticMetaObject, qt_meta_stringdata_FadeSine,
      qt_meta_data_FadeSine, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &FadeSine::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *FadeSine::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *FadeSine::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_FadeSine))
        return static_cast<void*>(const_cast< FadeSine*>(this));
    return FadeButton::qt_metacast(_clname);
}

int FadeSine::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void FadeSine::tick(float _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
static const uint qt_meta_data_ToySineWidget[] = {

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
      14,   41,   48,   48, 0x05,

 // slots: signature, parameters, type, tag, flags
      49,   63,   48,   48, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_ToySineWidget[] = {
    "ToySineWidget\0tick(ToySineWidget*,float)\0"
    ",value\0\0onTick(float)\0value\0"
};

void ToySineWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ToySineWidget *_t = static_cast<ToySineWidget *>(_o);
        switch (_id) {
        case 0: _t->tick((*reinterpret_cast< ToySineWidget*(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2]))); break;
        case 1: _t->onTick((*reinterpret_cast< float(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ToySineWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ToySineWidget::staticMetaObject = {
    { &ToyWidget::staticMetaObject, qt_meta_stringdata_ToySineWidget,
      qt_meta_data_ToySineWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ToySineWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ToySineWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ToySineWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ToySineWidget))
        return static_cast<void*>(const_cast< ToySineWidget*>(this));
    return ToyWidget::qt_metacast(_clname);
}

int ToySineWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void ToySineWidget::tick(ToySineWidget * _t1, float _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
static const uint qt_meta_data_ToySineGrid[] = {

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
      12,   41,   48,   48, 0x08,
      49,   48,   48,   48, 0x08,
      61,   81,   48,   48, 0x08,
      89,   81,   48,   48, 0x08,
     110,   81,   48,   48, 0x08,
     134,   81,   48,   48, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_ToySineGrid[] = {
    "ToySineGrid\0onTick(ToySineWidget*,float)\0"
    ",value\0\0onTimeout()\0onPlayClicked(bool)\0"
    "checked\0onPauseClicked(bool)\0"
    "onReCenterClicked(bool)\0onFanClicked(bool)\0"
};

void ToySineGrid::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ToySineGrid *_t = static_cast<ToySineGrid *>(_o);
        switch (_id) {
        case 0: _t->onTick((*reinterpret_cast< ToySineWidget*(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2]))); break;
        case 1: _t->onTimeout(); break;
        case 2: _t->onPlayClicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->onPauseClicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->onReCenterClicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->onFanClicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ToySineGrid::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ToySineGrid::staticMetaObject = {
    { &ToyGrid::staticMetaObject, qt_meta_stringdata_ToySineGrid,
      qt_meta_data_ToySineGrid, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ToySineGrid::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ToySineGrid::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ToySineGrid::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ToySineGrid))
        return static_cast<void*>(const_cast< ToySineGrid*>(this));
    return ToyGrid::qt_metacast(_clname);
}

int ToySineGrid::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
