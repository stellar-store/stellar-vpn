/****************************************************************************
** Meta object code from reading C++ file 'vpn_client.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../vpn_client.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'vpn_client.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
namespace {
struct qt_meta_stringdata_VPNClient_t {
    uint offsetsAndSizes[28];
    char stringdata0[10];
    char stringdata1[18];
    char stringdata2[1];
    char stringdata3[34];
    char stringdata4[7];
    char stringdata5[17];
    char stringdata6[17];
    char stringdata7[6];
    char stringdata8[11];
    char stringdata9[14];
    char stringdata10[11];
    char stringdata11[19];
    char stringdata12[13];
    char stringdata13[13];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_VPNClient_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_VPNClient_t qt_meta_stringdata_VPNClient = {
    {
        QT_MOC_LITERAL(0, 9),  // "VPNClient"
        QT_MOC_LITERAL(10, 17),  // "trayIconActivated"
        QT_MOC_LITERAL(28, 0),  // ""
        QT_MOC_LITERAL(29, 33),  // "QSystemTrayIcon::ActivationRe..."
        QT_MOC_LITERAL(63, 6),  // "reason"
        QT_MOC_LITERAL(70, 16),  // "closeApplication"
        QT_MOC_LITERAL(87, 16),  // "onServerSelected"
        QT_MOC_LITERAL(104, 5),  // "index"
        QT_MOC_LITERAL(110, 10),  // "connectVPN"
        QT_MOC_LITERAL(121, 13),  // "disconnectVPN"
        QT_MOC_LITERAL(135, 10),  // "updateInfo"
        QT_MOC_LITERAL(146, 18),  // "openSettingsWindow"
        QT_MOC_LITERAL(165, 12),  // "saveSettings"
        QT_MOC_LITERAL(178, 12)   // "loadSettings"
    },
    "VPNClient",
    "trayIconActivated",
    "",
    "QSystemTrayIcon::ActivationReason",
    "reason",
    "closeApplication",
    "onServerSelected",
    "index",
    "connectVPN",
    "disconnectVPN",
    "updateInfo",
    "openSettingsWindow",
    "saveSettings",
    "loadSettings"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_VPNClient[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   68,    2, 0x08,    1 /* Private */,
       5,    0,   71,    2, 0x08,    3 /* Private */,
       6,    1,   72,    2, 0x08,    4 /* Private */,
       8,    0,   75,    2, 0x08,    6 /* Private */,
       9,    0,   76,    2, 0x08,    7 /* Private */,
      10,    0,   77,    2, 0x08,    8 /* Private */,
      11,    0,   78,    2, 0x08,    9 /* Private */,
      12,    0,   79,    2, 0x08,   10 /* Private */,
      13,    0,   80,    2, 0x08,   11 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject VPNClient::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_VPNClient.offsetsAndSizes,
    qt_meta_data_VPNClient,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_VPNClient_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<VPNClient, std::true_type>,
        // method 'trayIconActivated'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QSystemTrayIcon::ActivationReason, std::false_type>,
        // method 'closeApplication'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onServerSelected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'connectVPN'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'disconnectVPN'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'updateInfo'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'openSettingsWindow'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'saveSettings'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'loadSettings'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void VPNClient::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<VPNClient *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->trayIconActivated((*reinterpret_cast< std::add_pointer_t<QSystemTrayIcon::ActivationReason>>(_a[1]))); break;
        case 1: _t->closeApplication(); break;
        case 2: _t->onServerSelected((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 3: _t->connectVPN(); break;
        case 4: _t->disconnectVPN(); break;
        case 5: _t->updateInfo(); break;
        case 6: _t->openSettingsWindow(); break;
        case 7: _t->saveSettings(); break;
        case 8: _t->loadSettings(); break;
        default: ;
        }
    }
}

const QMetaObject *VPNClient::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *VPNClient::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_VPNClient.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int VPNClient::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 9;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
