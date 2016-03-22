/****************************************************************************
** Meta object code from reading C++ file 'ToyCmd.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "ToyCmd.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ToyCmd.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ToyCmdWidget_t {
    QByteArrayData data[8];
    char stringdata0[89];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ToyCmdWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ToyCmdWidget_t qt_meta_stringdata_ToyCmdWidget = {
    {
QT_MOC_LITERAL(0, 0, 12), // "ToyCmdWidget"
QT_MOC_LITERAL(1, 13, 4), // "send"
QT_MOC_LITERAL(2, 18, 0), // ""
QT_MOC_LITERAL(3, 19, 13), // "ToyCmdWidget*"
QT_MOC_LITERAL(4, 33, 17), // "onEditingFinished"
QT_MOC_LITERAL(5, 51, 15), // "onReturnPressed"
QT_MOC_LITERAL(6, 67, 13), // "onSendClicked"
QT_MOC_LITERAL(7, 81, 7) // "checked"

    },
    "ToyCmdWidget\0send\0\0ToyCmdWidget*\0"
    "onEditingFinished\0onReturnPressed\0"
    "onSendClicked\0checked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ToyCmdWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   37,    2, 0x08 /* Private */,
       5,    0,   38,    2, 0x08 /* Private */,
       6,    1,   39,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    7,

       0        // eod
};

void ToyCmdWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ToyCmdWidget *_t = static_cast<ToyCmdWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->send((*reinterpret_cast< ToyCmdWidget*(*)>(_a[1]))); break;
        case 1: _t->onEditingFinished(); break;
        case 2: _t->onReturnPressed(); break;
        case 3: _t->onSendClicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< ToyCmdWidget* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ToyCmdWidget::*_t)(ToyCmdWidget * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ToyCmdWidget::send)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject ToyCmdWidget::staticMetaObject = {
    { &ToyWidget::staticMetaObject, qt_meta_stringdata_ToyCmdWidget.data,
      qt_meta_data_ToyCmdWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ToyCmdWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ToyCmdWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ToyCmdWidget.stringdata0))
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
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void ToyCmdWidget::send(ToyCmdWidget * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_ToyCmdGrid_t {
    QByteArrayData data[9];
    char stringdata0[103];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ToyCmdGrid_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ToyCmdGrid_t qt_meta_stringdata_ToyCmdGrid = {
    {
QT_MOC_LITERAL(0, 0, 10), // "ToyCmdGrid"
QT_MOC_LITERAL(1, 11, 6), // "onSend"
QT_MOC_LITERAL(2, 18, 0), // ""
QT_MOC_LITERAL(3, 19, 13), // "ToyCmdWidget*"
QT_MOC_LITERAL(4, 33, 16), // "onSendAllClicked"
QT_MOC_LITERAL(5, 50, 7), // "checked"
QT_MOC_LITERAL(6, 58, 16), // "onSendAllTimeout"
QT_MOC_LITERAL(7, 75, 21), // "onStartupStateChanged"
QT_MOC_LITERAL(8, 97, 5) // "state"

    },
    "ToyCmdGrid\0onSend\0\0ToyCmdWidget*\0"
    "onSendAllClicked\0checked\0onSendAllTimeout\0"
    "onStartupStateChanged\0state"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ToyCmdGrid[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x08 /* Private */,
       4,    1,   37,    2, 0x08 /* Private */,
       6,    0,   40,    2, 0x08 /* Private */,
       7,    1,   41,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    8,

       0        // eod
};

void ToyCmdGrid::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ToyCmdGrid *_t = static_cast<ToyCmdGrid *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onSend((*reinterpret_cast< ToyCmdWidget*(*)>(_a[1]))); break;
        case 1: _t->onSendAllClicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->onSendAllTimeout(); break;
        case 3: _t->onStartupStateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< ToyCmdWidget* >(); break;
            }
            break;
        }
    }
}

const QMetaObject ToyCmdGrid::staticMetaObject = {
    { &ToyGrid::staticMetaObject, qt_meta_stringdata_ToyCmdGrid.data,
      qt_meta_data_ToyCmdGrid,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ToyCmdGrid::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ToyCmdGrid::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ToyCmdGrid.stringdata0))
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
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
