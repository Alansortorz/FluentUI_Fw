/****************************************************************************
** Meta object code from reading C++ file 'FluEventBus.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../fluentui_fw/FluentUI/src/FluEventBus.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'FluEventBus.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.4.3. It"
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
struct qt_meta_stringdata_FluEvent_t {
    uint offsetsAndSizes[14];
    char stringdata0[9];
    char stringdata1[12];
    char stringdata2[12];
    char stringdata3[1];
    char stringdata4[10];
    char stringdata5[5];
    char stringdata6[5];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_FluEvent_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_FluEvent_t qt_meta_stringdata_FluEvent = {
    {
        QT_MOC_LITERAL(0, 8),  // "FluEvent"
        QT_MOC_LITERAL(9, 11),  // "QML.Element"
        QT_MOC_LITERAL(21, 11),  // "nameChanged"
        QT_MOC_LITERAL(33, 0),  // ""
        QT_MOC_LITERAL(34, 9),  // "triggered"
        QT_MOC_LITERAL(44, 4),  // "data"
        QT_MOC_LITERAL(49, 4)   // "name"
    },
    "FluEvent",
    "QML.Element",
    "nameChanged",
    "",
    "triggered",
    "data",
    "name"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_FluEvent[] = {

 // content:
      10,       // revision
       0,       // classname
       1,   14, // classinfo
       2,   16, // methods
       1,   32, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // classinfo: key, value
       1,    0,

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       2,    0,   28,    3, 0x06,    2 /* Public */,
       4,    1,   29,    3, 0x06,    3 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QVariantMap,    5,

 // properties: name, type, flags
       6, QMetaType::QString, 0x00015003, uint(0), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject FluEvent::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_FluEvent.offsetsAndSizes,
    qt_meta_data_FluEvent,
    qt_static_metacall,
    nullptr,
    qt_metaTypeArray<
        // property 'name'
        QString,
        // Q_OBJECT / Q_GADGET
        FluEvent,
        // method 'nameChanged'
        void,
        // method 'triggered'
        void,
        QMap<QString,QVariant>
    >,
    nullptr
} };

void FluEvent::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FluEvent *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->nameChanged(); break;
        case 1: _t->triggered((*reinterpret_cast< std::add_pointer_t<QMap<QString,QVariant>>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (FluEvent::*)();
            if (_t _q_method = &FluEvent::nameChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (FluEvent::*)(QMap<QString,QVariant> );
            if (_t _q_method = &FluEvent::triggered; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
    }else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<FluEvent *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->_name; break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<FluEvent *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0:
            if (_t->_name != *reinterpret_cast< QString*>(_v)) {
                _t->_name = *reinterpret_cast< QString*>(_v);
                Q_EMIT _t->nameChanged();
            }
            break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *FluEvent::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FluEvent::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FluEvent.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int FluEvent::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 2;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void FluEvent::nameChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void FluEvent::triggered(QMap<QString,QVariant> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
namespace {
struct qt_meta_stringdata_FluEventBus_t {
    uint offsetsAndSizes[24];
    char stringdata0[12];
    char stringdata1[12];
    char stringdata2[14];
    char stringdata3[5];
    char stringdata4[14];
    char stringdata5[1];
    char stringdata6[10];
    char stringdata7[6];
    char stringdata8[16];
    char stringdata9[5];
    char stringdata10[5];
    char stringdata11[7];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_FluEventBus_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_FluEventBus_t qt_meta_stringdata_FluEventBus = {
    {
        QT_MOC_LITERAL(0, 11),  // "FluEventBus"
        QT_MOC_LITERAL(12, 11),  // "QML.Element"
        QT_MOC_LITERAL(24, 13),  // "QML.Singleton"
        QT_MOC_LITERAL(38, 4),  // "true"
        QT_MOC_LITERAL(43, 13),  // "registerEvent"
        QT_MOC_LITERAL(57, 0),  // ""
        QT_MOC_LITERAL(58, 9),  // "FluEvent*"
        QT_MOC_LITERAL(68, 5),  // "event"
        QT_MOC_LITERAL(74, 15),  // "unRegisterEvent"
        QT_MOC_LITERAL(90, 4),  // "post"
        QT_MOC_LITERAL(95, 4),  // "name"
        QT_MOC_LITERAL(100, 6)   // "params"
    },
    "FluEventBus",
    "QML.Element",
    "QML.Singleton",
    "true",
    "registerEvent",
    "",
    "FluEvent*",
    "event",
    "unRegisterEvent",
    "post",
    "name",
    "params"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_FluEventBus[] = {

 // content:
      10,       // revision
       0,       // classname
       2,   14, // classinfo
       4,   18, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // classinfo: key, value
       1,    0,
       2,    3,

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
       4,    1,   42,    5, 0x02,    1 /* Public */,
       8,    1,   45,    5, 0x02,    3 /* Public */,
       9,    2,   48,    5, 0x02,    5 /* Public */,
       9,    1,   53,    5, 0x22,    8 /* Public | MethodCloned */,

 // methods: parameters
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, QMetaType::QString, QMetaType::QVariantMap,   10,   11,
    QMetaType::Void, QMetaType::QString,   10,

       0        // eod
};

Q_CONSTINIT const QMetaObject FluEventBus::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_FluEventBus.offsetsAndSizes,
    qt_meta_data_FluEventBus,
    qt_static_metacall,
    nullptr,
    qt_metaTypeArray<
        // Q_OBJECT / Q_GADGET
        FluEventBus,
        // method 'registerEvent'
        void,
        FluEvent *,
        // method 'unRegisterEvent'
        void,
        FluEvent *,
        // method 'post'
        void,
        const QString &,
        const QMap<QString,QVariant> &,
        // method 'post'
        void,
        const QString &
    >,
    nullptr
} };

void FluEventBus::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FluEventBus *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->registerEvent((*reinterpret_cast< std::add_pointer_t<FluEvent*>>(_a[1]))); break;
        case 1: _t->unRegisterEvent((*reinterpret_cast< std::add_pointer_t<FluEvent*>>(_a[1]))); break;
        case 2: _t->post((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QMap<QString,QVariant>>>(_a[2]))); break;
        case 3: _t->post((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< FluEvent* >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< FluEvent* >(); break;
            }
            break;
        }
    }
}

const QMetaObject *FluEventBus::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FluEventBus::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FluEventBus.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int FluEventBus::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
