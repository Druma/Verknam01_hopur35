/****************************************************************************
** Meta object code from reading C++ file 'addcomputerdialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../UI_Vika3/UI/addcomputerdialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'addcomputerdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_addComputerDialog_t {
    QByteArrayData data[6];
    char stringdata[133];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_addComputerDialog_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_addComputerDialog_t qt_meta_stringdata_addComputerDialog = {
    {
QT_MOC_LITERAL(0, 0, 17), // "addComputerDialog"
QT_MOC_LITERAL(1, 18, 33), // "on_add_newComputer_button_cli..."
QT_MOC_LITERAL(2, 52, 0), // ""
QT_MOC_LITERAL(3, 53, 40), // "on_cancel_add_newComputer_but..."
QT_MOC_LITERAL(4, 94, 33), // "on_checkBox_wasBuilt_stateCha..."
QT_MOC_LITERAL(5, 128, 4) // "arg1"

    },
    "addComputerDialog\0on_add_newComputer_button_clicked\0"
    "\0on_cancel_add_newComputer_button_clicked\0"
    "on_checkBox_wasBuilt_stateChanged\0"
    "arg1"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_addComputerDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x08 /* Private */,
       3,    0,   30,    2, 0x08 /* Private */,
       4,    1,   31,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    5,

       0        // eod
};

void addComputerDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        addComputerDialog *_t = static_cast<addComputerDialog *>(_o);
        switch (_id) {
        case 0: _t->on_add_newComputer_button_clicked(); break;
        case 1: _t->on_cancel_add_newComputer_button_clicked(); break;
        case 2: _t->on_checkBox_wasBuilt_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject addComputerDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_addComputerDialog.data,
      qt_meta_data_addComputerDialog,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *addComputerDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *addComputerDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_addComputerDialog.stringdata))
        return static_cast<void*>(const_cast< addComputerDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int addComputerDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
QT_END_MOC_NAMESPACE
