/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../UI_Vika3/UI/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[15];
    char stringdata[406];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 31), // "on_button_add_scientist_clicked"
QT_MOC_LITERAL(2, 43, 0), // ""
QT_MOC_LITERAL(3, 44, 26), // "on_table_scientist_clicked"
QT_MOC_LITERAL(4, 71, 5), // "index"
QT_MOC_LITERAL(5, 77, 34), // "on_button_remove_scientist_cl..."
QT_MOC_LITERAL(6, 112, 33), // "on_button_remove_computer_cli..."
QT_MOC_LITERAL(7, 146, 31), // "on_search_scientist_textChanged"
QT_MOC_LITERAL(8, 178, 4), // "arg1"
QT_MOC_LITERAL(9, 183, 47), // "on_dropdown_scientist_order_c..."
QT_MOC_LITERAL(10, 231, 35), // "on_dropdown_scientist_asc_act..."
QT_MOC_LITERAL(11, 267, 30), // "on_search_computer_textChanged"
QT_MOC_LITERAL(12, 298, 34), // "on_dropdown_computer_asc_acti..."
QT_MOC_LITERAL(13, 333, 46), // "on_dropdown_computer_order_cu..."
QT_MOC_LITERAL(14, 380, 25) // "on_table_computer_clicked"

    },
    "MainWindow\0on_button_add_scientist_clicked\0"
    "\0on_table_scientist_clicked\0index\0"
    "on_button_remove_scientist_clicked\0"
    "on_button_remove_computer_clicked\0"
    "on_search_scientist_textChanged\0arg1\0"
    "on_dropdown_scientist_order_currentIndexChanged\0"
    "on_dropdown_scientist_asc_activated\0"
    "on_search_computer_textChanged\0"
    "on_dropdown_computer_asc_activated\0"
    "on_dropdown_computer_order_currentIndexChanged\0"
    "on_table_computer_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x08 /* Private */,
       3,    1,   70,    2, 0x08 /* Private */,
       5,    0,   73,    2, 0x08 /* Private */,
       6,    0,   74,    2, 0x08 /* Private */,
       7,    1,   75,    2, 0x08 /* Private */,
       9,    1,   78,    2, 0x08 /* Private */,
      10,    1,   81,    2, 0x08 /* Private */,
      11,    1,   84,    2, 0x08 /* Private */,
      12,    1,   87,    2, 0x08 /* Private */,
      13,    1,   90,    2, 0x08 /* Private */,
      14,    1,   93,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QModelIndex,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::QModelIndex,    4,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindow *_t = static_cast<MainWindow *>(_o);
        switch (_id) {
        case 0: _t->on_button_add_scientist_clicked(); break;
        case 1: _t->on_table_scientist_clicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 2: _t->on_button_remove_scientist_clicked(); break;
        case 3: _t->on_button_remove_computer_clicked(); break;
        case 4: _t->on_search_scientist_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->on_dropdown_scientist_order_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->on_dropdown_scientist_asc_activated((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->on_search_computer_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: _t->on_dropdown_computer_asc_activated((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 9: _t->on_dropdown_computer_order_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->on_table_computer_clicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow.data,
      qt_meta_data_MainWindow,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}
QT_END_MOC_NAMESPACE