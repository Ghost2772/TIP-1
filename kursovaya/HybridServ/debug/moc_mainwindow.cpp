/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../mainwindow.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSMainWindowENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSMainWindowENDCLASS = QtMocHelpers::stringData(
    "MainWindow",
    "sendVars",
    "",
    "nick",
    "message",
    "type",
    "showWindow",
    "readSome",
    "sendSome",
    "on_nick_textChanged",
    "arg1",
    "on_nick_returnPressed",
    "on_butt_hostServ_2_clicked",
    "on_butt_sendMessage_clicked",
    "on_lineEdit_returnPressed",
    "on_butt_hostServ_3_clicked"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSMainWindowENDCLASS_t {
    uint offsetsAndSizes[32];
    char stringdata0[11];
    char stringdata1[9];
    char stringdata2[1];
    char stringdata3[5];
    char stringdata4[8];
    char stringdata5[5];
    char stringdata6[11];
    char stringdata7[9];
    char stringdata8[9];
    char stringdata9[20];
    char stringdata10[5];
    char stringdata11[22];
    char stringdata12[27];
    char stringdata13[28];
    char stringdata14[26];
    char stringdata15[27];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSMainWindowENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSMainWindowENDCLASS_t qt_meta_stringdata_CLASSMainWindowENDCLASS = {
    {
        QT_MOC_LITERAL(0, 10),  // "MainWindow"
        QT_MOC_LITERAL(11, 8),  // "sendVars"
        QT_MOC_LITERAL(20, 0),  // ""
        QT_MOC_LITERAL(21, 4),  // "nick"
        QT_MOC_LITERAL(26, 7),  // "message"
        QT_MOC_LITERAL(34, 4),  // "type"
        QT_MOC_LITERAL(39, 10),  // "showWindow"
        QT_MOC_LITERAL(50, 8),  // "readSome"
        QT_MOC_LITERAL(59, 8),  // "sendSome"
        QT_MOC_LITERAL(68, 19),  // "on_nick_textChanged"
        QT_MOC_LITERAL(88, 4),  // "arg1"
        QT_MOC_LITERAL(93, 21),  // "on_nick_returnPressed"
        QT_MOC_LITERAL(115, 26),  // "on_butt_hostServ_2_clicked"
        QT_MOC_LITERAL(142, 27),  // "on_butt_sendMessage_clicked"
        QT_MOC_LITERAL(170, 25),  // "on_lineEdit_returnPressed"
        QT_MOC_LITERAL(196, 26)   // "on_butt_hostServ_3_clicked"
    },
    "MainWindow",
    "sendVars",
    "",
    "nick",
    "message",
    "type",
    "showWindow",
    "readSome",
    "sendSome",
    "on_nick_textChanged",
    "arg1",
    "on_nick_returnPressed",
    "on_butt_hostServ_2_clicked",
    "on_butt_sendMessage_clicked",
    "on_lineEdit_returnPressed",
    "on_butt_hostServ_3_clicked"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSMainWindowENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    3,   74,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       6,    0,   81,    2, 0x08,    5 /* Private */,
       7,    0,   82,    2, 0x08,    6 /* Private */,
       8,    3,   83,    2, 0x08,    7 /* Private */,
       9,    1,   90,    2, 0x08,   11 /* Private */,
      11,    0,   93,    2, 0x08,   13 /* Private */,
      12,    0,   94,    2, 0x08,   14 /* Private */,
      13,    0,   95,    2, 0x08,   15 /* Private */,
      14,    0,   96,    2, 0x08,   16 /* Private */,
      15,    0,   97,    2, 0x08,   17 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::SChar,    3,    4,    5,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::SChar,    3,    4,    5,
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_CLASSMainWindowENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSMainWindowENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSMainWindowENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<MainWindow, std::true_type>,
        // method 'sendVars'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<qint8, std::false_type>,
        // method 'showWindow'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'readSome'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'sendSome'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<qint8, std::false_type>,
        // method 'on_nick_textChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'on_nick_returnPressed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_butt_hostServ_2_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_butt_sendMessage_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_lineEdit_returnPressed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_butt_hostServ_3_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->sendVars((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<qint8>>(_a[3]))); break;
        case 1: _t->showWindow(); break;
        case 2: _t->readSome(); break;
        case 3: _t->sendSome((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<qint8>>(_a[3]))); break;
        case 4: _t->on_nick_textChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 5: _t->on_nick_returnPressed(); break;
        case 6: _t->on_butt_hostServ_2_clicked(); break;
        case 7: _t->on_butt_sendMessage_clicked(); break;
        case 8: _t->on_lineEdit_returnPressed(); break;
        case 9: _t->on_butt_hostServ_3_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MainWindow::*)(QString , QString , qint8 );
            if (_t _q_method = &MainWindow::sendVars; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSMainWindowENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void MainWindow::sendVars(QString _t1, QString _t2, qint8 _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
