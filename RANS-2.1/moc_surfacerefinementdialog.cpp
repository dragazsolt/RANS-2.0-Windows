/****************************************************************************
** Meta object code from reading C++ file 'surfacerefinementdialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../RANS-32bit-May/surfacerefinementdialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'surfacerefinementdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_SurfaceRefinementDialog_t {
    QByteArrayData data[17];
    char stringdata0[304];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SurfaceRefinementDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SurfaceRefinementDialog_t qt_meta_stringdata_SurfaceRefinementDialog = {
    {
QT_MOC_LITERAL(0, 0, 23), // "SurfaceRefinementDialog"
QT_MOC_LITERAL(1, 24, 25), // "SendSurfaceRefinementData"
QT_MOC_LITERAL(2, 50, 0), // ""
QT_MOC_LITERAL(3, 51, 3), // "PID"
QT_MOC_LITERAL(4, 55, 13), // "NumberofLayer"
QT_MOC_LITERAL(5, 69, 13), // "MinRefinement"
QT_MOC_LITERAL(6, 83, 13), // "MaxRefinement"
QT_MOC_LITERAL(7, 97, 12), // "QList<float>"
QT_MOC_LITERAL(8, 110, 8), // "distance"
QT_MOC_LITERAL(9, 119, 11), // "QList<uint>"
QT_MOC_LITERAL(10, 131, 6), // "Levels"
QT_MOC_LITERAL(11, 138, 19), // "FeatureEdgeRefLevel"
QT_MOC_LITERAL(12, 158, 22), // "SendPartTreeRefinement"
QT_MOC_LITERAL(13, 181, 34), // "on_Close_SurfaceRefinement_cl..."
QT_MOC_LITERAL(14, 216, 33), // "on_Save_SurfaceRefinement_cli..."
QT_MOC_LITERAL(15, 250, 26), // "on_InsertRowButton_clicked"
QT_MOC_LITERAL(16, 277, 26) // "on_RemoveRowButton_clicked"

    },
    "SurfaceRefinementDialog\0"
    "SendSurfaceRefinementData\0\0PID\0"
    "NumberofLayer\0MinRefinement\0MaxRefinement\0"
    "QList<float>\0distance\0QList<uint>\0"
    "Levels\0FeatureEdgeRefLevel\0"
    "SendPartTreeRefinement\0"
    "on_Close_SurfaceRefinement_clicked\0"
    "on_Save_SurfaceRefinement_clicked\0"
    "on_InsertRowButton_clicked\0"
    "on_RemoveRowButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SurfaceRefinementDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    7,   44,    2, 0x06 /* Public */,
      12,    4,   59,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      13,    0,   68,    2, 0x08 /* Private */,
      14,    0,   69,    2, 0x08 /* Private */,
      15,    0,   70,    2, 0x08 /* Private */,
      16,    0,   71,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::UInt, QMetaType::UInt, QMetaType::UInt, QMetaType::UInt, 0x80000000 | 7, 0x80000000 | 9, QMetaType::UInt,    3,    4,    5,    6,    8,   10,   11,
    QMetaType::Void, QMetaType::UInt, QMetaType::UInt, QMetaType::UInt, QMetaType::UInt,    3,    4,    5,    6,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void SurfaceRefinementDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        SurfaceRefinementDialog *_t = static_cast<SurfaceRefinementDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->SendSurfaceRefinementData((*reinterpret_cast< const uint(*)>(_a[1])),(*reinterpret_cast< const uint(*)>(_a[2])),(*reinterpret_cast< const uint(*)>(_a[3])),(*reinterpret_cast< const uint(*)>(_a[4])),(*reinterpret_cast< const QList<float>(*)>(_a[5])),(*reinterpret_cast< const QList<uint>(*)>(_a[6])),(*reinterpret_cast< const uint(*)>(_a[7]))); break;
        case 1: _t->SendPartTreeRefinement((*reinterpret_cast< const uint(*)>(_a[1])),(*reinterpret_cast< const uint(*)>(_a[2])),(*reinterpret_cast< const uint(*)>(_a[3])),(*reinterpret_cast< const uint(*)>(_a[4]))); break;
        case 2: _t->on_Close_SurfaceRefinement_clicked(); break;
        case 3: _t->on_Save_SurfaceRefinement_clicked(); break;
        case 4: _t->on_InsertRowButton_clicked(); break;
        case 5: _t->on_RemoveRowButton_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 4:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<float> >(); break;
            case 5:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<uint> >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (SurfaceRefinementDialog::*_t)(const unsigned int & , const unsigned int & , const unsigned int & , const unsigned int & , const QList<float> , const QList<unsigned int> , const unsigned int & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SurfaceRefinementDialog::SendSurfaceRefinementData)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (SurfaceRefinementDialog::*_t)(const unsigned int & , const unsigned int & , const unsigned int & , const unsigned int & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SurfaceRefinementDialog::SendPartTreeRefinement)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject SurfaceRefinementDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_SurfaceRefinementDialog.data,
      qt_meta_data_SurfaceRefinementDialog,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *SurfaceRefinementDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SurfaceRefinementDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_SurfaceRefinementDialog.stringdata0))
        return static_cast<void*>(const_cast< SurfaceRefinementDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int SurfaceRefinementDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void SurfaceRefinementDialog::SendSurfaceRefinementData(const unsigned int & _t1, const unsigned int & _t2, const unsigned int & _t3, const unsigned int & _t4, const QList<float> _t5, const QList<unsigned int> _t6, const unsigned int & _t7)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)), const_cast<void*>(reinterpret_cast<const void*>(&_t6)), const_cast<void*>(reinterpret_cast<const void*>(&_t7)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void SurfaceRefinementDialog::SendPartTreeRefinement(const unsigned int & _t1, const unsigned int & _t2, const unsigned int & _t3, const unsigned int & _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
