/****************************************************************************
** Meta object code from reading C++ file 'FluWindowLifecycle.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../fluentui_fw/FluentUI/src/FluWindowLifecycle.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'FluWindowLifecycle.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_FluWindowLifecycle_t {
    uint offsetsAndSizes[24];
    char stringdata0[19];
    char stringdata1[12];
    char stringdata2[12];
    char stringdata3[1];
    char stringdata4[14];
    char stringdata5[7];
    char stringdata6[14];
    char stringdata7[10];
    char stringdata8[8];
    char stringdata9[17];
    char stringdata10[15];
    char stringdata11[5];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_FluWindowLifecycle_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_FluWindowLifecycle_t qt_meta_stringdata_FluWindowLifecycle = {
    {
        QT_MOC_LITERAL(0, 18),  // "FluWindowLifecycle"
        QT_MOC_LITERAL(19, 11),  // "QML.Element"
        QT_MOC_LITERAL(31, 11),  // "onCompleted"
        QT_MOC_LITERAL(43, 0),  // ""
        QT_MOC_LITERAL(44, 13),  // "QQuickWindow*"
        QT_MOC_LITERAL(58, 6),  // "window"
        QT_MOC_LITERAL(65, 13),  // "onDestruction"
        QT_MOC_LITERAL(79, 9),  // "onVisible"
        QT_MOC_LITERAL(89, 7),  // "visible"
        QT_MOC_LITERAL(97, 16),  // "onDestoryOnClose"
        QT_MOC_LITERAL(114, 14),  // "createRegister"
        QT_MOC_LITERAL(129, 4)   // "path"
    },
    "FluWindowLifecycle",
    "QML.Element",
    "onCompleted",
    "",
    "QQuickWindow*",
    "window",
    "onDestruction",
    "onVisible",
    "visible",
    "onDestoryOnClose",
    "createRegister",
    "path"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_FluWindowLifecycle[] = {

 // content:
      10,       // revision
       0,       // classname
       1,   14, // classinfo
       5,   16, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // classinfo: key, value
       1,    0,

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
       2,    1,   46,    3, 0x02,    1 /* Public */,
       6,    0,   49,    3, 0x02,    3 /* Public */,
       7,    1,   50,    3, 0x02,    4 /* Public */,
       9,    0,   53,    3, 0x02,    6 /* Public */,
      10,    2,   54,    3, 0x02,    7 /* Public */,

 // methods: parameters
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void,
    QMetaType::QVariant, 0x80000000 | 4, QMetaType::QString,    5,   11,

       0        // eod
};

Q_CONSTINIT const QMetaObject FluWindowLifecycle::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_FluWindowLifecycle.offsetsAndSizes,
    qt_meta_data_FluWindowLifecycle,
    qt_static_metacall,
    nullptr,
    qt_metaTypeArray<
        // Q_OBJECT / Q_GADGET
        FluWindowLifecycle,
        // method 'onCompleted'
        void,
        QQuickWindow *,
        // method 'onDestruction'
        void,
        // method 'onVisible'
        void,
        bool,
        // method 'onDestoryOnClose'
        void,
        // method 'createRegister'
        QVariant,
        QQuickWindow *,
        const QString &
    >,
    nullptr
} };

void FluWindowLifecycle::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FluWindowLifecycle *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->onCompleted((*reinterpret_cast< std::add_pointer_t<QQuickWindow*>>(_a[1]))); break;
        case 1: _t->onDestruction(); break;
        case 2: _t->onVisible((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 3: _t->onDestoryOnClose(); break;
        case 4: { QVariant _r = _t->createRegister((*reinterpret_cast< std::add_pointer_t<QQuickWindow*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QQuickWindow* >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QQuickWindow* >(); break;
            }
            break;
        }
    }
}

const QMetaObject *FluWindowLifecycle::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FluWindowLifecycle::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FluWindowLifecycle.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int FluWindowLifecycle::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
