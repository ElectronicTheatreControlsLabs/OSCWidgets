/****************************************************************************
** Meta object code from reading C++ file 'Toy.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "Toy.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Toy.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Toy[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: signature, parameters, type, tag, flags
       4,   14,   14,   14, 0x05,
      15,   14,   14,   14, 0x05,
      36,   50,   14,   14, 0x05,
      54,   14,   14,   14, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_Toy[] = {
    "Toy\0changed()\0\0recvWidgetsChanged()\0"
    "closing(Toy*)\0toy\0toggleMainWindow()\0"
};

void Toy::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Toy *_t = static_cast<Toy *>(_o);
        switch (_id) {
        case 0: _t->changed(); break;
        case 1: _t->recvWidgetsChanged(); break;
        case 2: _t->closing((*reinterpret_cast< Toy*(*)>(_a[1]))); break;
        case 3: _t->toggleMainWindow(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Toy::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Toy::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Toy,
      qt_meta_data_Toy, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Toy::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Toy::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Toy::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Toy))
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
    }
    return _id;
}

// SIGNAL 0
void Toy::changed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void Toy::recvWidgetsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void Toy::closing(Toy * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Toy::toggleMainWindow()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}
QT_END_MOC_NAMESPACE
