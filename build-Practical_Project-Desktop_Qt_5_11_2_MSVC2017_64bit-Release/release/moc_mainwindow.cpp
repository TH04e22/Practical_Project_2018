/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Practical_Project/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[20];
    char stringdata0[379];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 14), // "setTableWidget"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 9), // "setAmount"
QT_MOC_LITERAL(4, 37, 12), // "updateAmount"
QT_MOC_LITERAL(5, 50, 10), // "updateData"
QT_MOC_LITERAL(6, 61, 14), // "dataProcessing"
QT_MOC_LITERAL(7, 76, 16), // "QList<Component>"
QT_MOC_LITERAL(8, 93, 10), // "components"
QT_MOC_LITERAL(9, 104, 28), // "on_testingPushButton_clicked"
QT_MOC_LITERAL(10, 133, 35), // "on_backToHomePagePushButton_c..."
QT_MOC_LITERAL(11, 169, 28), // "on_settingPushButton_clicked"
QT_MOC_LITERAL(12, 198, 33), // "on_startTestingPushButton_cli..."
QT_MOC_LITERAL(13, 232, 26), // "on_pausePushButton_clicked"
QT_MOC_LITERAL(14, 259, 17), // "updateCurrentTime"
QT_MOC_LITERAL(15, 277, 29), // "on_checkingPushButton_clicked"
QT_MOC_LITERAL(16, 307, 12), // "updateConfig"
QT_MOC_LITERAL(17, 320, 21), // "QMap<QString,QString>"
QT_MOC_LITERAL(18, 342, 17), // "initNetworkConfig"
QT_MOC_LITERAL(19, 360, 18) // "storeNetworkConfig"

    },
    "MainWindow\0setTableWidget\0\0setAmount\0"
    "updateAmount\0updateData\0dataProcessing\0"
    "QList<Component>\0components\0"
    "on_testingPushButton_clicked\0"
    "on_backToHomePagePushButton_clicked\0"
    "on_settingPushButton_clicked\0"
    "on_startTestingPushButton_clicked\0"
    "on_pausePushButton_clicked\0updateCurrentTime\0"
    "on_checkingPushButton_clicked\0"
    "updateConfig\0QMap<QString,QString>\0"
    "initNetworkConfig\0storeNetworkConfig"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   89,    2, 0x0a /* Public */,
       3,    2,   90,    2, 0x0a /* Public */,
       4,    0,   95,    2, 0x0a /* Public */,
       5,    0,   96,    2, 0x0a /* Public */,
       6,    1,   97,    2, 0x0a /* Public */,
       9,    0,  100,    2, 0x08 /* Private */,
      10,    0,  101,    2, 0x08 /* Private */,
      11,    0,  102,    2, 0x08 /* Private */,
      12,    0,  103,    2, 0x08 /* Private */,
      13,    0,  104,    2, 0x08 /* Private */,
      14,    0,  105,    2, 0x08 /* Private */,
      15,    0,  106,    2, 0x08 /* Private */,
      16,    1,  107,    2, 0x08 /* Private */,
      18,    0,  110,    2, 0x08 /* Private */,
      19,    0,  111,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    2,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 17,    2,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindow *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setTableWidget(); break;
        case 1: _t->setAmount((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: _t->updateAmount(); break;
        case 3: _t->updateData(); break;
        case 4: _t->dataProcessing((*reinterpret_cast< QList<Component>(*)>(_a[1]))); break;
        case 5: _t->on_testingPushButton_clicked(); break;
        case 6: _t->on_backToHomePagePushButton_clicked(); break;
        case 7: _t->on_settingPushButton_clicked(); break;
        case 8: _t->on_startTestingPushButton_clicked(); break;
        case 9: _t->on_pausePushButton_clicked(); break;
        case 10: _t->updateCurrentTime(); break;
        case 11: _t->on_checkingPushButton_clicked(); break;
        case 12: _t->updateConfig((*reinterpret_cast< QMap<QString,QString>(*)>(_a[1]))); break;
        case 13: _t->initNetworkConfig(); break;
        case 14: _t->storeNetworkConfig(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow.data,
      qt_meta_data_MainWindow,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 15;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE