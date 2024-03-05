/****************************************************************************
** Meta object code from reading C++ file 'FluNetwork.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../fluentui_fw/FluentUI/src/FluNetwork.h"
#include <QtNetwork/QSslError>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'FluNetwork.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_FluNetworkCallable_t {
    uint offsetsAndSizes[32];
    char stringdata0[19];
    char stringdata1[12];
    char stringdata2[6];
    char stringdata3[1];
    char stringdata4[7];
    char stringdata5[6];
    char stringdata6[7];
    char stringdata7[12];
    char stringdata8[7];
    char stringdata9[8];
    char stringdata10[6];
    char stringdata11[15];
    char stringdata12[5];
    char stringdata13[6];
    char stringdata14[17];
    char stringdata15[5];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_FluNetworkCallable_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_FluNetworkCallable_t qt_meta_stringdata_FluNetworkCallable = {
    {
        QT_MOC_LITERAL(0, 18),  // "FluNetworkCallable"
        QT_MOC_LITERAL(19, 11),  // "QML.Element"
        QT_MOC_LITERAL(31, 5),  // "start"
        QT_MOC_LITERAL(37, 0),  // ""
        QT_MOC_LITERAL(38, 6),  // "finish"
        QT_MOC_LITERAL(45, 5),  // "error"
        QT_MOC_LITERAL(51, 6),  // "status"
        QT_MOC_LITERAL(58, 11),  // "errorString"
        QT_MOC_LITERAL(70, 6),  // "result"
        QT_MOC_LITERAL(77, 7),  // "success"
        QT_MOC_LITERAL(85, 5),  // "cache"
        QT_MOC_LITERAL(91, 14),  // "uploadProgress"
        QT_MOC_LITERAL(106, 4),  // "sent"
        QT_MOC_LITERAL(111, 5),  // "total"
        QT_MOC_LITERAL(117, 16),  // "downloadProgress"
        QT_MOC_LITERAL(134, 4)   // "recv"
    },
    "FluNetworkCallable",
    "QML.Element",
    "start",
    "",
    "finish",
    "error",
    "status",
    "errorString",
    "result",
    "success",
    "cache",
    "uploadProgress",
    "sent",
    "total",
    "downloadProgress",
    "recv"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_FluNetworkCallable[] = {

 // content:
      10,       // revision
       0,       // classname
       1,   14, // classinfo
       7,   16, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // classinfo: key, value
       1,    0,

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       2,    0,   58,    3, 0x06,    1 /* Public */,
       4,    0,   59,    3, 0x06,    2 /* Public */,
       5,    3,   60,    3, 0x06,    3 /* Public */,
       9,    1,   67,    3, 0x06,    7 /* Public */,
      10,    1,   70,    3, 0x06,    9 /* Public */,
      11,    2,   73,    3, 0x06,   11 /* Public */,
      14,    2,   78,    3, 0x06,   14 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::QString, QMetaType::QString,    6,    7,    8,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void, QMetaType::LongLong, QMetaType::LongLong,   12,   13,
    QMetaType::Void, QMetaType::LongLong, QMetaType::LongLong,   15,   13,

       0        // eod
};

Q_CONSTINIT const QMetaObject FluNetworkCallable::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_FluNetworkCallable.offsetsAndSizes,
    qt_meta_data_FluNetworkCallable,
    qt_static_metacall,
    nullptr,
    qt_metaTypeArray<
        // Q_OBJECT / Q_GADGET
        FluNetworkCallable,
        // method 'start'
        void,
        // method 'finish'
        void,
        // method 'error'
        void,
        int,
        QString,
        QString,
        // method 'success'
        void,
        QString,
        // method 'cache'
        void,
        QString,
        // method 'uploadProgress'
        void,
        qint64,
        qint64,
        // method 'downloadProgress'
        void,
        qint64,
        qint64
    >,
    nullptr
} };

