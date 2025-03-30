/****************************************************************************
** Meta object code from reading C++ file 'dronedata.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../mapDroneV1/dronedata.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dronedata.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_DroneData_t {
    QByteArrayData data[10];
    char stringdata0[134];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DroneData_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DroneData_t qt_meta_stringdata_DroneData = {
    {
QT_MOC_LITERAL(0, 0, 9), // "DroneData"
QT_MOC_LITERAL(1, 10, 17), // "buttonShowChanged"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 20), // "droneLocationChanged"
QT_MOC_LITERAL(4, 50, 15), // "getCoorFunction"
QT_MOC_LITERAL(5, 66, 14), // "QGeoCoordinate"
QT_MOC_LITERAL(6, 81, 12), // "missionStart"
QT_MOC_LITERAL(7, 94, 10), // "buttonShow"
QT_MOC_LITERAL(8, 105, 14), // "displayhexagon"
QT_MOC_LITERAL(9, 120, 13) // "droneLocation"

    },
    "DroneData\0buttonShowChanged\0\0"
    "droneLocationChanged\0getCoorFunction\0"
    "QGeoCoordinate\0missionStart\0buttonShow\0"
    "displayhexagon\0droneLocation"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DroneData[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       3,   40, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x06 /* Public */,
       3,    0,   35,    2, 0x06 /* Public */,

 // methods: name, argc, parameters, tag, flags
       4,    1,   36,    2, 0x02 /* Public */,
       6,    0,   39,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void, 0x80000000 | 5,    2,
    QMetaType::Void,

 // properties: name, type, flags
       7, QMetaType::Bool, 0x00495103,
       8, QMetaType::QVariantList, 0x00095001,
       9, 0x80000000 | 5, 0x0049510b,

 // properties: notify_signal_id
       0,
       0,
       1,

       0        // eod
};

void DroneData::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DroneData *_t = static_cast<DroneData *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->buttonShowChanged(); break;
        case 1: _t->droneLocationChanged(); break;
        case 2: _t->getCoorFunction((*reinterpret_cast< QGeoCoordinate(*)>(_a[1]))); break;
        case 3: _t->missionStart(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
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
            typedef void (DroneData::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DroneData::buttonShowChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (DroneData::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DroneData::droneLocationChanged)) {
                *result = 1;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGeoCoordinate >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        DroneData *_t = static_cast<DroneData *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->buttonShow(); break;
        case 1: *reinterpret_cast< QVariantList*>(_v) = _t->getdisplayhexagon(); break;
        case 2: *reinterpret_cast< QGeoCoordinate*>(_v) = _t->droneLocation(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        DroneData *_t = static_cast<DroneData *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setButtonShow(*reinterpret_cast< bool*>(_v)); break;
        case 2: _t->setDroneLocation(*reinterpret_cast< QGeoCoordinate*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject DroneData::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_DroneData.data,
      qt_meta_data_DroneData,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *DroneData::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DroneData::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_DroneData.stringdata0))
        return static_cast<void*>(const_cast< DroneData*>(this));
    return QObject::qt_metacast(_clname);
}

int DroneData::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
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
void DroneData::buttonShowChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void DroneData::droneLocationChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
