/****************************************************************************
** Meta object code from reading C++ file 'LogWidget.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "LogWidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'LogWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_LogWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      10,   32,   38,   38, 0x08,
      39,   32,   38,   38, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_LogWidget[] = {
    "LogWidget\0onVScrollChanged(int)\0value\0"
    "\0onHScrollChanged(int)\0"
};

void LogWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        LogWidget *_t = static_cast<LogWidget *>(_o);
        switch (_id) {
        case 0: _t->onVScrollChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->onHScrollChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData LogWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject LogWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_LogWidget,
      qt_meta_data_LogWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &LogWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *LogWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *LogWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_LogWidget))
        return static_cast<void*>(const_cast< LogWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int LogWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
