/****************************************************************************
** Meta object code from reading C++ file 'ToyXY.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "ToyXY.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ToyXY.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_FadeXY[] = {

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
       7,   27,   31,   31, 0x05,

 // slots: signature, parameters, type, tag, flags
      32,   31,   31,   31, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_FadeXY[] = {
    "FadeXY\0posChanged(QPointF)\0pos\0\0"
    "onRecvTimeout()\0"
};

void FadeXY::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        FadeXY *_t = static_cast<FadeXY *>(_o);
        switch (_id) {
        case 0: _t->posChanged((*reinterpret_cast< const QPointF(*)>(_a[1]))); break;
        case 1: _t->onRecvTimeout(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData FadeXY::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject FadeXY::staticMetaObject = {
    { &FadeButton::staticMetaObject, qt_meta_stringdata_FadeXY,
      qt_meta_data_FadeXY, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &FadeXY::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *FadeXY::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *FadeXY::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_FadeXY))
        return static_cast<void*>(const_cast< FadeXY*>(this));
    return FadeButton::qt_metacast(_clname);
}

int FadeXY::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void FadeXY::posChanged(const QPointF & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
static const uint qt_meta_data_ToyXYWidget[] = {

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
      12,   37,   37,   37, 0x05,

 // slots: signature, parameters, type, tag, flags
      38,   60,   37,   37, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_ToyXYWidget[] = {
    "ToyXYWidget\0posChanged(ToyXYWidget*)\0"
    "\0onPosChanged(QPointF)\0pos\0"
};

void ToyXYWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ToyXYWidget *_t = static_cast<ToyXYWidget *>(_o);
        switch (_id) {
        case 0: _t->posChanged((*reinterpret_cast< ToyXYWidget*(*)>(_a[1]))); break;
        case 1: _t->onPosChanged((*reinterpret_cast< const QPointF(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ToyXYWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ToyXYWidget::staticMetaObject = {
    { &ToyWidget::staticMetaObject, qt_meta_stringdata_ToyXYWidget,
      qt_meta_data_ToyXYWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ToyXYWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ToyXYWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ToyXYWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ToyXYWidget))
        return static_cast<void*>(const_cast< ToyXYWidget*>(this));
    return ToyWidget::qt_metacast(_clname);
}

int ToyXYWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void ToyXYWidget::posChanged(ToyXYWidget * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
static const uint qt_meta_data_ToyXYGrid[] = {

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
      10,   37,   37,   37, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_ToyXYGrid[] = {
    "ToyXYGrid\0onPosChanged(ToyXYWidget*)\0"
    "\0"
};

void ToyXYGrid::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ToyXYGrid *_t = static_cast<ToyXYGrid *>(_o);
        switch (_id) {
        case 0: _t->onPosChanged((*reinterpret_cast< ToyXYWidget*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ToyXYGrid::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ToyXYGrid::staticMetaObject = {
    { &ToyGrid::staticMetaObject, qt_meta_stringdata_ToyXYGrid,
      qt_meta_data_ToyXYGrid, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ToyXYGrid::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ToyXYGrid::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ToyXYGrid::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ToyXYGrid))
        return static_cast<void*>(const_cast< ToyXYGrid*>(this));
    return ToyGrid::qt_metacast(_clname);
}

int ToyXYGrid::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
