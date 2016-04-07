/****************************************************************************
** Meta object code from reading C++ file 'EditPanel.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "EditPanel.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'EditPanel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_EditButton[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      11,   20,   20,   20, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_EditButton[] = {
    "EditButton\0onTick()\0\0"
};

void EditButton::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        EditButton *_t = static_cast<EditButton *>(_o);
        switch (_id) {
        case 0: _t->onTick(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData EditButton::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject EditButton::staticMetaObject = {
    { &QPushButton::staticMetaObject, qt_meta_stringdata_EditButton,
      qt_meta_data_EditButton, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &EditButton::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *EditButton::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *EditButton::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_EditButton))
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
    }
    return _id;
}
static const uint qt_meta_data_EditPanel[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      10,   19,   19,   19, 0x05,
      20,   19,   19,   19, 0x05,

 // slots: signature, parameters, type, tag, flags
      27,   46,   19,   19, 0x08,
      52,   19,   19,   19, 0x08,
      72,   98,   19,   19, 0x08,
     104,  131,   19,   19, 0x08,
     136,  131,   19,   19, 0x08,
     164,   98,   19,   19, 0x08,
     189,  220,   19,   19, 0x08,
     228,  220,   19,   19, 0x08,
     249,  220,   19,   19, 0x08,
     274,  220,   19,   19, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_EditPanel[] = {
    "EditPanel\0edited()\0\0done()\0"
    "onGridChanged(int)\0value\0onEditingFinished()\0"
    "onHiddenStateChanged(int)\0state\0"
    "onPathTextChanged(QString)\0text\0"
    "onPath2TextChanged(QString)\0"
    "onLocalStateChanged(int)\0"
    "onImagePathButtonClicked(bool)\0checked\0"
    "onColorClicked(bool)\0onTextColorClicked(bool)\0"
    "onDoneClicked(bool)\0"
};

void EditPanel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        EditPanel *_t = static_cast<EditPanel *>(_o);
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
    }
}

const QMetaObjectExtraData EditPanel::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject EditPanel::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_EditPanel,
      qt_meta_data_EditPanel, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &EditPanel::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *EditPanel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *EditPanel::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_EditPanel))
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
    }
    return _id;
}

// SIGNAL 0
void EditPanel::edited()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void EditPanel::done()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
QT_END_MOC_NAMESPACE
