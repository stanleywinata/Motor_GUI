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
    QByteArrayData data[12];
    char stringdata0[169];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Moni_Con_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Moni_Con_t qt_meta_stringdata_Moni_Con = {
    {
QT_MOC_LITERAL(0, 0, 8), // "Moni_Con"
QT_MOC_LITERAL(1, 9, 25), // "on_connect_button_clicked"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 7), // "checked"
QT_MOC_LITERAL(4, 44, 6), // "update"
QT_MOC_LITERAL(5, 51, 10), // "lcd_update"
QT_MOC_LITERAL(6, 62, 4), // "data"
QT_MOC_LITERAL(7, 67, 20), // "on_cmd_servo_clicked"
QT_MOC_LITERAL(8, 88, 19), // "on_cmd_step_clicked"
QT_MOC_LITERAL(9, 108, 20), // "on_cmd_dcpos_clicked"
QT_MOC_LITERAL(10, 129, 20), // "on_cmd_dcvel_clicked"
QT_MOC_LITERAL(11, 150, 18) // "on_cmd_off_clicked"

    },
    "Moni_Con\0on_connect_button_clicked\0\0"
    "checked\0update\0lcd_update\0data\0"
    "on_cmd_servo_clicked\0on_cmd_step_clicked\0"
    "on_cmd_dcpos_clicked\0on_cmd_dcvel_clicked\0"
    "on_cmd_off_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Moni_Con[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x08 /* Private */,
       4,    0,   57,    2, 0x08 /* Private */,
       5,    1,   58,    2, 0x08 /* Private */,
       7,    0,   61,    2, 0x08 /* Private */,
       8,    0,   62,    2, 0x08 /* Private */,
       9,    0,   63,    2, 0x08 /* Private */,
      10,    0,   64,    2, 0x08 /* Private */,
      11,    0,   65,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QByteArray,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Moni_Con::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Moni_Con *_t = static_cast<Moni_Con *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_connect_button_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->update(); break;
        case 2: _t->lcd_update((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 3: _t->on_cmd_servo_clicked(); break;
        case 4: _t->on_cmd_step_clicked(); break;
        case 5: _t->on_cmd_dcpos_clicked(); break;
        case 6: _t->on_cmd_dcvel_clicked(); break;
        case 7: _t->on_cmd_off_clicked(); break;
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
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
