/****************************************************************************
** Meta object code from reading C++ file 'FluTreeModel.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../fluentui_fw/FluentUI/src/FluTreeModel.h"
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'FluTreeModel.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_FluNode_t {
    uint offsetsAndSizes[22];
    char stringdata0[8];
    char stringdata1[4];
    char stringdata2[1];
    char stringdata3[6];
    char stringdata4[6];
    char stringdata5[11];
    char stringdata6[12];
    char stringdata7[19];
    char stringdata8[6];
    char stringdata9[8];
    char stringdata10[15];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_FluNode_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_FluNode_t qt_meta_stringdata_FluNode = {
    {
        QT_MOC_LITERAL(0, 7),  // "FluNode"
        QT_MOC_LITERAL(8, 3),  // "key"
        QT_MOC_LITERAL(12, 0),  // ""
        QT_MOC_LITERAL(13, 5),  // "title"
        QT_MOC_LITERAL(19, 5),  // "depth"
        QT_MOC_LITERAL(25, 10),  // "isExpanded"
        QT_MOC_LITERAL(36, 11),  // "hasChildren"
        QT_MOC_LITERAL(48, 18),  // "hasNextNodeByIndex"
        QT_MOC_LITERAL(67, 5),  // "index"
        QT_MOC_LITERAL(73, 7),  // "checked"
        QT_MOC_LITERAL(81, 14)   // "hideLineFooter"
    },
    "FluNode",
    "key",
    "",
    "title",
    "depth",
    "isExpanded",
    "hasChildren",
    "hasNextNodeByIndex",
    "index",
    "checked",
    "hideLineFooter"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_FluNode[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       5,   72, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   62,    2, 0x02,    6 /* Public */,
       3,    0,   63,    2, 0x02,    7 /* Public */,
       4,    0,   64,    2, 0x02,    8 /* Public */,
       5,    0,   65,    2, 0x02,    9 /* Public */,
       6,    0,   66,    2, 0x02,   10 /* Public */,
       7,    1,   67,    2, 0x02,   11 /* Public */,
       9,    0,   70,    2, 0x02,   13 /* Public */,
      10,    0,   71,    2, 0x02,   14 /* Public */,

 // methods: parameters
    QMetaType::QString,
    QMetaType::QString,
    QMetaType::Int,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Bool, QMetaType::Int,    8,
    QMetaType::Bool,
    QMetaType::Bool,

 // properties: name, type, flags
       1, QMetaType::QString, 0x00015401, uint(-1), 0,
       3, QMetaType::QString, 0x00015401, uint(-1), 0,
       4, QMetaType::Int, 0x00015401, uint(-1), 0,
       5, QMetaType::Bool, 0x00015401, uint(-1), 0,
       9, QMetaType::Bool, 0x00015401, uint(-1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject FluNode::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_FluNode.offsetsAndSizes,
    qt_meta_data_FluNode,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_FluNode_t,
        // property 'key'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'title'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'depth'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'isExpanded'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'checked'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<FluNode, std::true_type>,
        // method 'key'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'title'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'depth'
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'isExpanded'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'hasChildren'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'hasNextNodeByIndex'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'checked'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'hideLineFooter'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>
    >,
    nullptr
} };

