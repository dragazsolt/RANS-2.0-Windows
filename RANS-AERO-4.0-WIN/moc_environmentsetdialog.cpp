/****************************************************************************
** Meta object code from reading C++ file 'environmentsetdialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../RANS-2.0-Source/environmentsetdialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'environmentsetdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_EnvironmentSetDialog_t {
    QByteArrayData data[28];
    char stringdata0[544];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_EnvironmentSetDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_EnvironmentSetDialog_t qt_meta_stringdata_EnvironmentSetDialog = {
    {
QT_MOC_LITERAL(0, 0, 20), // "EnvironmentSetDialog"
QT_MOC_LITERAL(1, 21, 13), // "SendEntitySet"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 14), // "OPENFOAMSOLVER"
QT_MOC_LITERAL(4, 51, 11), // "ParaViewSet"
QT_MOC_LITERAL(5, 63, 12), // "tetgensolver"
QT_MOC_LITERAL(6, 76, 10), // "background"
QT_MOC_LITERAL(7, 87, 9), // "textcolor"
QT_MOC_LITERAL(8, 97, 9), // "MeshColor"
QT_MOC_LITERAL(9, 107, 9), // "NodeColor"
QT_MOC_LITERAL(10, 117, 16), // "FeatureEdgeColor"
QT_MOC_LITERAL(11, 134, 9), // "AxisColor"
QT_MOC_LITERAL(12, 144, 8), // "NodeSize"
QT_MOC_LITERAL(13, 153, 8), // "EdgeSize"
QT_MOC_LITERAL(14, 162, 13), // "MeshLineWidth"
QT_MOC_LITERAL(15, 176, 14), // "Lighting_Model"
QT_MOC_LITERAL(16, 191, 17), // "CoordSystemLength"
QT_MOC_LITERAL(17, 209, 34), // "on_Save_Environment_Button_cl..."
QT_MOC_LITERAL(18, 244, 31), // "on_OpenfoamSolverButton_clicked"
QT_MOC_LITERAL(19, 276, 28), // "on_ParaviewDirectory_clicked"
QT_MOC_LITERAL(20, 305, 32), // "on_BackGroundColorButton_clicked"
QT_MOC_LITERAL(21, 338, 26), // "on_TextColorButton_clicked"
QT_MOC_LITERAL(22, 365, 26), // "on_MeshColorButton_clicked"
QT_MOC_LITERAL(23, 392, 26), // "on_NodeColorButton_clicked"
QT_MOC_LITERAL(24, 419, 26), // "on_AxisColorButton_clicked"
QT_MOC_LITERAL(25, 446, 33), // "on_FeatureEdgeColorButton_cli..."
QT_MOC_LITERAL(26, 480, 35), // "on_Close_Environment_Button_c..."
QT_MOC_LITERAL(27, 516, 27) // "on_Tetgen_SelectBut_clicked"

    },
    "EnvironmentSetDialog\0SendEntitySet\0\0"
    "OPENFOAMSOLVER\0ParaViewSet\0tetgensolver\0"
    "background\0textcolor\0MeshColor\0NodeColor\0"
    "FeatureEdgeColor\0AxisColor\0NodeSize\0"
    "EdgeSize\0MeshLineWidth\0Lighting_Model\0"
    "CoordSystemLength\0on_Save_Environment_Button_clicked\0"
    "on_OpenfoamSolverButton_clicked\0"
    "on_ParaviewDirectory_clicked\0"
    "on_BackGroundColorButton_clicked\0"
    "on_TextColorButton_clicked\0"
    "on_MeshColorButton_clicked\0"
    "on_NodeColorButton_clicked\0"
    "on_AxisColorButton_clicked\0"
    "on_FeatureEdgeColorButton_clicked\0"
    "on_Close_Environment_Button_clicked\0"
    "on_Tetgen_SelectBut_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_EnvironmentSetDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,   14,   74,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      17,    0,  103,    2, 0x08 /* Private */,
      18,    0,  104,    2, 0x08 /* Private */,
      19,    0,  105,    2, 0x08 /* Private */,
      20,    0,  106,    2, 0x08 /* Private */,
      21,    0,  107,    2, 0x08 /* Private */,
      22,    0,  108,    2, 0x08 /* Private */,
      23,    0,  109,    2, 0x08 /* Private */,
      24,    0,  110,    2, 0x08 /* Private */,
      25,    0,  111,    2, 0x08 /* Private */,
      26,    0,  112,    2, 0x08 /* Private */,
      27,    0,  113,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QColor, QMetaType::QColor, QMetaType::QColor, QMetaType::QColor, QMetaType::QColor, QMetaType::QColor, QMetaType::Short, QMetaType::Short, QMetaType::Short, QMetaType::Char, QMetaType::Float,    3,    4,    5,    6,    7,    8,    9,   10,   11,   12,   13,   14,   15,   16,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void EnvironmentSetDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        EnvironmentSetDialog *_t = static_cast<EnvironmentSetDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->SendEntitySet((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QColor(*)>(_a[4])),(*reinterpret_cast< const QColor(*)>(_a[5])),(*reinterpret_cast< const QColor(*)>(_a[6])),(*reinterpret_cast< const QColor(*)>(_a[7])),(*reinterpret_cast< const QColor(*)>(_a[8])),(*reinterpret_cast< const QColor(*)>(_a[9])),(*reinterpret_cast< const short(*)>(_a[10])),(*reinterpret_cast< const short(*)>(_a[11])),(*reinterpret_cast< const short(*)>(_a[12])),(*reinterpret_cast< const char(*)>(_a[13])),(*reinterpret_cast< const float(*)>(_a[14]))); break;
        case 1: _t->on_Save_Environment_Button_clicked(); break;
        case 2: _t->on_OpenfoamSolverButton_clicked(); break;
        case 3: _t->on_ParaviewDirectory_clicked(); break;
        case 4: _t->on_BackGroundColorButton_clicked(); break;
        case 5: _t->on_TextColorButton_clicked(); break;
        case 6: _t->on_MeshColorButton_clicked(); break;
        case 7: _t->on_NodeColorButton_clicked(); break;
        case 8: _t->on_AxisColorButton_clicked(); break;
        case 9: _t->on_FeatureEdgeColorButton_clicked(); break;
        case 10: _t->on_Close_Environment_Button_clicked(); break;
        case 11: _t->on_Tetgen_SelectBut_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (EnvironmentSetDialog::*_t)(const QString & , const QString & , const QString & , const QColor & , const QColor & , const QColor & , const QColor & , const QColor & , const QColor & , const short & , const short & , const short & , const char , const float & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&EnvironmentSetDialog::SendEntitySet)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject EnvironmentSetDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_EnvironmentSetDialog.data,
      qt_meta_data_EnvironmentSetDialog,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *EnvironmentSetDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *EnvironmentSetDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_EnvironmentSetDialog.stringdata0))
        return static_cast<void*>(const_cast< EnvironmentSetDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int EnvironmentSetDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void EnvironmentSetDialog::SendEntitySet(const QString & _t1, const QString & _t2, const QString & _t3, const QColor & _t4, const QColor & _t5, const QColor & _t6, const QColor & _t7, const QColor & _t8, const QColor & _t9, const short & _t10, const short & _t11, const short & _t12, const char _t13, const float & _t14)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)), const_cast<void*>(reinterpret_cast<const void*>(&_t6)), const_cast<void*>(reinterpret_cast<const void*>(&_t7)), const_cast<void*>(reinterpret_cast<const void*>(&_t8)), const_cast<void*>(reinterpret_cast<const void*>(&_t9)), const_cast<void*>(reinterpret_cast<const void*>(&_t10)), const_cast<void*>(reinterpret_cast<const void*>(&_t11)), const_cast<void*>(reinterpret_cast<const void*>(&_t12)), const_cast<void*>(reinterpret_cast<const void*>(&_t13)), const_cast<void*>(reinterpret_cast<const void*>(&_t14)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
