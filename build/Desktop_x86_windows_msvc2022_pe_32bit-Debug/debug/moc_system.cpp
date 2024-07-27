/****************************************************************************
** Meta object code from reading C++ file 'system.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../system.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'system.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_System_t {
    QByteArrayData data[22];
    char stringdata0[332];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_System_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_System_t qt_meta_stringdata_System = {
    {
QT_MOC_LITERAL(0, 0, 6), // "System"
QT_MOC_LITERAL(1, 7, 16), // "carLockedChanged"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 9), // "carLocked"
QT_MOC_LITERAL(4, 35, 18), // "outdoorTempChanged"
QT_MOC_LITERAL(5, 54, 15), // "userNameChanged"
QT_MOC_LITERAL(6, 70, 18), // "currentTimeChanged"
QT_MOC_LITERAL(7, 89, 25), // "currentTemperatureChanged"
QT_MOC_LITERAL(8, 115, 12), // "setCarLocked"
QT_MOC_LITERAL(9, 128, 14), // "setOutdoorTemp"
QT_MOC_LITERAL(10, 143, 14), // "newOutdoorTemp"
QT_MOC_LITERAL(11, 158, 11), // "setUserName"
QT_MOC_LITERAL(12, 170, 11), // "newUserName"
QT_MOC_LITERAL(13, 182, 14), // "setCurrentTime"
QT_MOC_LITERAL(14, 197, 14), // "newCurrentTime"
QT_MOC_LITERAL(15, 212, 21), // "setCurrentTemperature"
QT_MOC_LITERAL(16, 234, 21), // "newCurrentTemperature"
QT_MOC_LITERAL(17, 256, 23), // "currentTimeTimerTimeout"
QT_MOC_LITERAL(18, 280, 11), // "outdoorTemp"
QT_MOC_LITERAL(19, 292, 8), // "userName"
QT_MOC_LITERAL(20, 301, 11), // "currentTime"
QT_MOC_LITERAL(21, 313, 18) // "currentTemperature"

    },
    "System\0carLockedChanged\0\0carLocked\0"
    "outdoorTempChanged\0userNameChanged\0"
    "currentTimeChanged\0currentTemperatureChanged\0"
    "setCarLocked\0setOutdoorTemp\0newOutdoorTemp\0"
    "setUserName\0newUserName\0setCurrentTime\0"
    "newCurrentTime\0setCurrentTemperature\0"
    "newCurrentTemperature\0currentTimeTimerTimeout\0"
    "outdoorTemp\0userName\0currentTime\0"
    "currentTemperature"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_System[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       5,   92, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   69,    2, 0x06 /* Public */,
       4,    0,   72,    2, 0x06 /* Public */,
       5,    0,   73,    2, 0x06 /* Public */,
       6,    0,   74,    2, 0x06 /* Public */,
       7,    0,   75,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    1,   76,    2, 0x0a /* Public */,
       9,    1,   79,    2, 0x0a /* Public */,
      11,    1,   82,    2, 0x0a /* Public */,
      13,    1,   85,    2, 0x0a /* Public */,
      15,    1,   88,    2, 0x0a /* Public */,
      17,    0,   91,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void, QMetaType::QString,   12,
    QMetaType::Void, QMetaType::QString,   14,
    QMetaType::Void, QMetaType::QString,   16,
    QMetaType::Void,

 // properties: name, type, flags
       3, QMetaType::Bool, 0x00495103,
      18, QMetaType::Int, 0x00495903,
      19, QMetaType::QString, 0x00495903,
      20, QMetaType::QString, 0x00495903,
      21, QMetaType::QString, 0x00495903,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,
       4,

       0        // eod
};

void System::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<System *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->carLockedChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->outdoorTempChanged(); break;
        case 2: _t->userNameChanged(); break;
        case 3: _t->currentTimeChanged(); break;
        case 4: _t->currentTemperatureChanged(); break;
        case 5: _t->setCarLocked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->setOutdoorTemp((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->setUserName((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: _t->setCurrentTime((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 9: _t->setCurrentTemperature((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 10: _t->currentTimeTimerTimeout(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (System::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&System::carLockedChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (System::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&System::outdoorTempChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (System::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&System::userNameChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (System::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&System::currentTimeChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (System::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&System::currentTemperatureChanged)) {
                *result = 4;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<System *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->carLocked(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->outdoorTemp(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->userName(); break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->currentTime(); break;
        case 4: *reinterpret_cast< QString*>(_v) = _t->currentTemperature(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<System *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setCarLocked(*reinterpret_cast< bool*>(_v)); break;
        case 1: _t->setOutdoorTemp(*reinterpret_cast< int*>(_v)); break;
        case 2: _t->setUserName(*reinterpret_cast< QString*>(_v)); break;
        case 3: _t->setCurrentTime(*reinterpret_cast< QString*>(_v)); break;
        case 4: _t->setCurrentTemperature(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject System::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_System.data,
    qt_meta_data_System,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *System::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *System::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_System.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int System::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 5;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void System::carLockedChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void System::outdoorTempChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void System::userNameChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void System::currentTimeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void System::currentTemperatureChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