void FluNode::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FluNode *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { QString _r = _t->key();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 1: { QString _r = _t->title();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 2: { int _r = _t->depth();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 3: { bool _r = _t->isExpanded();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 4: { bool _r = _t->hasChildren();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 5: { bool _r = _t->hasNextNodeByIndex((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 6: { bool _r = _t->checked();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 7: { bool _r = _t->hideLineFooter();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<FluNode *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->key(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->title(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->depth(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->isExpanded(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->checked(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *FluNode::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FluNode::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FluNode.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int FluNode::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
        _id -= 5;
    }
    return _id;
}
namespace {
struct qt_meta_stringdata_FluTreeModel_t {
    uint offsetsAndSizes[66];
    char stringdata0[13];
    char stringdata1[12];
    char stringdata2[19];
    char stringdata3[6];
    char stringdata4[22];
    char stringdata5[1];
    char stringdata6[22];
    char stringdata7[11];
    char stringdata8[4];
    char stringdata9[6];
    char stringdata10[11];
    char stringdata11[16];
    char stringdata12[5];
    char stringdata13[7];
    char stringdata14[8];
    char stringdata15[14];
    char stringdata16[30];
    char stringdata17[9];
    char stringdata18[7];
    char stringdata19[12];
    char stringdata20[10];
    char stringdata21[10];
    char stringdata22[14];
    char stringdata23[8];
    char stringdata24[9];
    char stringdata25[12];
    char stringdata26[9];
    char stringdata27[8];
    char stringdata28[23];
    char stringdata29[10];
    char stringdata30[12];
    char stringdata31[15];
    char stringdata32[15];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_FluTreeModel_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_FluTreeModel_t qt_meta_stringdata_FluTreeModel = {
    {
        QT_MOC_LITERAL(0, 12),  // "FluTreeModel"
        QT_MOC_LITERAL(13, 11),  // "QML.Element"
        QT_MOC_LITERAL(25, 18),  // "QML.AddedInVersion"
        QT_MOC_LITERAL(44, 5),  // "65281"
        QT_MOC_LITERAL(50, 21),  // "dataSourceSizeChanged"
        QT_MOC_LITERAL(72, 0),  // ""
        QT_MOC_LITERAL(73, 21),  // "selectionModelChanged"
        QT_MOC_LITERAL(95, 10),  // "removeRows"
        QT_MOC_LITERAL(106, 3),  // "row"
        QT_MOC_LITERAL(110, 5),  // "count"
        QT_MOC_LITERAL(116, 10),  // "insertRows"
        QT_MOC_LITERAL(127, 15),  // "QList<FluNode*>"
        QT_MOC_LITERAL(143, 4),  // "data"
        QT_MOC_LITERAL(148, 6),  // "getRow"
        QT_MOC_LITERAL(155, 7),  // "setData"
        QT_MOC_LITERAL(163, 13),  // "setDataSource"
        QT_MOC_LITERAL(177, 29),  // "QList<QMap<QString,QVariant>>"
        QT_MOC_LITERAL(207, 8),  // "collapse"
        QT_MOC_LITERAL(216, 6),  // "expand"
        QT_MOC_LITERAL(223, 11),  // "dragAnddrop"
        QT_MOC_LITERAL(235, 9),  // "dragIndex"
        QT_MOC_LITERAL(245, 9),  // "dropIndex"
        QT_MOC_LITERAL(255, 13),  // "isDropTopArea"
        QT_MOC_LITERAL(269, 7),  // "getNode"
        QT_MOC_LITERAL(277, 8),  // "FluNode*"
        QT_MOC_LITERAL(286, 11),  // "refreshNode"
        QT_MOC_LITERAL(298, 8),  // "checkRow"
        QT_MOC_LITERAL(307, 7),  // "chekced"
        QT_MOC_LITERAL(315, 22),  // "hitHasChildrenExpanded"
        QT_MOC_LITERAL(338, 9),  // "allExpand"
        QT_MOC_LITERAL(348, 11),  // "allCollapse"
        QT_MOC_LITERAL(360, 14),  // "dataSourceSize"
        QT_MOC_LITERAL(375, 14)   // "selectionModel"
    },
    "FluTreeModel",
    "QML.Element",
    "QML.AddedInVersion",
    "65281",
    "dataSourceSizeChanged",
    "",
    "selectionModelChanged",
    "removeRows",
    "row",
    "count",
    "insertRows",
    "QList<FluNode*>",
    "data",
    "getRow",
    "setData",
    "setDataSource",
    "QList<QMap<QString,QVariant>>",
    "collapse",
    "expand",
    "dragAnddrop",
    "dragIndex",
    "dropIndex",
    "isDropTopArea",
    "getNode",
    "FluNode*",
    "refreshNode",
    "checkRow",
    "chekced",
    "hitHasChildrenExpanded",
    "allExpand",
    "allCollapse",
    "dataSourceSize",
    "selectionModel"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_FluTreeModel[] = {

 // content:
      10,       // revision
       0,       // classname
       2,   14, // classinfo
      16,   18, // methods
       2,  164, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // classinfo: key, value
       1,    0,
       2,    3,

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       4,    0,  114,    5, 0x06,    3 /* Public */,
       6,    0,  115,    5, 0x06,    4 /* Public */,

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
       7,    2,  116,    5, 0x02,    5 /* Public */,
      10,    2,  121,    5, 0x02,    8 /* Public */,
      13,    1,  126,    5, 0x02,   11 /* Public */,
      14,    1,  129,    5, 0x02,   13 /* Public */,
      15,    1,  132,    5, 0x02,   15 /* Public */,
      17,    1,  135,    5, 0x02,   17 /* Public */,
      18,    1,  138,    5, 0x02,   19 /* Public */,
      19,    3,  141,    5, 0x02,   21 /* Public */,
      23,    1,  148,    5, 0x02,   25 /* Public */,
      25,    1,  151,    5, 0x02,   27 /* Public */,
      26,    2,  154,    5, 0x02,   29 /* Public */,
      28,    1,  159,    5, 0x02,   32 /* Public */,
      29,    0,  162,    5, 0x02,   34 /* Public */,
      30,    0,  163,    5, 0x02,   35 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    8,    9,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 11,    8,   12,
    QMetaType::QObjectStar, QMetaType::Int,    8,
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::Void, 0x80000000 | 16,   12,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Bool,   20,   21,   22,
    0x80000000 | 24, QMetaType::Int,    8,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void, QMetaType::Int, QMetaType::Bool,    8,   27,
    QMetaType::Bool, QMetaType::Int,    8,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
      31, QMetaType::Int, 0x00015003, uint(0), 0,
      32, 0x80000000 | 11, 0x0001500b, uint(1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject FluTreeModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QAbstractItemModel::staticMetaObject>(),
    qt_meta_stringdata_FluTreeModel.offsetsAndSizes,
    qt_meta_data_FluTreeModel,
    qt_static_metacall,
    nullptr,
    qt_metaTypeArray<
        // property 'dataSourceSize'
        int,
        // property 'selectionModel'
        QList<FluNode*>,
        // Q_OBJECT / Q_GADGET
        FluTreeModel,
        // method 'dataSourceSizeChanged'
        void,
        // method 'selectionModelChanged'
        void,
        // method 'removeRows'
        void,
        int,
        int,
        // method 'insertRows'
        void,
        int,
        QList<FluNode*>,
        // method 'getRow'
        QObject *,
        int,
        // method 'setData'
        void,
        QList<FluNode*>,
        // method 'setDataSource'
        void,
        QList<QMap<QString,QVariant>>,
        // method 'collapse'
        void,
        int,
        // method 'expand'
        void,
        int,
        // method 'dragAnddrop'
        void,
        int,
        int,
        bool,
        // method 'getNode'
        FluNode *,
        int,
        // method 'refreshNode'
        void,
        int,
        // method 'checkRow'
        void,
        int,
        bool,
        // method 'hitHasChildrenExpanded'
        bool,
        int,
        // method 'allExpand'
        void,
        // method 'allCollapse'
        void
    >,
    nullptr
} };

void FluTreeModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FluTreeModel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->dataSourceSizeChanged(); break;
        case 1: _t->selectionModelChanged(); break;
        case 2: _t->removeRows((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 3: _t->insertRows((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QList<FluNode*>>>(_a[2]))); break;
        case 4: { QObject* _r = _t->getRow((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])));
            if (_a[0]) *reinterpret_cast< QObject**>(_a[0]) = std::move(_r); }  break;
        case 5: _t->setData((*reinterpret_cast< std::add_pointer_t<QList<FluNode*>>>(_a[1]))); break;
        case 6: _t->setDataSource((*reinterpret_cast< std::add_pointer_t<QList<QMap<QString,QVariant>>>>(_a[1]))); break;
        case 7: _t->collapse((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 8: _t->expand((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 9: _t->dragAnddrop((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[3]))); break;
        case 10: { FluNode* _r = _t->getNode((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])));
            if (_a[0]) *reinterpret_cast< FluNode**>(_a[0]) = std::move(_r); }  break;
        case 11: _t->refreshNode((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 12: _t->checkRow((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2]))); break;
        case 13: { bool _r = _t->hitHasChildrenExpanded((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 14: _t->allExpand(); break;
        case 15: _t->allCollapse(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QList<FluNode*> >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QList<FluNode*> >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QList<QMap<QString,QVariant>> >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (FluTreeModel::*)();
            if (_t _q_method = &FluTreeModel::dataSourceSizeChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (FluTreeModel::*)();
            if (_t _q_method = &FluTreeModel::selectionModelChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<FluNode*> >(); break;
        }
    }
else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<FluTreeModel *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->_dataSourceSize; break;
        case 1: *reinterpret_cast< QList<FluNode*>*>(_v) = _t->_selectionModel; break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<FluTreeModel *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0:
            if (_t->_dataSourceSize != *reinterpret_cast< int*>(_v)) {
                _t->_dataSourceSize = *reinterpret_cast< int*>(_v);
                Q_EMIT _t->dataSourceSizeChanged();
            }
            break;
        case 1:
            if (_t->_selectionModel != *reinterpret_cast< QList<FluNode*>*>(_v)) {
                _t->_selectionModel = *reinterpret_cast< QList<FluNode*>*>(_v);
                Q_EMIT _t->selectionModelChanged();
            }
            break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *FluTreeModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FluTreeModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FluTreeModel.stringdata0))
        return static_cast<void*>(this);
    return QAbstractItemModel::qt_metacast(_clname);
}

int FluTreeModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractItemModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void FluTreeModel::dataSourceSizeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void FluTreeModel::selectionModelChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
