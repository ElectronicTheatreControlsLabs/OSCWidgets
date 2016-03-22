/****************************************************************************
** Meta object code from reading C++ file 'Toys.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "Toys.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Toys.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Toys_t {
    QByteArrayData data[10];
    char stringdata0[110];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Toys_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Toys_t qt_meta_stringdata_Toys = {
    {
QT_MOC_LITERAL(0, 0, 4), // "Toys"
QT_MOC_LITERAL(1, 5, 7), // "changed"
QT_MOC_LITERAL(2, 13, 0), // ""
QT_MOC_LITERAL(3, 14, 16), // "toggleMainWindow"
QT_MOC_LITERAL(4, 31, 20), // "onRecvWidgetsChanged"
QT_MOC_LITERAL(5, 52, 12), // "onToyClosing"
QT_MOC_LITERAL(6, 65, 4), // "Toy*"
QT_MOC_LITERAL(7, 70, 3), // "toy"
QT_MOC_LITERAL(8, 74, 12), // "onToyChanged"
QT_MOC_LITERAL(9, 87, 22) // "onToyToggledMainWindow"

    },
    "Toys\0changed\0\0toggleMainWindow\0"
    "onRecvWidgetsChanged\0onToyClosing\0"
    "Toy*\0toy\0onToyChanged\0onToyToggledMainWindow"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Toys[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x06 /* Public */,
       3,    0,   45,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   46,    2, 0x08 /* Private */,
       5,    1,   47,    2, 0x08 /* Private */,
       8,    0,   50,    2, 0x08 /* Private */,
       9,    0,   51,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Toys::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Toys *_t = static_cast<Toys *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->changed(); break;
        case 1: _t->toggleMainWindow(); break;
        case 2: _t->onRecvWidgetsChanged(); break;
        case 3: _t->onToyClosing((*reinterpret_cast< Toy*(*)>(_a[1]))); break;
        case 4: _t->onToyChanged(); break;
        case 5: _t->onToyToggledMainWindow(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Toy* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Toys::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Toys::changed)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (Toys::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Toys::toggleMainWindow)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject Toys::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Toys.data,
      qt_meta_data_Toys,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Toys::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Toys::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Toys.stringdata0))
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
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void Toys::changed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void Toys::toggleMainWindow()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
