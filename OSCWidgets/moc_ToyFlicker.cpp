/****************************************************************************
** Meta object code from reading C++ file 'ToyFlicker.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "ToyFlicker.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ToyFlicker.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_FadeFlicker[] = {

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
      12,   32,   38,   38, 0x05,

 // slots: signature, parameters, type, tag, flags
      39,   55,   38,   38, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_FadeFlicker[] = {
    "FadeFlicker\0valueChanged(float)\0value\0"
    "\0onClicked(bool)\0checked\0"
};

void FadeFlicker::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        FadeFlicker *_t = static_cast<FadeFlicker *>(_o);
        switch (_id) {
        case 0: _t->valueChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 1: _t->onClicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData FadeFlicker::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject FadeFlicker::staticMetaObject = {
    { &FadeButton::staticMetaObject, qt_meta_stringdata_FadeFlicker,
      qt_meta_data_FadeFlicker, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &FadeFlicker::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *FadeFlicker::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *FadeFlicker::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_FadeFlicker))
        return static_cast<void*>(const_cast< FadeFlicker*>(this));
    return FadeButton::qt_metacast(_clname);
}

int FadeFlicker::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void FadeFlicker::valueChanged(float _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
static const uint qt_meta_data_ToyFlickerWidget[] = {

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
      17,   55,   62,   62, 0x05,

 // slots: signature, parameters, type, tag, flags
      63,   85,   62,   62, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_ToyFlickerWidget[] = {
    "ToyFlickerWidget\0valueChanged(ToyFlickerWidget*,float)\0"
    ",value\0\0onValueChanged(float)\0value\0"
};

void ToyFlickerWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ToyFlickerWidget *_t = static_cast<ToyFlickerWidget *>(_o);
        switch (_id) {
        case 0: _t->valueChanged((*reinterpret_cast< ToyFlickerWidget*(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2]))); break;
        case 1: _t->onValueChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ToyFlickerWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ToyFlickerWidget::staticMetaObject = {
    { &ToyWidget::staticMetaObject, qt_meta_stringdata_ToyFlickerWidget,
      qt_meta_data_ToyFlickerWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ToyFlickerWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ToyFlickerWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ToyFlickerWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ToyFlickerWidget))
        return static_cast<void*>(const_cast< ToyFlickerWidget*>(this));
    return ToyWidget::qt_metacast(_clname);
}

int ToyFlickerWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void ToyFlickerWidget::valueChanged(ToyFlickerWidget * _t1, float _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
static const uint qt_meta_data_ToyFlickerGrid[] = {

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
      15,   55,   62,   62, 0x08,
      63,   62,   62,   62, 0x08,
      75,   95,   62,   62, 0x08,
     103,   95,   62,   62, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_ToyFlickerGrid[] = {
    "ToyFlickerGrid\0onValueChanged(ToyFlickerWidget*,float)\0"
    ",value\0\0onTimeout()\0onPlayClicked(bool)\0"
    "checked\0onPauseClicked(bool)\0"
};

void ToyFlickerGrid::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ToyFlickerGrid *_t = static_cast<ToyFlickerGrid *>(_o);
        switch (_id) {
        case 0: _t->onValueChanged((*reinterpret_cast< ToyFlickerWidget*(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2]))); break;
        case 1: _t->onTimeout(); break;
        case 2: _t->onPlayClicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->onPauseClicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ToyFlickerGrid::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ToyFlickerGrid::staticMetaObject = {
    { &ToyGrid::staticMetaObject, qt_meta_stringdata_ToyFlickerGrid,
      qt_meta_data_ToyFlickerGrid, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ToyFlickerGrid::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ToyFlickerGrid::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ToyFlickerGrid::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ToyFlickerGrid))
        return static_cast<void*>(const_cast< ToyFlickerGrid*>(this));
    return ToyGrid::qt_metacast(_clname);
}

int ToyFlickerGrid::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
