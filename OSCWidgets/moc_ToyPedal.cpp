/****************************************************************************
** Meta object code from reading C++ file 'ToyPedal.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "ToyPedal.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ToyPedal.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_FadePedal[] = {

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
      10,   22,   28,   28, 0x05,

 // slots: signature, parameters, type, tag, flags
      29,   28,   28,   28, 0x08,
      41,   28,   28,   28, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_FadePedal[] = {
    "FadePedal\0tick(float)\0value\0\0onPressed()\0"
    "onReleased()\0"
};

void FadePedal::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        FadePedal *_t = static_cast<FadePedal *>(_o);
        switch (_id) {
        case 0: _t->tick((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 1: _t->onPressed(); break;
        case 2: _t->onReleased(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData FadePedal::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject FadePedal::staticMetaObject = {
    { &FadeButton::staticMetaObject, qt_meta_stringdata_FadePedal,
      qt_meta_data_FadePedal, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &FadePedal::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *FadePedal::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *FadePedal::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_FadePedal))
        return static_cast<void*>(const_cast< FadePedal*>(this));
    return FadeButton::qt_metacast(_clname);
}

int FadePedal::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void FadePedal::tick(float _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
static const uint qt_meta_data_ToyPedalWidget[] = {

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
      15,   43,   50,   50, 0x05,

 // slots: signature, parameters, type, tag, flags
      51,   65,   50,   50, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_ToyPedalWidget[] = {
    "ToyPedalWidget\0tick(ToyPedalWidget*,float)\0"
    ",value\0\0onTick(float)\0value\0"
};

void ToyPedalWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ToyPedalWidget *_t = static_cast<ToyPedalWidget *>(_o);
        switch (_id) {
        case 0: _t->tick((*reinterpret_cast< ToyPedalWidget*(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2]))); break;
        case 1: _t->onTick((*reinterpret_cast< float(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ToyPedalWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ToyPedalWidget::staticMetaObject = {
    { &ToyWidget::staticMetaObject, qt_meta_stringdata_ToyPedalWidget,
      qt_meta_data_ToyPedalWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ToyPedalWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ToyPedalWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ToyPedalWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ToyPedalWidget))
        return static_cast<void*>(const_cast< ToyPedalWidget*>(this));
    return ToyWidget::qt_metacast(_clname);
}

int ToyPedalWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void ToyPedalWidget::tick(ToyPedalWidget * _t1, float _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
static const uint qt_meta_data_ToyPedalGrid[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      13,   43,   50,   50, 0x08,
      51,   50,   50,   50, 0x08,
      63,   50,   50,   50, 0x08,
      80,   50,   50,   50, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_ToyPedalGrid[] = {
    "ToyPedalGrid\0onTick(ToyPedalWidget*,float)\0"
    ",value\0\0onTimeout()\0onPressPressed()\0"
    "onPressReleased()\0"
};

void ToyPedalGrid::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ToyPedalGrid *_t = static_cast<ToyPedalGrid *>(_o);
        switch (_id) {
        case 0: _t->onTick((*reinterpret_cast< ToyPedalWidget*(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2]))); break;
        case 1: _t->onTimeout(); break;
        case 2: _t->onPressPressed(); break;
        case 3: _t->onPressReleased(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ToyPedalGrid::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ToyPedalGrid::staticMetaObject = {
    { &ToyGrid::staticMetaObject, qt_meta_stringdata_ToyPedalGrid,
      qt_meta_data_ToyPedalGrid, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ToyPedalGrid::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ToyPedalGrid::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ToyPedalGrid::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ToyPedalGrid))
        return static_cast<void*>(const_cast< ToyPedalGrid*>(this));
    return ToyGrid::qt_metacast(_clname);
}

int ToyPedalGrid::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ToyGrid::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
