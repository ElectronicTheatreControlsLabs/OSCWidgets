/****************************************************************************
** Meta object code from reading C++ file 'ToyMetro.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "ToyMetro.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ToyMetro.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_FadeMetro_t {
    QByteArrayData data[6];
    char stringdata0[38];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FadeMetro_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FadeMetro_t qt_meta_stringdata_FadeMetro = {
    {
QT_MOC_LITERAL(0, 0, 9), // "FadeMetro"
QT_MOC_LITERAL(1, 10, 4), // "tick"
QT_MOC_LITERAL(2, 15, 0), // ""
QT_MOC_LITERAL(3, 16, 3), // "pos"
QT_MOC_LITERAL(4, 20, 9), // "onClicked"
QT_MOC_LITERAL(5, 30, 7) // "checked"

    },
    "FadeMetro\0tick\0\0pos\0onClicked\0checked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FadeMetro[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   27,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    5,

       0        // eod
};

void FadeMetro::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        FadeMetro *_t = static_cast<FadeMetro *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->tick((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->onClicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (FadeMetro::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&FadeMetro::tick)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject FadeMetro::staticMetaObject = {
    { &FadeButton::staticMetaObject, qt_meta_stringdata_FadeMetro.data,
      qt_meta_data_FadeMetro,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *FadeMetro::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FadeMetro::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_FadeMetro.stringdata0))
        return static_cast<void*>(const_cast< FadeMetro*>(this));
    return FadeButton::qt_metacast(_clname);
}

int FadeMetro::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = FadeButton::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void FadeMetro::tick(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_ToyMetroWidget_t {
    QByteArrayData data[6];
    char stringdata0[48];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ToyMetroWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ToyMetroWidget_t qt_meta_stringdata_ToyMetroWidget = {
    {
QT_MOC_LITERAL(0, 0, 14), // "ToyMetroWidget"
QT_MOC_LITERAL(1, 15, 4), // "tick"
QT_MOC_LITERAL(2, 20, 0), // ""
QT_MOC_LITERAL(3, 21, 15), // "ToyMetroWidget*"
QT_MOC_LITERAL(4, 37, 3), // "pos"
QT_MOC_LITERAL(5, 41, 6) // "onTick"

    },
    "ToyMetroWidget\0tick\0\0ToyMetroWidget*\0"
    "pos\0onTick"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ToyMetroWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   29,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int,    2,    4,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    4,

       0        // eod
};

void ToyMetroWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ToyMetroWidget *_t = static_cast<ToyMetroWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->tick((*reinterpret_cast< ToyMetroWidget*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->onTick((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< ToyMetroWidget* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ToyMetroWidget::*_t)(ToyMetroWidget * , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ToyMetroWidget::tick)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject ToyMetroWidget::staticMetaObject = {
    { &ToyWidget::staticMetaObject, qt_meta_stringdata_ToyMetroWidget.data,
      qt_meta_data_ToyMetroWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ToyMetroWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ToyMetroWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ToyMetroWidget.stringdata0))
        return static_cast<void*>(const_cast< ToyMetroWidget*>(this));
    return ToyWidget::qt_metacast(_clname);
}

int ToyMetroWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ToyWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void ToyMetroWidget::tick(ToyMetroWidget * _t1, int _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_ToyMetroGrid_t {
    QByteArrayData data[11];
    char stringdata0[119];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ToyMetroGrid_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ToyMetroGrid_t qt_meta_stringdata_ToyMetroGrid = {
    {
QT_MOC_LITERAL(0, 0, 12), // "ToyMetroGrid"
QT_MOC_LITERAL(1, 13, 6), // "onTick"
QT_MOC_LITERAL(2, 20, 0), // ""
QT_MOC_LITERAL(3, 21, 15), // "ToyMetroWidget*"
QT_MOC_LITERAL(4, 37, 3), // "pos"
QT_MOC_LITERAL(5, 41, 9), // "onTimeout"
QT_MOC_LITERAL(6, 51, 13), // "onPlayClicked"
QT_MOC_LITERAL(7, 65, 7), // "checked"
QT_MOC_LITERAL(8, 73, 14), // "onPauseClicked"
QT_MOC_LITERAL(9, 88, 17), // "onReCenterClicked"
QT_MOC_LITERAL(10, 106, 12) // "onFanClicked"

    },
    "ToyMetroGrid\0onTick\0\0ToyMetroWidget*\0"
    "pos\0onTimeout\0onPlayClicked\0checked\0"
    "onPauseClicked\0onReCenterClicked\0"
    "onFanClicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ToyMetroGrid[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    2,   44,    2, 0x08 /* Private */,
       5,    0,   49,    2, 0x08 /* Private */,
       6,    1,   50,    2, 0x08 /* Private */,
       8,    1,   53,    2, 0x08 /* Private */,
       9,    1,   56,    2, 0x08 /* Private */,
      10,    1,   59,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int,    2,    4,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, QMetaType::Bool,    7,

       0        // eod
};

void ToyMetroGrid::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ToyMetroGrid *_t = static_cast<ToyMetroGrid *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onTick((*reinterpret_cast< ToyMetroWidget*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->onTimeout(); break;
        case 2: _t->onPlayClicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->onPauseClicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->onReCenterClicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->onFanClicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< ToyMetroWidget* >(); break;
            }
            break;
        }
    }
}

const QMetaObject ToyMetroGrid::staticMetaObject = {
    { &ToyGrid::staticMetaObject, qt_meta_stringdata_ToyMetroGrid.data,
      qt_meta_data_ToyMetroGrid,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ToyMetroGrid::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ToyMetroGrid::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ToyMetroGrid.stringdata0))
        return static_cast<void*>(const_cast< ToyMetroGrid*>(this));
    return ToyGrid::qt_metacast(_clname);
}

int ToyMetroGrid::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ToyGrid::qt_metacall(_c, _id, _a);
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
QT_END_MOC_NAMESPACE
