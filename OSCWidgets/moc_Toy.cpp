/****************************************************************************
** Meta object code from reading C++ file 'Toy.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "Toy.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Toy.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Toy_t {
    QByteArrayData data[8];
    char stringdata0[66];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Toy_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Toy_t qt_meta_stringdata_Toy = {
    {
QT_MOC_LITERAL(0, 0, 3), // "Toy"
QT_MOC_LITERAL(1, 4, 7), // "changed"
QT_MOC_LITERAL(2, 12, 0), // ""
QT_MOC_LITERAL(3, 13, 18), // "recvWidgetsChanged"
QT_MOC_LITERAL(4, 32, 7), // "closing"
QT_MOC_LITERAL(5, 40, 4), // "Toy*"
QT_MOC_LITERAL(6, 45, 3), // "toy"
QT_MOC_LITERAL(7, 49, 16) // "toggleMainWindow"

    },
    "Toy\0changed\0\0recvWidgetsChanged\0closing\0"
    "Toy*\0toy\0toggleMainWindow"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Toy[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x06 /* Public */,
       3,    0,   35,    2, 0x06 /* Public */,
       4,    1,   36,    2, 0x06 /* Public */,
       7,    0,   39,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void,

       0        // eod
};

void Toy::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Toy *_t = static_cast<Toy *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->changed(); break;
        case 1: _t->recvWidgetsChanged(); break;
        case 2: _t->closing((*reinterpret_cast< Toy*(*)>(_a[1]))); break;
        case 3: _t->toggleMainWindow(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
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
            typedef void (Toy::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Toy::changed)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (Toy::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Toy::recvWidgetsChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (Toy::*_t)(Toy * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Toy::closing)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (Toy::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Toy::toggleMainWindow)) {
                *result = 3;
                return;
            }
        }
    }
}

const QMetaObject Toy::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Toy.data,
      qt_meta_data_Toy,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Toy::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Toy::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Toy.stringdata0))
        return static_cast<void*>(const_cast< Toy*>(this));
    return QWidget::qt_metacast(_clname);
}

int Toy::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void Toy::changed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void Toy::recvWidgetsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void Toy::closing(Toy * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Toy::toggleMainWindow()
{
    QMetaObject::activate(this, &staticMetaObject, 3, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