void FluNetworkCallable::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FluNetworkCallable *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->start(); break;
        case 1: _t->finish(); break;
        case 2: _t->error((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3]))); break;
        case 3: _t->success((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 4: _t->cache((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 5: _t->uploadProgress((*reinterpret_cast< std::add_pointer_t<qint64>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<qint64>>(_a[2]))); break;
        case 6: _t->downloadProgress((*reinterpret_cast< std::add_pointer_t<qint64>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<qint64>>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (FluNetworkCallable::*)();
            if (_t _q_method = &FluNetworkCallable::start; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (FluNetworkCallable::*)();
            if (_t _q_method = &FluNetworkCallable::finish; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (FluNetworkCallable::*)(int , QString , QString );
            if (_t _q_method = &FluNetworkCallable::error; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (FluNetworkCallable::*)(QString );
            if (_t _q_method = &FluNetworkCallable::success; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (FluNetworkCallable::*)(QString );
            if (_t _q_method = &FluNetworkCallable::cache; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (FluNetworkCallable::*)(qint64 , qint64 );
            if (_t _q_method = &FluNetworkCallable::uploadProgress; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (FluNetworkCallable::*)(qint64 , qint64 );
            if (_t _q_method = &FluNetworkCallable::downloadProgress; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 6;
                return;
            }
        }
    }
}

const QMetaObject *FluNetworkCallable::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FluNetworkCallable::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FluNetworkCallable.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int FluNetworkCallable::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void FluNetworkCallable::start()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void FluNetworkCallable::finish()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void FluNetworkCallable::error(int _t1, QString _t2, QString _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void FluNetworkCallable::success(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void FluNetworkCallable::cache(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void FluNetworkCallable::uploadProgress(qint64 _t1, qint64 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void FluNetworkCallable::downloadProgress(qint64 _t1, qint64 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}
namespace {
struct qt_meta_stringdata_FluDownloadParam_t {
    uint offsetsAndSizes[2];
    char stringdata0[17];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_FluDownloadParam_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_FluDownloadParam_t qt_meta_stringdata_FluDownloadParam = {
    {
        QT_MOC_LITERAL(0, 16)   // "FluDownloadParam"
    },
    "FluDownloadParam"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_FluDownloadParam[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

Q_CONSTINIT const QMetaObject FluDownloadParam::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_FluDownloadParam.offsetsAndSizes,
    qt_meta_data_FluDownloadParam,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_FluDownloadParam_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<FluDownloadParam, std::true_type>
    >,
    nullptr
} };

void FluDownloadParam::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *FluDownloadParam::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FluDownloadParam::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FluDownloadParam.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int FluDownloadParam::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {
struct qt_meta_stringdata_FluNetworkParams_t {
    uint offsetsAndSizes[46];
    char stringdata0[17];
    char stringdata1[12];
    char stringdata2[9];
    char stringdata3[18];
    char stringdata4[1];
    char stringdata5[4];
    char stringdata6[4];
    char stringdata7[10];
    char stringdata8[4];
    char stringdata9[8];
    char stringdata10[8];
    char stringdata11[11];
    char stringdata12[9];
    char stringdata13[13];
    char stringdata14[11];
    char stringdata15[9];
    char stringdata16[7];
    char stringdata17[5];
    char stringdata18[7];
    char stringdata19[8];
    char stringdata20[3];
    char stringdata21[20];
    char stringdata22[7];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_FluNetworkParams_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_FluNetworkParams_t qt_meta_stringdata_FluNetworkParams = {
    {
        QT_MOC_LITERAL(0, 16),  // "FluNetworkParams"
        QT_MOC_LITERAL(17, 11),  // "QML.Element"
        QT_MOC_LITERAL(29, 8),  // "addQuery"
        QT_MOC_LITERAL(38, 17),  // "FluNetworkParams*"
        QT_MOC_LITERAL(56, 0),  // ""
        QT_MOC_LITERAL(57, 3),  // "key"
        QT_MOC_LITERAL(61, 3),  // "val"
        QT_MOC_LITERAL(65, 9),  // "addHeader"
        QT_MOC_LITERAL(75, 3),  // "add"
        QT_MOC_LITERAL(79, 7),  // "addFile"
        QT_MOC_LITERAL(87, 7),  // "setBody"
        QT_MOC_LITERAL(95, 10),  // "setTimeout"
        QT_MOC_LITERAL(106, 8),  // "setRetry"
        QT_MOC_LITERAL(115, 12),  // "setCacheMode"
        QT_MOC_LITERAL(128, 10),  // "toDownload"
        QT_MOC_LITERAL(139, 8),  // "destPath"
        QT_MOC_LITERAL(148, 6),  // "append"
        QT_MOC_LITERAL(155, 4),  // "bind"
        QT_MOC_LITERAL(160, 6),  // "target"
        QT_MOC_LITERAL(167, 7),  // "openLog"
        QT_MOC_LITERAL(175, 2),  // "go"
        QT_MOC_LITERAL(178, 19),  // "FluNetworkCallable*"
        QT_MOC_LITERAL(198, 6)   // "result"
    },
    "FluNetworkParams",
    "QML.Element",
    "addQuery",
    "FluNetworkParams*",
    "",
    "key",
    "val",
    "addHeader",
    "add",
    "addFile",
    "setBody",
    "setTimeout",
    "setRetry",
    "setCacheMode",
    "toDownload",
    "destPath",
    "append",
    "bind",
    "target",
    "openLog",
    "go",
    "FluNetworkCallable*",
    "result"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_FluNetworkParams[] = {

 // content:
      10,       // revision
       0,       // classname
       1,   14, // classinfo
      13,   16, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // classinfo: key, value
       1,    0,

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
       2,    2,   94,    4, 0x02,    1 /* Public */,
       7,    2,   99,    4, 0x02,    4 /* Public */,
       8,    2,  104,    4, 0x02,    7 /* Public */,
       9,    2,  109,    4, 0x02,   10 /* Public */,
      10,    1,  114,    4, 0x02,   13 /* Public */,
      11,    1,  117,    4, 0x02,   15 /* Public */,
      12,    1,  120,    4, 0x02,   17 /* Public */,
      13,    1,  123,    4, 0x02,   19 /* Public */,
      14,    2,  126,    4, 0x02,   21 /* Public */,
      14,    1,  131,    4, 0x22,   24 /* Public | MethodCloned */,
      17,    1,  134,    4, 0x02,   26 /* Public */,
      19,    1,  137,    4, 0x02,   28 /* Public */,
      20,    1,  140,    4, 0x02,   30 /* Public */,

 // methods: parameters
    0x80000000 | 3, QMetaType::QString, QMetaType::QVariant,    5,    6,
    0x80000000 | 3, QMetaType::QString, QMetaType::QVariant,    5,    6,
    0x80000000 | 3, QMetaType::QString, QMetaType::QVariant,    5,    6,
    0x80000000 | 3, QMetaType::QString, QMetaType::QVariant,    5,    6,
    0x80000000 | 3, QMetaType::QString,    6,
    0x80000000 | 3, QMetaType::Int,    6,
    0x80000000 | 3, QMetaType::Int,    6,
    0x80000000 | 3, QMetaType::Int,    6,
    0x80000000 | 3, QMetaType::QString, QMetaType::Bool,   15,   16,
    0x80000000 | 3, QMetaType::QString,   15,
    0x80000000 | 3, QMetaType::QObjectStar,   18,
    0x80000000 | 3, QMetaType::QVariant,    6,
    QMetaType::Void, 0x80000000 | 21,   22,

       0        // eod
};

Q_CONSTINIT const QMetaObject FluNetworkParams::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_FluNetworkParams.offsetsAndSizes,
    qt_meta_data_FluNetworkParams,
    qt_static_metacall,
    nullptr,
    qt_metaTypeArray<
        // Q_OBJECT / Q_GADGET
        FluNetworkParams,
        // method 'addQuery'
        FluNetworkParams *,
        QString,
        QVariant,
        // method 'addHeader'
        FluNetworkParams *,
        QString,
        QVariant,
        // method 'add'
        FluNetworkParams *,
        QString,
        QVariant,
        // method 'addFile'
        FluNetworkParams *,
        QString,
        QVariant,
        // method 'setBody'
        FluNetworkParams *,
        QString,
        // method 'setTimeout'
        FluNetworkParams *,
        int,
        // method 'setRetry'
        FluNetworkParams *,
        int,
        // method 'setCacheMode'
        FluNetworkParams *,
        int,
        // method 'toDownload'
        FluNetworkParams *,
        QString,
        bool,
        // method 'toDownload'
        FluNetworkParams *,
        QString,
        // method 'bind'
        FluNetworkParams *,
        QObject *,
        // method 'openLog'
        FluNetworkParams *,
        QVariant,
        // method 'go'
        void,
        FluNetworkCallable *
    >,
    nullptr
} };

void FluNetworkParams::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FluNetworkParams *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { FluNetworkParams* _r = _t->addQuery((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QVariant>>(_a[2])));
            if (_a[0]) *reinterpret_cast< FluNetworkParams**>(_a[0]) = std::move(_r); }  break;
        case 1: { FluNetworkParams* _r = _t->addHeader((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QVariant>>(_a[2])));
            if (_a[0]) *reinterpret_cast< FluNetworkParams**>(_a[0]) = std::move(_r); }  break;
        case 2: { FluNetworkParams* _r = _t->add((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QVariant>>(_a[2])));
            if (_a[0]) *reinterpret_cast< FluNetworkParams**>(_a[0]) = std::move(_r); }  break;
        case 3: { FluNetworkParams* _r = _t->addFile((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QVariant>>(_a[2])));
            if (_a[0]) *reinterpret_cast< FluNetworkParams**>(_a[0]) = std::move(_r); }  break;
        case 4: { FluNetworkParams* _r = _t->setBody((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast< FluNetworkParams**>(_a[0]) = std::move(_r); }  break;
        case 5: { FluNetworkParams* _r = _t->setTimeout((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])));
            if (_a[0]) *reinterpret_cast< FluNetworkParams**>(_a[0]) = std::move(_r); }  break;
        case 6: { FluNetworkParams* _r = _t->setRetry((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])));
            if (_a[0]) *reinterpret_cast< FluNetworkParams**>(_a[0]) = std::move(_r); }  break;
        case 7: { FluNetworkParams* _r = _t->setCacheMode((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])));
            if (_a[0]) *reinterpret_cast< FluNetworkParams**>(_a[0]) = std::move(_r); }  break;
        case 8: { FluNetworkParams* _r = _t->toDownload((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2])));
            if (_a[0]) *reinterpret_cast< FluNetworkParams**>(_a[0]) = std::move(_r); }  break;
        case 9: { FluNetworkParams* _r = _t->toDownload((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast< FluNetworkParams**>(_a[0]) = std::move(_r); }  break;
        case 10: { FluNetworkParams* _r = _t->bind((*reinterpret_cast< std::add_pointer_t<QObject*>>(_a[1])));
            if (_a[0]) *reinterpret_cast< FluNetworkParams**>(_a[0]) = std::move(_r); }  break;
        case 11: { FluNetworkParams* _r = _t->openLog((*reinterpret_cast< std::add_pointer_t<QVariant>>(_a[1])));
            if (_a[0]) *reinterpret_cast< FluNetworkParams**>(_a[0]) = std::move(_r); }  break;
        case 12: _t->go((*reinterpret_cast< std::add_pointer_t<FluNetworkCallable*>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 12:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< FluNetworkCallable* >(); break;
            }
            break;
        }
    }
}

const QMetaObject *FluNetworkParams::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FluNetworkParams::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FluNetworkParams.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int FluNetworkParams::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    }
    return _id;
}
namespace {
struct qt_meta_stringdata_FluNetwork_t {
    uint offsetsAndSizes[72];
    char stringdata0[11];
    char stringdata1[12];
    char stringdata2[14];
    char stringdata3[5];
    char stringdata4[15];
    char stringdata5[1];
    char stringdata6[13];
    char stringdata7[16];
    char stringdata8[15];
    char stringdata9[4];
    char stringdata10[18];
    char stringdata11[4];
    char stringdata12[5];
    char stringdata13[9];
    char stringdata14[8];
    char stringdata15[10];
    char stringdata16[11];
    char stringdata17[9];
    char stringdata18[8];
    char stringdata19[10];
    char stringdata20[11];
    char stringdata21[9];
    char stringdata22[8];
    char stringdata23[10];
    char stringdata24[11];
    char stringdata25[14];
    char stringdata26[13];
    char stringdata27[15];
    char stringdata28[16];
    char stringdata29[15];
    char stringdata30[9];
    char stringdata31[12];
    char stringdata32[8];
    char stringdata33[6];
    char stringdata34[9];
    char stringdata35[8];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_FluNetwork_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_FluNetwork_t qt_meta_stringdata_FluNetwork = {
    {
        QT_MOC_LITERAL(0, 10),  // "FluNetwork"
        QT_MOC_LITERAL(11, 11),  // "QML.Element"
        QT_MOC_LITERAL(23, 13),  // "QML.Singleton"
        QT_MOC_LITERAL(37, 4),  // "true"
        QT_MOC_LITERAL(42, 14),  // "timeoutChanged"
        QT_MOC_LITERAL(57, 0),  // ""
        QT_MOC_LITERAL(58, 12),  // "retryChanged"
        QT_MOC_LITERAL(71, 15),  // "cacheDirChanged"
        QT_MOC_LITERAL(87, 14),  // "openLogChanged"
        QT_MOC_LITERAL(102, 3),  // "get"
        QT_MOC_LITERAL(106, 17),  // "FluNetworkParams*"
        QT_MOC_LITERAL(124, 3),  // "url"
        QT_MOC_LITERAL(128, 4),  // "head"
        QT_MOC_LITERAL(133, 8),  // "postBody"
        QT_MOC_LITERAL(142, 7),  // "putBody"
        QT_MOC_LITERAL(150, 9),  // "patchBody"
        QT_MOC_LITERAL(160, 10),  // "deleteBody"
        QT_MOC_LITERAL(171, 8),  // "postForm"
        QT_MOC_LITERAL(180, 7),  // "putForm"
        QT_MOC_LITERAL(188, 9),  // "patchForm"
        QT_MOC_LITERAL(198, 10),  // "deleteForm"
        QT_MOC_LITERAL(209, 8),  // "postJson"
        QT_MOC_LITERAL(218, 7),  // "putJson"
        QT_MOC_LITERAL(226, 9),  // "patchJson"
        QT_MOC_LITERAL(236, 10),  // "deleteJson"
        QT_MOC_LITERAL(247, 13),  // "postJsonArray"
        QT_MOC_LITERAL(261, 12),  // "putJsonArray"
        QT_MOC_LITERAL(274, 14),  // "patchJsonArray"
        QT_MOC_LITERAL(289, 15),  // "deleteJsonArray"
        QT_MOC_LITERAL(305, 14),  // "setInterceptor"
        QT_MOC_LITERAL(320, 8),  // "QJSValue"
        QT_MOC_LITERAL(329, 11),  // "interceptor"
        QT_MOC_LITERAL(341, 7),  // "timeout"
        QT_MOC_LITERAL(349, 5),  // "retry"
        QT_MOC_LITERAL(355, 8),  // "cacheDir"
        QT_MOC_LITERAL(364, 7)   // "openLog"
    },
    "FluNetwork",
    "QML.Element",
    "QML.Singleton",
    "true",
    "timeoutChanged",
    "",
    "retryChanged",
    "cacheDirChanged",
    "openLogChanged",
    "get",
    "FluNetworkParams*",
    "url",
    "head",
    "postBody",
    "putBody",
    "patchBody",
    "deleteBody",
    "postForm",
    "putForm",
    "patchForm",
    "deleteForm",
    "postJson",
    "putJson",
    "patchJson",
    "deleteJson",
    "postJsonArray",
    "putJsonArray",
    "patchJsonArray",
    "deleteJsonArray",
    "setInterceptor",
    "QJSValue",
    "interceptor",
    "timeout",
    "retry",
    "cacheDir",
    "openLog"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_FluNetwork[] = {

 // content:
      10,       // revision
       0,       // classname
       2,   14, // classinfo
      23,   18, // methods
       4,  217, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // classinfo: key, value
       1,    0,
       2,    3,

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       4,    0,  156,    5, 0x06,    5 /* Public */,
       6,    0,  157,    5, 0x06,    6 /* Public */,
       7,    0,  158,    5, 0x06,    7 /* Public */,
       8,    0,  159,    5, 0x06,    8 /* Public */,

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
       9,    1,  160,    5, 0x02,    9 /* Public */,
      12,    1,  163,    5, 0x02,   11 /* Public */,
      13,    1,  166,    5, 0x02,   13 /* Public */,
      14,    1,  169,    5, 0x02,   15 /* Public */,
      15,    1,  172,    5, 0x02,   17 /* Public */,
      16,    1,  175,    5, 0x02,   19 /* Public */,
      17,    1,  178,    5, 0x02,   21 /* Public */,
      18,    1,  181,    5, 0x02,   23 /* Public */,
      19,    1,  184,    5, 0x02,   25 /* Public */,
      20,    1,  187,    5, 0x02,   27 /* Public */,
      21,    1,  190,    5, 0x02,   29 /* Public */,
      22,    1,  193,    5, 0x02,   31 /* Public */,
      23,    1,  196,    5, 0x02,   33 /* Public */,
      24,    1,  199,    5, 0x02,   35 /* Public */,
      25,    1,  202,    5, 0x02,   37 /* Public */,
      26,    1,  205,    5, 0x02,   39 /* Public */,
      27,    1,  208,    5, 0x02,   41 /* Public */,
      28,    1,  211,    5, 0x02,   43 /* Public */,
      29,    1,  214,    5, 0x02,   45 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    0x80000000 | 10, QMetaType::QString,   11,
    0x80000000 | 10, QMetaType::QString,   11,
    0x80000000 | 10, QMetaType::QString,   11,
    0x80000000 | 10, QMetaType::QString,   11,
    0x80000000 | 10, QMetaType::QString,   11,
    0x80000000 | 10, QMetaType::QString,   11,
    0x80000000 | 10, QMetaType::QString,   11,
    0x80000000 | 10, QMetaType::QString,   11,
    0x80000000 | 10, QMetaType::QString,   11,
    0x80000000 | 10, QMetaType::QString,   11,
    0x80000000 | 10, QMetaType::QString,   11,
    0x80000000 | 10, QMetaType::QString,   11,
    0x80000000 | 10, QMetaType::QString,   11,
    0x80000000 | 10, QMetaType::QString,   11,
    0x80000000 | 10, QMetaType::QString,   11,
    0x80000000 | 10, QMetaType::QString,   11,
    0x80000000 | 10, QMetaType::QString,   11,
    0x80000000 | 10, QMetaType::QString,   11,
    QMetaType::Void, 0x80000000 | 30,   31,

 // properties: name, type, flags
      32, QMetaType::Int, 0x00015003, uint(0), 0,
      33, QMetaType::Int, 0x00015003, uint(1), 0,
      34, QMetaType::QString, 0x00015003, uint(2), 0,
      35, QMetaType::Bool, 0x00015003, uint(3), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject FluNetwork::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_FluNetwork.offsetsAndSizes,
    qt_meta_data_FluNetwork,
    qt_static_metacall,
    nullptr,
    qt_metaTypeArray<
        // property 'timeout'
        int,
        // property 'retry'
        int,
        // property 'cacheDir'
        QString,
        // property 'openLog'
        bool,
        // Q_OBJECT / Q_GADGET
        FluNetwork,
        // method 'timeoutChanged'
        void,
        // method 'retryChanged'
        void,
        // method 'cacheDirChanged'
        void,
        // method 'openLogChanged'
        void,
        // method 'get'
        FluNetworkParams *,
        const QString &,
        // method 'head'
        FluNetworkParams *,
        const QString &,
        // method 'postBody'
        FluNetworkParams *,
        const QString &,
        // method 'putBody'
        FluNetworkParams *,
        const QString &,
        // method 'patchBody'
        FluNetworkParams *,
        const QString &,
        // method 'deleteBody'
        FluNetworkParams *,
        const QString &,
        // method 'postForm'
        FluNetworkParams *,
        const QString &,
        // method 'putForm'
        FluNetworkParams *,
        const QString &,
        // method 'patchForm'
        FluNetworkParams *,
        const QString &,
        // method 'deleteForm'
        FluNetworkParams *,
        const QString &,
        // method 'postJson'
        FluNetworkParams *,
        const QString &,
        // method 'putJson'
        FluNetworkParams *,
        const QString &,
        // method 'patchJson'
        FluNetworkParams *,
        const QString &,
        // method 'deleteJson'
        FluNetworkParams *,
        const QString &,
        // method 'postJsonArray'
        FluNetworkParams *,
        const QString &,
        // method 'putJsonArray'
        FluNetworkParams *,
        const QString &,
        // method 'patchJsonArray'
        FluNetworkParams *,
        const QString &,
        // method 'deleteJsonArray'
        FluNetworkParams *,
        const QString &,
        // method 'setInterceptor'
        void,
        QJSValue
    >,
    nullptr
} };

void FluNetwork::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FluNetwork *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->timeoutChanged(); break;
        case 1: _t->retryChanged(); break;
        case 2: _t->cacheDirChanged(); break;
        case 3: _t->openLogChanged(); break;
        case 4: { FluNetworkParams* _r = _t->get((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast< FluNetworkParams**>(_a[0]) = std::move(_r); }  break;
        case 5: { FluNetworkParams* _r = _t->head((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast< FluNetworkParams**>(_a[0]) = std::move(_r); }  break;
        case 6: { FluNetworkParams* _r = _t->postBody((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast< FluNetworkParams**>(_a[0]) = std::move(_r); }  break;
        case 7: { FluNetworkParams* _r = _t->putBody((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast< FluNetworkParams**>(_a[0]) = std::move(_r); }  break;
        case 8: { FluNetworkParams* _r = _t->patchBody((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast< FluNetworkParams**>(_a[0]) = std::move(_r); }  break;
        case 9: { FluNetworkParams* _r = _t->deleteBody((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast< FluNetworkParams**>(_a[0]) = std::move(_r); }  break;
        case 10: { FluNetworkParams* _r = _t->postForm((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast< FluNetworkParams**>(_a[0]) = std::move(_r); }  break;
        case 11: { FluNetworkParams* _r = _t->putForm((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast< FluNetworkParams**>(_a[0]) = std::move(_r); }  break;
        case 12: { FluNetworkParams* _r = _t->patchForm((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast< FluNetworkParams**>(_a[0]) = std::move(_r); }  break;
        case 13: { FluNetworkParams* _r = _t->deleteForm((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast< FluNetworkParams**>(_a[0]) = std::move(_r); }  break;
        case 14: { FluNetworkParams* _r = _t->postJson((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast< FluNetworkParams**>(_a[0]) = std::move(_r); }  break;
        case 15: { FluNetworkParams* _r = _t->putJson((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast< FluNetworkParams**>(_a[0]) = std::move(_r); }  break;
        case 16: { FluNetworkParams* _r = _t->patchJson((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast< FluNetworkParams**>(_a[0]) = std::move(_r); }  break;
        case 17: { FluNetworkParams* _r = _t->deleteJson((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast< FluNetworkParams**>(_a[0]) = std::move(_r); }  break;
        case 18: { FluNetworkParams* _r = _t->postJsonArray((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast< FluNetworkParams**>(_a[0]) = std::move(_r); }  break;
        case 19: { FluNetworkParams* _r = _t->putJsonArray((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast< FluNetworkParams**>(_a[0]) = std::move(_r); }  break;
        case 20: { FluNetworkParams* _r = _t->patchJsonArray((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast< FluNetworkParams**>(_a[0]) = std::move(_r); }  break;
        case 21: { FluNetworkParams* _r = _t->deleteJsonArray((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast< FluNetworkParams**>(_a[0]) = std::move(_r); }  break;
        case 22: _t->setInterceptor((*reinterpret_cast< std::add_pointer_t<QJSValue>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 22:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QJSValue >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (FluNetwork::*)();
            if (_t _q_method = &FluNetwork::timeoutChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (FluNetwork::*)();
            if (_t _q_method = &FluNetwork::retryChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (FluNetwork::*)();
            if (_t _q_method = &FluNetwork::cacheDirChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (FluNetwork::*)();
            if (_t _q_method = &FluNetwork::openLogChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
    }else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<FluNetwork *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->_timeout; break;
        case 1: *reinterpret_cast< int*>(_v) = _t->_retry; break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->_cacheDir; break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->_openLog; break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<FluNetwork *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0:
            if (_t->_timeout != *reinterpret_cast< int*>(_v)) {
                _t->_timeout = *reinterpret_cast< int*>(_v);
                Q_EMIT _t->timeoutChanged();
            }
            break;
        case 1:
            if (_t->_retry != *reinterpret_cast< int*>(_v)) {
                _t->_retry = *reinterpret_cast< int*>(_v);
                Q_EMIT _t->retryChanged();
            }
            break;
        case 2:
            if (_t->_cacheDir != *reinterpret_cast< QString*>(_v)) {
                _t->_cacheDir = *reinterpret_cast< QString*>(_v);
                Q_EMIT _t->cacheDirChanged();
            }
            break;
        case 3:
            if (_t->_openLog != *reinterpret_cast< bool*>(_v)) {
                _t->_openLog = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->openLogChanged();
            }
            break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *FluNetwork::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FluNetwork::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FluNetwork.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int FluNetwork::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 23)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 23;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 23)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 23;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void FluNetwork::timeoutChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void FluNetwork::retryChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void FluNetwork::cacheDirChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void FluNetwork::openLogChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
