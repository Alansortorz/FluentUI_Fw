/****************************************************************************
** Meta object code from reading C++ file 'FluFramelessHelper.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../fluentui_fw/FluentUI/src/FluFramelessHelper.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'FluFramelessHelper.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_FluFramelessHelper_t {
    uint offsetsAndSizes[16];
    char stringdata0[19];
    char stringdata1[12];
    char stringdata2[14];
    char stringdata3[1];
    char stringdata4[17];
    char stringdata5[17];
    char stringdata6[15];
    char stringdata7[6];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_FluFramelessHelper_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_FluFramelessHelper_t qt_meta_stringdata_FluFramelessHelper = {
    {
        QT_MOC_LITERAL(0, 18),  // "FluFramelessHelper"
        QT_MOC_LITERAL(19, 11),  // "QML.Element"
        QT_MOC_LITERAL(31, 13),  // "loadCompleted"
        QT_MOC_LITERAL(45, 0),  // ""
        QT_MOC_LITERAL(46, 16),  // "_onStayTopChange"
        QT_MOC_LITERAL(63, 16),  // "_onScreenChanged"
        QT_MOC_LITERAL(80, 14),  // "showSystemMenu"
        QT_MOC_LITERAL(95, 5)   // "point"
    },
    "FluFramelessHelper",
    "QML.Element",
    "loadCompleted",
    "",
    "_onStayTopChange",
    "_onScreenChanged",
    "showSystemMenu",
    "point"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_FluFramelessHelper[] = {

 // content:
      10,       // revision
       0,       // classname
       1,   14, // classinfo
       4,   16, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // classinfo: key, value
       1,    0,

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       2,    0,   40,    3, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       4,    0,   41,    3, 0x08,    2 /* Private */,
       5,    0,   42,    3, 0x08,    3 /* Private */,

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
       6,    1,   43,    3, 0x02,    4 /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void, QMetaType::QPoint,    7,

       0        // eod
};

Q_CONSTINIT const QMetaObject FluFramelessHelper::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_FluFramelessHelper.offsetsAndSizes,
    qt_meta_data_FluFramelessHelper,
    qt_static_metacall,
    nullptr,
    qt_metaTypeArray<
        // Q_OBJECT / Q_GADGET
        FluFramelessHelper,
        // method 'loadCompleted'
        void,
        // method '_onStayTopChange'
        void,
        // method '_onScreenChanged'
        void,
        // method 'showSystemMenu'
        void,
        QPoint
    >,
    nullptr
} };

void FluFramelessHelper::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FluFramelessHelper *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->loadCompleted(); break;
        case 1: _t->_onStayTopChange(); break;
        case 2: _t->_onScreenChanged(); break;
        case 3: _t->showSystemMenu((*reinterpret_cast< std::add_pointer_t<QPoint>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (FluFramelessHelper::*)();
            if (_t _q_method = &FluFramelessHelper::loadCompleted; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject *FluFramelessHelper::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FluFramelessHelper::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FluFramelessHelper.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "QQmlParserStatus"))
        return static_cast< QQmlParserStatus*>(this);
    if (!strcmp(_clname, "org.qt-project.Qt.QQmlParserStatus"))
        return static_cast< QQmlParserStatus*>(this);
    return QObject::qt_metacast(_clname);
}

int FluFramelessHelper::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void FluFramelessHelper::loadCompleted()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
