/****************************************************************************
** Meta object code from reading C++ file 'SettingsPanel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "SettingsPanel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SettingsPanel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_AddToyButton_t {
    QByteArrayData data[6];
    char stringdata0[44];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AddToyButton_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AddToyButton_t qt_meta_stringdata_AddToyButton = {
    {
QT_MOC_LITERAL(0, 0, 12), // "AddToyButton"
QT_MOC_LITERAL(1, 13, 6), // "addToy"
QT_MOC_LITERAL(2, 20, 0), // ""
QT_MOC_LITERAL(3, 21, 4), // "type"
QT_MOC_LITERAL(4, 26, 9), // "onClicked"
QT_MOC_LITERAL(5, 36, 7) // "checked"

    },
    "AddToyButton\0addToy\0\0type\0onClicked\0"
    "checked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AddToyButton[] = {

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

void AddToyButton::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AddToyButton *_t = static_cast<AddToyButton *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->addToy((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->onClicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (AddToyButton::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AddToyButton::addToy)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject AddToyButton::staticMetaObject = {
    { &QPushButton::staticMetaObject, qt_meta_stringdata_AddToyButton.data,
      qt_meta_data_AddToyButton,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *AddToyButton::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AddToyButton::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_AddToyButton.stringdata0))
        return static_cast<void*>(const_cast< AddToyButton*>(this));
    return QPushButton::qt_metacast(_clname);
}

int AddToyButton::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QPushButton::qt_metacall(_c, _id, _a);
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
void AddToyButton::addToy(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_AdvancedPanel_t {
    QByteArrayData data[6];
    char stringdata0[71];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AdvancedPanel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AdvancedPanel_t qt_meta_stringdata_AdvancedPanel = {
    {
QT_MOC_LITERAL(0, 0, 13), // "AdvancedPanel"
QT_MOC_LITERAL(1, 14, 7), // "changed"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 14), // "onApplyClicked"
QT_MOC_LITERAL(4, 38, 7), // "checked"
QT_MOC_LITERAL(5, 46, 24) // "onRestoreDefaultsClicked"

    },
    "AdvancedPanel\0changed\0\0onApplyClicked\0"
    "checked\0onRestoreDefaultsClicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AdvancedPanel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   30,    2, 0x08 /* Private */,
       5,    1,   33,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    4,
    QMetaType::Void, QMetaType::Bool,    4,

       0        // eod
};

void AdvancedPanel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AdvancedPanel *_t = static_cast<AdvancedPanel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->changed(); break;
        case 1: _t->onApplyClicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->onRestoreDefaultsClicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (AdvancedPanel::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AdvancedPanel::changed)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject AdvancedPanel::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_AdvancedPanel.data,
      qt_meta_data_AdvancedPanel,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *AdvancedPanel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AdvancedPanel::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_AdvancedPanel.stringdata0))
        return static_cast<void*>(const_cast< AdvancedPanel*>(this));
    return QWidget::qt_metacast(_clname);
}

int AdvancedPanel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void AdvancedPanel::changed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}
struct qt_meta_stringdata_SettingsPanel_t {
    QByteArrayData data[10];
    char stringdata0[87];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SettingsPanel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SettingsPanel_t qt_meta_stringdata_SettingsPanel = {
    {
QT_MOC_LITERAL(0, 0, 13), // "SettingsPanel"
QT_MOC_LITERAL(1, 14, 7), // "changed"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 6), // "addToy"
QT_MOC_LITERAL(4, 30, 4), // "type"
QT_MOC_LITERAL(5, 35, 13), // "onModeChanged"
QT_MOC_LITERAL(6, 49, 5), // "index"
QT_MOC_LITERAL(7, 55, 14), // "onApplyClicked"
QT_MOC_LITERAL(8, 70, 7), // "checked"
QT_MOC_LITERAL(9, 78, 8) // "onAddToy"

    },
    "SettingsPanel\0changed\0\0addToy\0type\0"
    "onModeChanged\0index\0onApplyClicked\0"
    "checked\0onAddToy"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SettingsPanel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x06 /* Public */,
       3,    1,   40,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   43,    2, 0x08 /* Private */,
       7,    1,   46,    2, 0x08 /* Private */,
       9,    1,   49,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    4,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void, QMetaType::Int,    4,

       0        // eod
};

void SettingsPanel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SettingsPanel *_t = static_cast<SettingsPanel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->changed(); break;
        case 1: _t->addToy((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->onModeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->onApplyClicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->onAddToy((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (SettingsPanel::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SettingsPanel::changed)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (SettingsPanel::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SettingsPanel::addToy)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject SettingsPanel::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_SettingsPanel.data,
      qt_meta_data_SettingsPanel,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *SettingsPanel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SettingsPanel::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_SettingsPanel.stringdata0))
        return static_cast<void*>(const_cast< SettingsPanel*>(this));
    return QWidget::qt_metacast(_clname);
}

int SettingsPanel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void SettingsPanel::changed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void SettingsPanel::addToy(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
