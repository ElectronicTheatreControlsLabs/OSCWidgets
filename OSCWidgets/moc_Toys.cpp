/****************************************************************************
** Meta object code from reading C++ file 'Toys.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "Toys.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Toys.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Toys[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
       5,   15,   15,   15, 0x05,
      16,   15,   15,   15, 0x05,

 // slots: signature, parameters, type, tag, flags
      35,   15,   15,   15, 0x08,
      58,   77,   15,   15, 0x08,
      81,   15,   15,   15, 0x08,
      96,   15,   15,   15, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Toys[] = {
    "Toys\0changed()\0\0toggleMainWindow()\0"
    "onRecvWidgetsChanged()\0onToyClosing(Toy*)\0"
    "toy\0onToyChanged()\0onToyToggledMainWindow()\0"
};

void Toys::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Toys *_t = static_cast<Toys *>(_o);
        switch (_id) {
        case 0: _t->changed(); break;
        case 1: _t->toggleMainWindow(); break;
        case 2: _t->onRecvWidgetsChanged(); break;
        case 3: _t->onToyClosing((*reinterpret_cast< Toy*(*)>(_a[1]))); break;
        case 4: _t->onToyChanged(); break;
        case 5: _t->onToyToggledMainWindow(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Toys::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Toys::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Toys,
      qt_meta_data_Toys, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Toys::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Toys::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Toys::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Toys))
        return static_cast<void*>(const_cast< Toys*>(this));
    return QObject::qt_metacast(_clname);
}

int Toys::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void Toys::changed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void Toys::toggleMainWindow()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
QT_END_MOC_NAMESPACE
