/****************************************************************************
** Meta object code from reading C++ file 'EditPanel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "EditPanel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'EditPanel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_EditButton_t {
    QByteArrayData data[3];
    char stringdata0[19];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_EditButton_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_EditButton_t qt_meta_stringdata_EditButton = {
    {
QT_MOC_LITERAL(0, 0, 10), // "EditButton"
QT_MOC_LITERAL(1, 11, 6), // "onTick"
QT_MOC_LITERAL(2, 18, 0) // ""

    },
    "EditButton\0onTick\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_EditButton[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void EditButton::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        EditButton *_t = static_cast<EditButton *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onTick(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject EditButton::staticMetaObject = {
    { &QPushButton::staticMetaObject, qt_meta_stringdata_EditButton.data,
      qt_meta_data_EditButton,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *EditButton::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *EditButton::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_EditButton.stringdata0))
        return static_cast<void*>(const_cast< EditButton*>(this));
    return QPushButton::qt_metacast(_clname);
}

int EditButton::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QPushButton::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
struct qt_meta_stringdata_EditPanel_t {
    QByteArrayData data[18];
    char stringdata0[231];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_EditPanel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_EditPanel_t qt_meta_stringdata_EditPanel = {
    {
QT_MOC_LITERAL(0, 0, 9), // "EditPanel"
QT_MOC_LITERAL(1, 10, 6), // "edited"
QT_MOC_LITERAL(2, 17, 0), // ""
QT_MOC_LITERAL(3, 18, 4), // "done"
QT_MOC_LITERAL(4, 23, 13), // "onGridChanged"
QT_MOC_LITERAL(5, 37, 5), // "value"
QT_MOC_LITERAL(6, 43, 17), // "onEditingFinished"
QT_MOC_LITERAL(7, 61, 20), // "onHiddenStateChanged"
QT_MOC_LITERAL(8, 82, 5), // "state"
QT_MOC_LITERAL(9, 88, 17), // "onPathTextChanged"
QT_MOC_LITERAL(10, 106, 4), // "text"
QT_MOC_LITERAL(11, 111, 18), // "onPath2TextChanged"
QT_MOC_LITERAL(12, 130, 19), // "onLocalStateChanged"
QT_MOC_LITERAL(13, 150, 24), // "onImagePathButtonClicked"
QT_MOC_LITERAL(14, 175, 7), // "checked"
QT_MOC_LITERAL(15, 183, 14), // "onColorClicked"
QT_MOC_LITERAL(16, 198, 18), // "onTextColorClicked"
QT_MOC_LITERAL(17, 217, 13) // "onDoneClicked"

    },
    "EditPanel\0edited\0\0done\0onGridChanged\0"
    "value\0onEditingFinished\0onHiddenStateChanged\0"
    "state\0onPathTextChanged\0text\0"
    "onPath2TextChanged\0onLocalStateChanged\0"
    "onImagePathButtonClicked\0checked\0"
    "onColorClicked\0onTextColorClicked\0"
    "onDoneClicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_EditPanel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   74,    2, 0x06 /* Public */,
       3,    0,   75,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   76,    2, 0x08 /* Private */,
       6,    0,   79,    2, 0x08 /* Private */,
       7,    1,   80,    2, 0x08 /* Private */,
       9,    1,   83,    2, 0x08 /* Private */,
      11,    1,   86,    2, 0x08 /* Private */,
      12,    1,   89,    2, 0x08 /* Private */,
      13,    1,   92,    2, 0x08 /* Private */,
      15,    1,   95,    2, 0x08 /* Private */,
      16,    1,   98,    2, 0x08 /* Private */,
      17,    1,  101,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void, QMetaType::Bool,   14,
    QMetaType::Void, QMetaType::Bool,   14,
    QMetaType::Void, QMetaType::Bool,   14,
    QMetaType::Void, QMetaType::Bool,   14,

       0        // eod
};

void EditPanel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        EditPanel *_t = static_cast<EditPanel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->edited(); break;
        case 1: _t->done(); break;
        case 2: _t->onGridChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->onEditingFinished(); break;
        case 4: _t->onHiddenStateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->onPathTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->onPath2TextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->onLocalStateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->onImagePathButtonClicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->onColorClicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->onTextColorClicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: _t->onDoneClicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (EditPanel::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&EditPanel::edited)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (EditPanel::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&EditPanel::done)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject EditPanel::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_EditPanel.data,
      qt_meta_data_EditPanel,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *EditPanel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *EditPanel::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_EditPanel.stringdata0))
        return static_cast<void*>(const_cast< EditPanel*>(this));
    return QWidget::qt_metacast(_clname);
}

int EditPanel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void EditPanel::edited()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void EditPanel::done()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
