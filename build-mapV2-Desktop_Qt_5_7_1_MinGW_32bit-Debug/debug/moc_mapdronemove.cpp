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
struct qt_meta_stringdata_mapDroneMove_t {
    QByteArrayData data[14];
    char stringdata0[203];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_mapDroneMove_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_mapDroneMove_t qt_meta_stringdata_mapDroneMove = {
    {
QT_MOC_LITERAL(0, 0, 12), // "mapDroneMove"
QT_MOC_LITERAL(1, 13, 29), // "homeLocationCoordinateChanged"
QT_MOC_LITERAL(2, 43, 0), // ""
QT_MOC_LITERAL(3, 44, 14), // "homeSetChanged"
QT_MOC_LITERAL(4, 59, 15), // "armStateChanged"
QT_MOC_LITERAL(5, 75, 20), // "droneLocationChanged"
QT_MOC_LITERAL(6, 96, 10), // "clickOnMap"
QT_MOC_LITERAL(7, 107, 14), // "QGeoCoordinate"
QT_MOC_LITERAL(8, 122, 16), // "armButtonPressed"
QT_MOC_LITERAL(9, 139, 9), // "moveDrone"
QT_MOC_LITERAL(10, 149, 22), // "homeLocationCoordinate"
QT_MOC_LITERAL(11, 172, 7), // "homeSet"
QT_MOC_LITERAL(12, 180, 8), // "armState"
QT_MOC_LITERAL(13, 189, 13) // "droneLocation"

    },
    "mapDroneMove\0homeLocationCoordinateChanged\0"
    "\0homeSetChanged\0armStateChanged\0"
    "droneLocationChanged\0clickOnMap\0"
    "QGeoCoordinate\0armButtonPressed\0"
    "moveDrone\0homeLocationCoordinate\0"
    "homeSet\0armState\0droneLocation"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_mapDroneMove[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       4,   64, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x06 /* Public */,
       3,    0,   50,    2, 0x06 /* Public */,
       4,    0,   51,    2, 0x06 /* Public */,
       5,    0,   52,    2, 0x06 /* Public */,

 // methods: name, argc, parameters, tag, flags
       6,    1,   53,    2, 0x02 /* Public */,
       8,    1,   56,    2, 0x02 /* Public */,
       9,    2,   59,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void, 0x80000000 | 7,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    2,    2,

 // properties: name, type, flags
      10, 0x80000000 | 7, 0x0049510b,
      11, QMetaType::Bool, 0x00495103,
      12, QMetaType::Bool, 0x00495103,
      13, 0x80000000 | 7, 0x0049510b,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,

       0        // eod
};

void mapDroneMove::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        mapDroneMove *_t = static_cast<mapDroneMove *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->homeLocationCoordinateChanged(); break;
        case 1: _t->homeSetChanged(); break;
        case 2: _t->armStateChanged(); break;
        case 3: _t->droneLocationChanged(); break;
        case 4: _t->clickOnMap((*reinterpret_cast< QGeoCoordinate(*)>(_a[1]))); break;
        case 5: _t->armButtonPressed((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->moveDrone((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 4:
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
            typedef void (mapDroneMove::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&mapDroneMove::homeLocationCoordinateChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (mapDroneMove::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&mapDroneMove::homeSetChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (mapDroneMove::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&mapDroneMove::armStateChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (mapDroneMove::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&mapDroneMove::droneLocationChanged)) {
                *result = 3;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGeoCoordinate >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        mapDroneMove *_t = static_cast<mapDroneMove *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QGeoCoordinate*>(_v) = _t->homeLocationCoordinate(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->homeSet(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->armState(); break;
        case 3: *reinterpret_cast< QGeoCoordinate*>(_v) = _t->droneLocation(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        mapDroneMove *_t = static_cast<mapDroneMove *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setHomeLocationCoordinate(*reinterpret_cast< QGeoCoordinate*>(_v)); break;
        case 1: _t->setHomeSet(*reinterpret_cast< bool*>(_v)); break;
        case 2: _t->setArmState(*reinterpret_cast< bool*>(_v)); break;
        case 3: _t->setDroneLocation(*reinterpret_cast< QGeoCoordinate*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject mapDroneMove::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_mapDroneMove.data,
      qt_meta_data_mapDroneMove,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *mapDroneMove::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mapDroneMove::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_mapDroneMove.stringdata0))
        return static_cast<void*>(const_cast< mapDroneMove*>(this));
    return QObject::qt_metacast(_clname);
}

int mapDroneMove::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 4;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void mapDroneMove::homeLocationCoordinateChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void mapDroneMove::homeSetChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void mapDroneMove::armStateChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}

// SIGNAL 3
void mapDroneMove::droneLocationChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
