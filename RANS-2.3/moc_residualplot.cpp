/****************************************************************************
** Meta object code from reading C++ file 'residualplot.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../RANS-2.0-Source/residualplot.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'residualplot.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ResidualPlot_t {
    QByteArrayData data[19];
    char stringdata0[178];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ResidualPlot_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ResidualPlot_t qt_meta_stringdata_ResidualPlot = {
    {
QT_MOC_LITERAL(0, 0, 12), // "ResidualPlot"
QT_MOC_LITERAL(1, 13, 25), // "SendActualIterationNumber"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 12), // "PlotResidual"
QT_MOC_LITERAL(4, 53, 13), // "QList<double>"
QT_MOC_LITERAL(5, 67, 2), // "Ux"
QT_MOC_LITERAL(6, 70, 2), // "Uy"
QT_MOC_LITERAL(7, 73, 2), // "Uz"
QT_MOC_LITERAL(8, 76, 8), // "pressure"
QT_MOC_LITERAL(9, 85, 1), // "k"
QT_MOC_LITERAL(10, 87, 7), // "epsilon"
QT_MOC_LITERAL(11, 95, 5), // "omega"
QT_MOC_LITERAL(12, 101, 9), // "DragCoeff"
QT_MOC_LITERAL(13, 111, 4), // "Drag"
QT_MOC_LITERAL(14, 116, 9), // "LiftCoeff"
QT_MOC_LITERAL(15, 126, 4), // "Lift"
QT_MOC_LITERAL(16, 131, 14), // "YawMomentCoeff"
QT_MOC_LITERAL(17, 146, 3), // "Yaw"
QT_MOC_LITERAL(18, 150, 27) // "on_QuitResidualPlot_clicked"

    },
    "ResidualPlot\0SendActualIterationNumber\0"
    "\0PlotResidual\0QList<double>\0Ux\0Uy\0Uz\0"
    "pressure\0k\0epsilon\0omega\0DragCoeff\0"
    "Drag\0LiftCoeff\0Lift\0YawMomentCoeff\0"
    "Yaw\0on_QuitResidualPlot_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ResidualPlot[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    7,   47,    2, 0x08 /* Private */,
      12,    1,   62,    2, 0x08 /* Private */,
      14,    1,   65,    2, 0x08 /* Private */,
      16,    1,   68,    2, 0x08 /* Private */,
      18,    0,   71,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::UInt,    2,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 4, 0x80000000 | 4, 0x80000000 | 4, 0x80000000 | 4, 0x80000000 | 4, 0x80000000 | 4, 0x80000000 | 4,    5,    6,    7,    8,    9,   10,   11,
    QMetaType::Void, 0x80000000 | 4,   13,
    QMetaType::Void, 0x80000000 | 4,   15,
    QMetaType::Void, 0x80000000 | 4,   17,
    QMetaType::Void,

       0        // eod
};

void ResidualPlot::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ResidualPlot *_t = static_cast<ResidualPlot *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->SendActualIterationNumber((*reinterpret_cast< const uint(*)>(_a[1]))); break;
        case 1: _t->PlotResidual((*reinterpret_cast< const QList<double>(*)>(_a[1])),(*reinterpret_cast< const QList<double>(*)>(_a[2])),(*reinterpret_cast< const QList<double>(*)>(_a[3])),(*reinterpret_cast< const QList<double>(*)>(_a[4])),(*reinterpret_cast< const QList<double>(*)>(_a[5])),(*reinterpret_cast< const QList<double>(*)>(_a[6])),(*reinterpret_cast< const QList<double>(*)>(_a[7]))); break;
        case 2: _t->DragCoeff((*reinterpret_cast< const QList<double>(*)>(_a[1]))); break;
        case 3: _t->LiftCoeff((*reinterpret_cast< const QList<double>(*)>(_a[1]))); break;
        case 4: _t->YawMomentCoeff((*reinterpret_cast< const QList<double>(*)>(_a[1]))); break;
        case 5: _t->on_QuitResidualPlot_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 6:
            case 5:
            case 4:
            case 3:
            case 2:
            case 1:
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<double> >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<double> >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<double> >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<double> >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ResidualPlot::*_t)(const unsigned int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ResidualPlot::SendActualIterationNumber)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject ResidualPlot::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_ResidualPlot.data,
      qt_meta_data_ResidualPlot,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ResidualPlot::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ResidualPlot::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ResidualPlot.stringdata0))
        return static_cast<void*>(const_cast< ResidualPlot*>(this));
    return QDialog::qt_metacast(_clname);
}

int ResidualPlot::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void ResidualPlot::SendActualIterationNumber(const unsigned int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
