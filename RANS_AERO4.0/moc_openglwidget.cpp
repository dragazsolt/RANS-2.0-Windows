/****************************************************************************
** Meta object code from reading C++ file 'openglwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../RANS-2.0-Source/openglwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'openglwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_OpenglWidget_t {
    QByteArrayData data[75];
    char stringdata0[1000];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OpenglWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OpenglWidget_t qt_meta_stringdata_OpenglWidget = {
    {
QT_MOC_LITERAL(0, 0, 12), // "OpenglWidget"
QT_MOC_LITERAL(1, 13, 18), // "SendSelectedPartID"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 3), // "PID"
QT_MOC_LITERAL(4, 37, 14), // "SendHidePartID"
QT_MOC_LITERAL(5, 52, 18), // "SendSelectedNodeID"
QT_MOC_LITERAL(6, 71, 3), // "NID"
QT_MOC_LITERAL(7, 75, 25), // "SendCenterof3PointsVector"
QT_MOC_LITERAL(8, 101, 1), // "x"
QT_MOC_LITERAL(9, 103, 1), // "y"
QT_MOC_LITERAL(10, 105, 1), // "z"
QT_MOC_LITERAL(11, 107, 7), // "Refresh"
QT_MOC_LITERAL(12, 115, 18), // "GetDataFromNodeTab"
QT_MOC_LITERAL(13, 134, 6), // "create"
QT_MOC_LITERAL(14, 141, 26), // "GetVolumeRefinementFromGUI"
QT_MOC_LITERAL(15, 168, 16), // "VOLUMEREFINEMENT"
QT_MOC_LITERAL(16, 185, 10), // "Refinement"
QT_MOC_LITERAL(17, 196, 14), // "SetEnvironment"
QT_MOC_LITERAL(18, 211, 14), // "OPENFOAMSOLVER"
QT_MOC_LITERAL(19, 226, 11), // "ParaViewSet"
QT_MOC_LITERAL(20, 238, 9), // "TetgenSet"
QT_MOC_LITERAL(21, 248, 10), // "background"
QT_MOC_LITERAL(22, 259, 9), // "textcolor"
QT_MOC_LITERAL(23, 269, 9), // "MeshColor"
QT_MOC_LITERAL(24, 279, 9), // "NodeColor"
QT_MOC_LITERAL(25, 289, 16), // "FeatureEdgeColor"
QT_MOC_LITERAL(26, 306, 9), // "AxisColor"
QT_MOC_LITERAL(27, 316, 8), // "NodeSize"
QT_MOC_LITERAL(28, 325, 8), // "EdgeSize"
QT_MOC_LITERAL(29, 334, 13), // "MeshLineWidth"
QT_MOC_LITERAL(30, 348, 10), // "LightModel"
QT_MOC_LITERAL(31, 359, 17), // "CoordSystemLength"
QT_MOC_LITERAL(32, 377, 21), // "GetPartRefinementData"
QT_MOC_LITERAL(33, 399, 13), // "NumberofLayer"
QT_MOC_LITERAL(34, 413, 13), // "MinRefinement"
QT_MOC_LITERAL(35, 427, 13), // "MaxRefinement"
QT_MOC_LITERAL(36, 441, 12), // "QList<float>"
QT_MOC_LITERAL(37, 454, 8), // "distance"
QT_MOC_LITERAL(38, 463, 11), // "QList<uint>"
QT_MOC_LITERAL(39, 475, 6), // "Levels"
QT_MOC_LITERAL(40, 482, 26), // "FeatureEdgeRefinementLevel"
QT_MOC_LITERAL(41, 509, 22), // "SetPartLayerRefinement"
QT_MOC_LITERAL(42, 532, 11), // "_edgeratios"
QT_MOC_LITERAL(43, 544, 19), // "GetSnappyHexMeshSet"
QT_MOC_LITERAL(44, 564, 15), // "CastellatedMesh"
QT_MOC_LITERAL(45, 580, 4), // "Snap"
QT_MOC_LITERAL(46, 585, 10), // "AddLayers_"
QT_MOC_LITERAL(47, 596, 13), // "MaxLocalCells"
QT_MOC_LITERAL(48, 610, 14), // "MaxGlobalCells"
QT_MOC_LITERAL(49, 625, 18), // "MinRefinementCells"
QT_MOC_LITERAL(50, 644, 18), // "NCellsBetweenCells"
QT_MOC_LITERAL(51, 663, 19), // "ResolveFeatureAngle"
QT_MOC_LITERAL(52, 683, 12), // "nSmoothPatch"
QT_MOC_LITERAL(53, 696, 9), // "Tolerance"
QT_MOC_LITERAL(54, 706, 11), // "nSolverIter"
QT_MOC_LITERAL(55, 718, 10), // "nRelaxIter"
QT_MOC_LITERAL(56, 729, 17), // "nFeatureSnapIter_"
QT_MOC_LITERAL(57, 747, 15), // "ImplicitFeature"
QT_MOC_LITERAL(58, 763, 12), // "RelativeSize"
QT_MOC_LITERAL(59, 776, 14), // "ExpansionRatio"
QT_MOC_LITERAL(60, 791, 19), // "FinalLayerThickness"
QT_MOC_LITERAL(61, 811, 12), // "minThickness"
QT_MOC_LITERAL(62, 824, 12), // "FeatureAngle"
QT_MOC_LITERAL(63, 837, 11), // "MaxNonOrtho"
QT_MOC_LITERAL(64, 849, 19), // "MaxBoundarySkewness"
QT_MOC_LITERAL(65, 869, 19), // "MaxInternalSkewness"
QT_MOC_LITERAL(66, 889, 14), // "MinDeterminant"
QT_MOC_LITERAL(67, 904, 13), // "MinFaceWeight"
QT_MOC_LITERAL(68, 918, 11), // "MinVolRatio"
QT_MOC_LITERAL(69, 930, 13), // "gaprefinement"
QT_MOC_LITERAL(70, 944, 21), // "DisplayLocationInMesh"
QT_MOC_LITERAL(71, 966, 12), // "SetClipPlane"
QT_MOC_LITERAL(72, 979, 5), // "plane"
QT_MOC_LITERAL(73, 985, 5), // "value"
QT_MOC_LITERAL(74, 991, 8) // "XSection"

    },
    "OpenglWidget\0SendSelectedPartID\0\0PID\0"
    "SendHidePartID\0SendSelectedNodeID\0NID\0"
    "SendCenterof3PointsVector\0x\0y\0z\0Refresh\0"
    "GetDataFromNodeTab\0create\0"
    "GetVolumeRefinementFromGUI\0VOLUMEREFINEMENT\0"
    "Refinement\0SetEnvironment\0OPENFOAMSOLVER\0"
    "ParaViewSet\0TetgenSet\0background\0"
    "textcolor\0MeshColor\0NodeColor\0"
    "FeatureEdgeColor\0AxisColor\0NodeSize\0"
    "EdgeSize\0MeshLineWidth\0LightModel\0"
    "CoordSystemLength\0GetPartRefinementData\0"
    "NumberofLayer\0MinRefinement\0MaxRefinement\0"
    "QList<float>\0distance\0QList<uint>\0"
    "Levels\0FeatureEdgeRefinementLevel\0"
    "SetPartLayerRefinement\0_edgeratios\0"
    "GetSnappyHexMeshSet\0CastellatedMesh\0"
    "Snap\0AddLayers_\0MaxLocalCells\0"
    "MaxGlobalCells\0MinRefinementCells\0"
    "NCellsBetweenCells\0ResolveFeatureAngle\0"
    "nSmoothPatch\0Tolerance\0nSolverIter\0"
    "nRelaxIter\0nFeatureSnapIter_\0"
    "ImplicitFeature\0RelativeSize\0"
    "ExpansionRatio\0FinalLayerThickness\0"
    "minThickness\0FeatureAngle\0MaxNonOrtho\0"
    "MaxBoundarySkewness\0MaxInternalSkewness\0"
    "MinDeterminant\0MinFaceWeight\0MinVolRatio\0"
    "gaprefinement\0DisplayLocationInMesh\0"
    "SetClipPlane\0plane\0value\0XSection"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OpenglWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   79,    2, 0x06 /* Public */,
       4,    1,   82,    2, 0x06 /* Public */,
       5,    1,   85,    2, 0x06 /* Public */,
       7,    3,   88,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      11,    0,   95,    2, 0x08 /* Private */,
      12,    5,   96,    2, 0x08 /* Private */,
      14,    2,  107,    2, 0x08 /* Private */,
      17,   14,  112,    2, 0x08 /* Private */,
      32,    7,  141,    2, 0x08 /* Private */,
      41,    2,  156,    2, 0x08 /* Private */,
      43,   26,  161,    2, 0x08 /* Private */,
      70,    3,  214,    2, 0x08 /* Private */,
      71,    3,  221,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::UInt,    3,
    QMetaType::Void, QMetaType::UInt,    3,
    QMetaType::Void, QMetaType::UInt,    6,
    QMetaType::Void, QMetaType::Float, QMetaType::Float, QMetaType::Float,    8,    9,   10,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::UInt, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Bool,    6,    8,    9,   10,   13,
    QMetaType::Void, 0x80000000 | 15, QMetaType::Char,   16,   13,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QColor, QMetaType::QColor, QMetaType::QColor, QMetaType::QColor, QMetaType::QColor, QMetaType::QColor, QMetaType::Short, QMetaType::Short, QMetaType::Short, QMetaType::Char, QMetaType::Float,   18,   19,   20,   21,   22,   23,   24,   25,   26,   27,   28,   29,   30,   31,
    QMetaType::Void, QMetaType::UInt, QMetaType::UInt, QMetaType::UInt, QMetaType::UInt, 0x80000000 | 36, 0x80000000 | 38, QMetaType::UInt,    3,   33,   34,   35,   37,   39,   40,
    QMetaType::Void, QMetaType::UInt, 0x80000000 | 36,    3,   42,
    QMetaType::Void, QMetaType::Bool, QMetaType::Bool, QMetaType::Bool, QMetaType::UInt, QMetaType::UInt, QMetaType::UInt, QMetaType::UInt, QMetaType::Float, QMetaType::UInt, QMetaType::Float, QMetaType::UInt, QMetaType::UInt, QMetaType::UInt, QMetaType::Bool, QMetaType::Bool, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::UInt, QMetaType::UInt, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Int,   44,   45,   46,   47,   48,   49,   50,   51,   52,   53,   54,   55,   56,   57,   58,   59,   60,   61,   62,   63,   64,   65,   66,   67,   68,   69,
    QMetaType::Void, QMetaType::Float, QMetaType::Float, QMetaType::Float,    8,    9,   10,
    QMetaType::Void, QMetaType::QString, QMetaType::Float, QMetaType::Bool,   72,   73,   74,

       0        // eod
};

void OpenglWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        OpenglWidget *_t = static_cast<OpenglWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->SendSelectedPartID((*reinterpret_cast< const uint(*)>(_a[1]))); break;
        case 1: _t->SendHidePartID((*reinterpret_cast< const uint(*)>(_a[1]))); break;
        case 2: _t->SendSelectedNodeID((*reinterpret_cast< const uint(*)>(_a[1]))); break;
        case 3: _t->SendCenterof3PointsVector((*reinterpret_cast< const float(*)>(_a[1])),(*reinterpret_cast< const float(*)>(_a[2])),(*reinterpret_cast< const float(*)>(_a[3]))); break;
        case 4: _t->Refresh(); break;
        case 5: _t->GetDataFromNodeTab((*reinterpret_cast< const uint(*)>(_a[1])),(*reinterpret_cast< const float(*)>(_a[2])),(*reinterpret_cast< const float(*)>(_a[3])),(*reinterpret_cast< const float(*)>(_a[4])),(*reinterpret_cast< bool(*)>(_a[5]))); break;
        case 6: _t->GetVolumeRefinementFromGUI((*reinterpret_cast< const VOLUMEREFINEMENT(*)>(_a[1])),(*reinterpret_cast< const char(*)>(_a[2]))); break;
        case 7: _t->SetEnvironment((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QColor(*)>(_a[4])),(*reinterpret_cast< const QColor(*)>(_a[5])),(*reinterpret_cast< const QColor(*)>(_a[6])),(*reinterpret_cast< const QColor(*)>(_a[7])),(*reinterpret_cast< const QColor(*)>(_a[8])),(*reinterpret_cast< const QColor(*)>(_a[9])),(*reinterpret_cast< const short(*)>(_a[10])),(*reinterpret_cast< const short(*)>(_a[11])),(*reinterpret_cast< const short(*)>(_a[12])),(*reinterpret_cast< const char(*)>(_a[13])),(*reinterpret_cast< const float(*)>(_a[14]))); break;
        case 8: _t->GetPartRefinementData((*reinterpret_cast< const uint(*)>(_a[1])),(*reinterpret_cast< const uint(*)>(_a[2])),(*reinterpret_cast< const uint(*)>(_a[3])),(*reinterpret_cast< const uint(*)>(_a[4])),(*reinterpret_cast< const QList<float>(*)>(_a[5])),(*reinterpret_cast< const QList<uint>(*)>(_a[6])),(*reinterpret_cast< const uint(*)>(_a[7]))); break;
        case 9: _t->SetPartLayerRefinement((*reinterpret_cast< const uint(*)>(_a[1])),(*reinterpret_cast< const QList<float>(*)>(_a[2]))); break;
        case 10: _t->GetSnappyHexMeshSet((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])),(*reinterpret_cast< const uint(*)>(_a[4])),(*reinterpret_cast< const uint(*)>(_a[5])),(*reinterpret_cast< const uint(*)>(_a[6])),(*reinterpret_cast< const uint(*)>(_a[7])),(*reinterpret_cast< const float(*)>(_a[8])),(*reinterpret_cast< const uint(*)>(_a[9])),(*reinterpret_cast< const float(*)>(_a[10])),(*reinterpret_cast< const uint(*)>(_a[11])),(*reinterpret_cast< const uint(*)>(_a[12])),(*reinterpret_cast< const uint(*)>(_a[13])),(*reinterpret_cast< bool(*)>(_a[14])),(*reinterpret_cast< bool(*)>(_a[15])),(*reinterpret_cast< const float(*)>(_a[16])),(*reinterpret_cast< const float(*)>(_a[17])),(*reinterpret_cast< const float(*)>(_a[18])),(*reinterpret_cast< const float(*)>(_a[19])),(*reinterpret_cast< const float(*)>(_a[20])),(*reinterpret_cast< const uint(*)>(_a[21])),(*reinterpret_cast< const uint(*)>(_a[22])),(*reinterpret_cast< const float(*)>(_a[23])),(*reinterpret_cast< const float(*)>(_a[24])),(*reinterpret_cast< const float(*)>(_a[25])),(*reinterpret_cast< const int(*)>(_a[26]))); break;
        case 11: _t->DisplayLocationInMesh((*reinterpret_cast< const float(*)>(_a[1])),(*reinterpret_cast< const float(*)>(_a[2])),(*reinterpret_cast< const float(*)>(_a[3]))); break;
        case 12: _t->SetClipPlane((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const float(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 4:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<float> >(); break;
            case 5:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<uint> >(); break;
            }
            break;
        case 9:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<float> >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (OpenglWidget::*_t)(const unsigned int & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&OpenglWidget::SendSelectedPartID)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (OpenglWidget::*_t)(const unsigned int & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&OpenglWidget::SendHidePartID)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (OpenglWidget::*_t)(const unsigned int & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&OpenglWidget::SendSelectedNodeID)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (OpenglWidget::*_t)(const float & , const float & , const float & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&OpenglWidget::SendCenterof3PointsVector)) {
                *result = 3;
                return;
            }
        }
    }
}

const QMetaObject OpenglWidget::staticMetaObject = {
    { &QGLWidget::staticMetaObject, qt_meta_stringdata_OpenglWidget.data,
      qt_meta_data_OpenglWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *OpenglWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OpenglWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_OpenglWidget.stringdata0))
        return static_cast<void*>(const_cast< OpenglWidget*>(this));
    if (!strcmp(_clname, "Camera"))
        return static_cast< Camera*>(const_cast< OpenglWidget*>(this));
    if (!strcmp(_clname, "ASSEMBLY"))
        return static_cast< ASSEMBLY*>(const_cast< OpenglWidget*>(this));
    return QGLWidget::qt_metacast(_clname);
}

int OpenglWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGLWidget::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void OpenglWidget::SendSelectedPartID(const unsigned int & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void OpenglWidget::SendHidePartID(const unsigned int & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void OpenglWidget::SendSelectedNodeID(const unsigned int & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void OpenglWidget::SendCenterof3PointsVector(const float & _t1, const float & _t2, const float & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_END_MOC_NAMESPACE
