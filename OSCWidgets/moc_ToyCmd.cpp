/****************************************************************************
** Meta object code from reading C++ file 'ToyCmd.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "ToyCmd.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ToyCmd.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ToyCmdWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      13,   33,   33,   33, 0x05,

 // slots: signature, parameters, type, tag, flags
      34,   33,   33,   33, 0x08,
      54,   33,   33,   33, 0x08,
      72,   92,   33,   33, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_ToyCmdWidget[] = {
    "ToyCmdWidget\0send(ToyCmdWidget*)\0\0"
    "onEditingFinished()\0onReturnPressed()\0"
    "onSendClicked(bool)\0checked\0"
};

void ToyCmdWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ToyCmdWidget *_t = static_cast<ToyCmdWidget *>(_o);
        switch (_id) {
        case 0: _t->send((*reinterpret_cast< ToyCmdWidget*(*)>(_a[1]))); break;
        case 1: _t->onEditingFinished(); break;
        case 2: _t->onReturnPressed(); break;
        case 3: _t->onSendClicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ToyCmdWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ToyCmdWidget::staticMetaObject = {
    { &ToyWidget::staticMetaObject, qt_meta_stringdata_ToyCmdWidget,
      qt_meta_data_ToyCmdWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ToyCmdWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ToyCmdWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ToyCmdWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ToyCmdWidget))
        return static_cast<void*>(const_cast< ToyCmdWidget*>(this));
    return ToyWidget::qt_metacast(_clname);
}

int ToyCmdWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void ToyCmdWidget::send(ToyCmdWidget * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
static const uint qt_meta_data_ToyCmdGrid[] = {

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
      11,   33,   33,   33, 0x08,
      34,   57,   33,   33, 0x08,
      65,   33,   33,   33, 0x08,
      84,  111,   33,   33, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_ToyCmdGrid[] = {
    "ToyCmdGrid\0onSend(ToyCmdWidget*)\0\0"
    "onSendAllClicked(bool)\0checked\0"
    "onSendAllTimeout()\0onStartupStateChanged(int)\0"
    "state\0"
};

void ToyCmdGrid::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ToyCmdGrid *_t = static_cast<ToyCmdGrid *>(_o);
        switch (_id) {
        case 0: _t->onSend((*reinterpret_cast< ToyCmdWidget*(*)>(_a[1]))); break;
        case 1: _t->onSendAllClicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->onSendAllTimeout(); break;
        case 3: _t->onStartupStateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ToyCmdGrid::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ToyCmdGrid::staticMetaObject = {
    { &ToyGrid::staticMetaObject, qt_meta_stringdata_ToyCmdGrid,
      qt_meta_data_ToyCmdGrid, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ToyCmdGrid::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ToyCmdGrid::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ToyCmdGrid::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ToyCmdGrid))
        return static_cast<void*>(const_cast< ToyCmdGrid*>(this));
    return ToyGrid::qt_metacast(_clname);
}

int ToyCmdGrid::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
