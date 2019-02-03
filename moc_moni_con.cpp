/****************************************************************************
** Meta object code from reading C++ file 'moni_con.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "moni_con.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'moni_con.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Moni_Con_t {
    QByteArrayData data[8];
    char stringdata0[122];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Moni_Con_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Moni_Con_t qt_meta_stringdata_Moni_Con = {
    {
QT_MOC_LITERAL(0, 0, 8), // "Moni_Con"
QT_MOC_LITERAL(1, 9, 17), // "on_sonar_overflow"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 23), // "on_temperature_overflow"
QT_MOC_LITERAL(4, 52, 18), // "on_ranger_overflow"
QT_MOC_LITERAL(5, 71, 16), // "on_flex_overflow"
QT_MOC_LITERAL(6, 88, 25), // "on_connect_button_clicked"
QT_MOC_LITERAL(7, 114, 7) // "checked"

    },
    "Moni_Con\0on_sonar_overflow\0\0"
    "on_temperature_overflow\0on_ranger_overflow\0"
    "on_flex_overflow\0on_connect_button_clicked\0"
    "checked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Moni_Con[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x08 /* Private */,
       3,    0,   40,    2, 0x08 /* Private */,
       4,    0,   41,    2, 0x08 /* Private */,
       5,    0,   42,    2, 0x08 /* Private */,
       6,    1,   43,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    7,

       0        // eod
};

void Moni_Con::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Moni_Con *_t = static_cast<Moni_Con *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_sonar_overflow(); break;
        case 1: _t->on_temperature_overflow(); break;
        case 2: _t->on_ranger_overflow(); break;
        case 3: _t->on_flex_overflow(); break;
        case 4: _t->on_connect_button_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject Moni_Con::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_Moni_Con.data,
      qt_meta_data_Moni_Con,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Moni_Con::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Moni_Con::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Moni_Con.stringdata0))
        return static_cast<void*>(const_cast< Moni_Con*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int Moni_Con::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
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
QT_END_MOC_NAMESPACE
