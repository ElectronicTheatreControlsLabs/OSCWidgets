/****************************************************************************
** Meta object code from reading C++ file 'SettingsPanel.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "SettingsPanel.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SettingsPanel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_AddToyButton[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      13,   25,   30,   30, 0x05,

 // slots: signature, parameters, type, tag, flags
      31,   47,   30,   30, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_AddToyButton[] = {
    "AddToyButton\0addToy(int)\0type\0\0"
    "onClicked(bool)\0checked\0"
};

void AddToyButton::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        AddToyButton *_t = static_cast<AddToyButton *>(_o);
        switch (_id) {
        case 0: _t->addToy((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->onClicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData AddToyButton::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject AddToyButton::staticMetaObject = {
    { &QPushButton::staticMetaObject, qt_meta_stringdata_AddToyButton,
      qt_meta_data_AddToyButton, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &AddToyButton::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *AddToyButton::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *AddToyButton::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_AddToyButton))
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
    }
    return _id;
}

// SIGNAL 0
void AddToyButton::addToy(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
static const uint qt_meta_data_AdvancedPanel[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      14,   24,   24,   24, 0x05,

 // slots: signature, parameters, type, tag, flags
      25,   46,   24,   24, 0x08,
      54,   46,   24,   24, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_AdvancedPanel[] = {
    "AdvancedPanel\0changed()\0\0onApplyClicked(bool)\0"
    "checked\0onRestoreDefaultsClicked(bool)\0"
};

void AdvancedPanel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        AdvancedPanel *_t = static_cast<AdvancedPanel *>(_o);
        switch (_id) {
        case 0: _t->changed(); break;
        case 1: _t->onApplyClicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->onRestoreDefaultsClicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData AdvancedPanel::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject AdvancedPanel::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_AdvancedPanel,
      qt_meta_data_AdvancedPanel, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &AdvancedPanel::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *AdvancedPanel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *AdvancedPanel::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_AdvancedPanel))
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
    }
    return _id;
}

// SIGNAL 0
void AdvancedPanel::changed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
static const uint qt_meta_data_SettingsPanel[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      14,   24,   24,   24, 0x05,
      25,   37,   24,   24, 0x05,

 // slots: signature, parameters, type, tag, flags
      42,   61,   24,   24, 0x08,
      67,   88,   24,   24, 0x08,
      96,   37,   24,   24, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_SettingsPanel[] = {
    "SettingsPanel\0changed()\0\0addToy(int)\0"
    "type\0onModeChanged(int)\0index\0"
    "onApplyClicked(bool)\0checked\0onAddToy(int)\0"
};

void SettingsPanel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        SettingsPanel *_t = static_cast<SettingsPanel *>(_o);
        switch (_id) {
        case 0: _t->changed(); break;
        case 1: _t->addToy((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->onModeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->onApplyClicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->onAddToy((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData SettingsPanel::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject SettingsPanel::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_SettingsPanel,
      qt_meta_data_SettingsPanel, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SettingsPanel::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SettingsPanel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SettingsPanel::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SettingsPanel))
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
    }
    return _id;
}

// SIGNAL 0
void SettingsPanel::changed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void SettingsPanel::addToy(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
