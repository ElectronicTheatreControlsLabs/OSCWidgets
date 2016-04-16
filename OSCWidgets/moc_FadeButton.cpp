/****************************************************************************
** Meta object code from reading C++ file 'FadeButton.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "FadeButton.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'FadeButton.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_FadeButton[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      11,   23,   23,   23, 0x08,
      24,   23,   23,   23, 0x08,
      37,   23,   23,   23, 0x08,
      54,   23,   23,   23, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_FadeButton[] = {
    "FadeButton\0onPressed()\0\0onReleased()\0"
    "onClickTimeout()\0onHoverTimeout()\0"
};

void FadeButton::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        FadeButton *_t = static_cast<FadeButton *>(_o);
        switch (_id) {
        case 0: _t->onPressed(); break;
        case 1: _t->onReleased(); break;
        case 2: _t->onClickTimeout(); break;
        case 3: _t->onHoverTimeout(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData FadeButton::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject FadeButton::staticMetaObject = {
    { &QPushButton::staticMetaObject, qt_meta_stringdata_FadeButton,
      qt_meta_data_FadeButton, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &FadeButton::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *FadeButton::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *FadeButton::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_FadeButton))
        return static_cast<void*>(const_cast< FadeButton*>(this));
    return QPushButton::qt_metacast(_clname);
}

int FadeButton::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QPushButton::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
