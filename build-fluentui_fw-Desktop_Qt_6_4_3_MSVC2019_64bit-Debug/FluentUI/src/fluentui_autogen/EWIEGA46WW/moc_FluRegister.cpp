/****************************************************************************
** Meta object code from reading C++ file 'FluRegister.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../fluentui_fw/FluentUI/src/FluRegister.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'FluRegister.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_FluRegister_t {
    uint offsetsAndSizes[28];
    char stringdata0[12];
    char stringdata1[12];
    char stringdata2[1];
    char stringdata3[10];
    char stringdata4[12];
    char stringdata5[7];
    char stringdata6[5];
    char stringdata7[7];
    char stringdata8[9];
    char stringdata9[9];
    char stringdata10[5];
    char stringdata11[14];
    char stringdata12[3];
    char stringdata13[5];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_FluRegister_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_FluRegister_t qt_meta_stringdata_FluRegister = {
    {
        QT_MOC_LITERAL(0, 11),  // "FluRegister"
        QT_MOC_LITERAL(12, 11),  // "fromChanged"
        QT_MOC_LITERAL(24, 0),  // ""
        QT_MOC_LITERAL(25, 9),  // "toChanged"
        QT_MOC_LITERAL(35, 11),  // "pathChanged"
        QT_MOC_LITERAL(47, 6),  // "result"
        QT_MOC_LITERAL(54, 4),  // "data"
        QT_MOC_LITERAL(59, 6),  // "launch"
        QT_MOC_LITERAL(66, 8),  // "argument"
        QT_MOC_LITERAL(75, 8),  // "onResult"
        QT_MOC_LITERAL(84, 4),  // "from"
        QT_MOC_LITERAL(89, 13),  // "QQuickWindow*"
        QT_MOC_LITERAL(103, 2),  // "to"
        QT_MOC_LITERAL(106, 4)   // "path"
    },
    "FluRegister",
    "fromChanged",
    "",
    "toChanged",
    "pathChanged",
    "result",
    "data",
    "launch",
    "argument",
    "onResult",
    "from",
    "QQuickWindow*",
    "to",
    "path"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_FluRegister[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       3,   76, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   62,    2, 0x06,    4 /* Public */,
       3,    0,   63,    2, 0x06,    5 /* Public */,
       4,    0,   64,    2, 0x06,    6 /* Public */,
       5,    1,   65,    2, 0x06,    7 /* Public */,

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
       7,    1,   68,    2, 0x02,    9 /* Public */,
       7,    0,   71,    2, 0x22,   11 /* Public | MethodCloned */,
       9,    1,   72,    2, 0x02,   12 /* Public */,
       9,    0,   75,    2, 0x22,   14 /* Public | MethodCloned */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QJsonObject,    6,

 // methods: parameters
    QMetaType::Void, QMetaType::QJsonObject,    8,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QJsonObject,    6,
    QMetaType::Void,

 // properties: name, type, flags
      10, 0x80000000 | 11, 0x0001500b, uint(0), 0,
      12, 0x80000000 | 11, 0x0001500b, uint(1), 0,
      13, QMetaType::QString, 0x00015003, uint(2), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject FluRegister::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_FluRegister.offsetsAndSizes,
    qt_meta_data_FluRegister,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_FluRegister_t,
        // property 'from'
        QtPrivate::TypeAndForceComplete<QQuickWindow*, std::true_type>,
        // property 'to'
        QtPrivate::TypeAndForceComplete<QQuickWindow*, std::true_type>,
        // property 'path'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<FluRegister, std::true_type>,
        // method 'fromChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'toChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'pathChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'result'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QJsonObject &, std::false_type>,
        // method 'launch'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QJsonObject &, std::false_type>,
        // method 'launch'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onResult'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QJsonObject &, std::false_type>,
        // method 'onResult'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void FluRegister::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FluRegister *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->fromChanged(); break;
        case 1: _t->toChanged(); break;
        case 2: _t->pathChanged(); break;
        case 3: _t->result((*reinterpret_cast< std::add_pointer_t<QJsonObject>>(_a[1]))); break;
        case 4: _t->launch((*reinterpret_cast< std::add_pointer_t<QJsonObject>>(_a[1]))); break;
        case 5: _t->launch(); break;
        case 6: _t->onResult((*reinterpret_cast< std::add_pointer_t<QJsonObject>>(_a[1]))); break;
        case 7: _t->onResult(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (FluRegister::*)();
            if (_t _q_method = &FluRegister::fromChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (FluRegister::*)();
            if (_t _q_method = &FluRegister::toChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (FluRegister::*)();
            if (_t _q_method = &FluRegister::pathChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (FluRegister::*)(const QJsonObject & );
            if (_t _q_method = &FluRegister::result; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QQuickWindow* >(); break;
        }
    }
else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<FluRegister *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QQuickWindow**>(_v) = _t->_from; break;
        case 1: *reinterpret_cast< QQuickWindow**>(_v) = _t->_to; break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->_path; break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<FluRegister *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0:
            if (_t->_from != *reinterpret_cast< QQuickWindow**>(_v)) {
                _t->_from = *reinterpret_cast< QQuickWindow**>(_v);
                Q_EMIT _t->fromChanged();
            }
            break;
        case 1:
            if (_t->_to != *reinterpret_cast< QQuickWindow**>(_v)) {
                _t->_to = *reinterpret_cast< QQuickWindow**>(_v);
                Q_EMIT _t->toChanged();
            }
            break;
        case 2:
            if (_t->_path != *reinterpret_cast< QString*>(_v)) {
                _t->_path = *reinterpret_cast< QString*>(_v);
                Q_EMIT _t->pathChanged();
            }
            break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *FluRegister::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FluRegister::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FluRegister.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int FluRegister::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 8;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void FluRegister::fromChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void FluRegister::toChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void FluRegister::pathChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void FluRegister::result(const QJsonObject & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
