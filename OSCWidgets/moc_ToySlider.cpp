/****************************************************************************
** Meta object code from reading C++ file 'ToySlider.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "ToySlider.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ToySlider.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_FadeSlider[] = {

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
      11,   33,   41,   41, 0x05,

 // slots: signature, parameters, type, tag, flags
      42,   41,   41,   41, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_FadeSlider[] = {
    "FadeSlider\0percentChanged(float)\0"
    "percent\0\0onRecvTimeout()\0"
};

void FadeSlider::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        FadeSlider *_t = static_cast<FadeSlider *>(_o);
        switch (_id) {
        case 0: _t->percentChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 1: _t->onRecvTimeout(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData FadeSlider::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject FadeSlider::staticMetaObject = {
    { &FadeButton::staticMetaObject, qt_meta_stringdata_FadeSlider,
      qt_meta_data_FadeSlider, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &FadeSlider::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *FadeSlider::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *FadeSlider::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_FadeSlider))
        return static_cast<void*>(const_cast< FadeSlider*>(this));
    return FadeButton::qt_metacast(_clname);
}

int FadeSlider::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void FadeSlider::percentChanged(float _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
static const uint qt_meta_data_ToySliderWidget[] = {

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
      16,   49,   49,   49, 0x05,

 // slots: signature, parameters, type, tag, flags
      50,   74,   49,   49, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_ToySliderWidget[] = {
    "ToySliderWidget\0percentChanged(ToySliderWidget*)\0"
    "\0onPercentChanged(float)\0percent\0"
};

void ToySliderWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ToySliderWidget *_t = static_cast<ToySliderWidget *>(_o);
        switch (_id) {
        case 0: _t->percentChanged((*reinterpret_cast< ToySliderWidget*(*)>(_a[1]))); break;
        case 1: _t->onPercentChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ToySliderWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ToySliderWidget::staticMetaObject = {
    { &ToyWidget::staticMetaObject, qt_meta_stringdata_ToySliderWidget,
      qt_meta_data_ToySliderWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ToySliderWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ToySliderWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ToySliderWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ToySliderWidget))
        return static_cast<void*>(const_cast< ToySliderWidget*>(this));
    return ToyWidget::qt_metacast(_clname);
}

int ToySliderWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void ToySliderWidget::percentChanged(ToySliderWidget * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
static const uint qt_meta_data_ToySliderGrid[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      14,   49,   49,   49, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_ToySliderGrid[] = {
    "ToySliderGrid\0onPercentChanged(ToySliderWidget*)\0"
    "\0"
};

void ToySliderGrid::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ToySliderGrid *_t = static_cast<ToySliderGrid *>(_o);
        switch (_id) {
        case 0: _t->onPercentChanged((*reinterpret_cast< ToySliderWidget*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ToySliderGrid::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ToySliderGrid::staticMetaObject = {
    { &ToyGrid::staticMetaObject, qt_meta_stringdata_ToySliderGrid,
      qt_meta_data_ToySliderGrid, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ToySliderGrid::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ToySliderGrid::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ToySliderGrid::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ToySliderGrid))
        return static_cast<void*>(const_cast< ToySliderGrid*>(this));
    return ToyGrid::qt_metacast(_clname);
}

int ToySliderGrid::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ToyGrid::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
