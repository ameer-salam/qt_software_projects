/****************************************************************************
** Meta object code from reading C++ file 'mapdronemove.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../mapV2/mapdronemove.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mapdronemove.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_MapDroneMove_t {
    QByteArrayData data[11];
    char stringdata0[134];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MapDroneMove_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MapDroneMove_t qt_meta_stringdata_MapDroneMove = {
    {
QT_MOC_LITERAL(0, 0, 12), // "MapDroneMove"
QT_MOC_LITERAL(1, 13, 11), // "homeChanged"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 19), // "homeLocationChanged"
QT_MOC_LITERAL(4, 46, 17), // "droneArmedChanged"
QT_MOC_LITERAL(5, 64, 13), // "getCoordinate"
QT_MOC_LITERAL(6, 78, 14), // "QGeoCoordinate"
QT_MOC_LITERAL(7, 93, 11), // "ArmAndStart"
QT_MOC_LITERAL(8, 105, 4), // "home"
QT_MOC_LITERAL(9, 110, 12), // "homeLocation"
QT_MOC_LITERAL(10, 123, 10) // "droneArmed"

    },
    "MapDroneMove\0homeChanged\0\0homeLocationChanged\0"
    "droneArmedChanged\0getCoordinate\0"
    "QGeoCoordinate\0ArmAndStart\0home\0"
    "homeLocation\0droneArmed"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MapDroneMove[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       3,   46, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x06 /* Public */,
       3,    0,   40,    2, 0x06 /* Public */,
       4,    0,   41,    2, 0x06 /* Public */,

 // methods: name, argc, parameters, tag, flags
       5,    1,   42,    2, 0x02 /* Public */,
       7,    0,   45,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void, 0x80000000 | 6,    2,
    0x80000000 | 6,

 // properties: name, type, flags
       8, QMetaType::Bool, 0x00495103,
       9, 0x80000000 | 6, 0x0049510b,
      10, QMetaType::Bool, 0x00495103,

 // properties: notify_signal_id
       0,
       1,
       2,

       0        // eod
};

void MapDroneMove::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MapDroneMove *_t = static_cast<MapDroneMove *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->homeChanged(); break;
        case 1: _t->homeLocationChanged(); break;
        case 2: _t->droneArmedChanged(); break;
        case 3: _t->getCoordinate((*reinterpret_cast< QGeoCoordinate(*)>(_a[1]))); break;
        case 4: { QGeoCoordinate _r = _t->ArmAndStart();
            if (_a[0]) *reinterpret_cast< QGeoCoordinate*>(_a[0]) = _r; }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGeoCoordinate >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (MapDroneMove::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MapDroneMove::homeChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (MapDroneMove::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MapDroneMove::homeLocationChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (MapDroneMove::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MapDroneMove::droneArmedChanged)) {
                *result = 2;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGeoCoordinate >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        MapDroneMove *_t = static_cast<MapDroneMove *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->home(); break;
        case 1: *reinterpret_cast< QGeoCoordinate*>(_v) = _t->homeLocation(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->droneArmed(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        MapDroneMove *_t = static_cast<MapDroneMove *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setHome(*reinterpret_cast< bool*>(_v)); break;
        case 1: _t->setHomeLocation(*reinterpret_cast< QGeoCoordinate*>(_v)); break;
        case 2: _t->setDroneArmed(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject MapDroneMove::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_MapDroneMove.data,
      qt_meta_data_MapDroneMove,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *MapDroneMove::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MapDroneMove::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_MapDroneMove.stringdata0))
        return static_cast<void*>(const_cast< MapDroneMove*>(this));
    return QObject::qt_metacast(_clname);
}

int MapDroneMove::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 3;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void MapDroneMove::homeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void MapDroneMove::homeLocationChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void MapDroneMove::droneArmedChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
