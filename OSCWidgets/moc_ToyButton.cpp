/****************************************************************************
** Meta object code from reading C++ file 'ToyButton.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "ToyButton.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ToyButton.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ToyButtonWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      16,   42,   42,   42, 0x05,
      43,   42,   42,   42, 0x05,

 // slots: signature, parameters, type, tag, flags
      70,   42,   42,   42, 0x08,
      82,   42,   42,   42, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_ToyButtonWidget[] = {
    "ToyButtonWidget\0pressed(ToyButtonWidget*)\0"
    "\0released(ToyButtonWidget*)\0onPressed()\0"
    "onReleased()\0"
};

void ToyButtonWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ToyButtonWidget *_t = static_cast<ToyButtonWidget *>(_o);
        switch (_id) {
        case 0: _t->pressed((*reinterpret_cast< ToyButtonWidget*(*)>(_a[1]))); break;
        case 1: _t->released((*reinterpret_cast< ToyButtonWidget*(*)>(_a[1]))); break;
        case 2: _t->onPressed(); break;
        case 3: _t->onReleased(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ToyButtonWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ToyButtonWidget::staticMetaObject = {
    { &ToyWidget::staticMetaObject, qt_meta_stringdata_ToyButtonWidget,
      qt_meta_data_ToyButtonWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ToyButtonWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ToyButtonWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ToyButtonWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ToyButtonWidget))
        return static_cast<void*>(const_cast< ToyButtonWidget*>(this));
    return ToyWidget::qt_metacast(_clname);
}

int ToyButtonWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ToyWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void ToyButtonWidget::pressed(ToyButtonWidget * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ToyButtonWidget::released(ToyButtonWidget * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
static const uint qt_meta_data_ToyButtonGrid[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      14,   42,   42,   42, 0x08,
      43,   42,   42,   42, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_ToyButtonGrid[] = {
    "ToyButtonGrid\0onPressed(ToyButtonWidget*)\0"
    "\0onReleased(ToyButtonWidget*)\0"
};

void ToyButtonGrid::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ToyButtonGrid *_t = static_cast<ToyButtonGrid *>(_o);
        switch (_id) {
        case 0: _t->onPressed((*reinterpret_cast< ToyButtonWidget*(*)>(_a[1]))); break;
        case 1: _t->onReleased((*reinterpret_cast< ToyButtonWidget*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ToyButtonGrid::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ToyButtonGrid::staticMetaObject = {
    { &ToyGrid::staticMetaObject, qt_meta_stringdata_ToyButtonGrid,
      qt_meta_data_ToyButtonGrid, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ToyButtonGrid::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ToyButtonGrid::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ToyButtonGrid::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ToyButtonGrid))
        return static_cast<void*>(const_cast< ToyButtonGrid*>(this));
    return ToyGrid::qt_metacast(_clname);
}

int ToyButtonGrid::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ToyGrid::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
