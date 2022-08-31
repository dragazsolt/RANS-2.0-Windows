/****************************************************************************
** Meta object code from reading C++ file 'clipviewdialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../RANS-2.0-Source/clipviewdialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'clipviewdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ClipViewDialog_t {
    QByteArrayData data[14];
    char stringdata0[256];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ClipViewDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ClipViewDialog_t qt_meta_stringdata_ClipViewDialog = {
    {
QT_MOC_LITERAL(0, 0, 14), // "ClipViewDialog"
QT_MOC_LITERAL(1, 15, 19), // "SendClipPlaneSignal"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 5), // "plane"
QT_MOC_LITERAL(4, 42, 9), // "clipvalue"
QT_MOC_LITERAL(5, 52, 8), // "XSection"
QT_MOC_LITERAL(6, 61, 32), // "on_ClipStep_SpinBox_valueChanged"
QT_MOC_LITERAL(7, 94, 4), // "arg1"
QT_MOC_LITERAL(8, 99, 34), // "on_SliceValueSlider_sliderRel..."
QT_MOC_LITERAL(9, 134, 29), // "on_CloseClipPlane_GUI_clicked"
QT_MOC_LITERAL(10, 164, 32), // "on_SliceValueSlider_valueChanged"
QT_MOC_LITERAL(11, 197, 5), // "value"
QT_MOC_LITERAL(12, 203, 22), // "on_PosBox_valueChanged"
QT_MOC_LITERAL(13, 226, 29) // "on_XSection_cbox_stateChanged"

    },
    "ClipViewDialog\0SendClipPlaneSignal\0\0"
    "plane\0clipvalue\0XSection\0"
    "on_ClipStep_SpinBox_valueChanged\0arg1\0"
    "on_SliceValueSlider_sliderReleased\0"
    "on_CloseClipPlane_GUI_clicked\0"
    "on_SliceValueSlider_valueChanged\0value\0"
    "on_PosBox_valueChanged\0"
    "on_XSection_cbox_stateChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ClipViewDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    3,   49,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    1,   56,    2, 0x08 /* Private */,
       8,    0,   59,    2, 0x08 /* Private */,
       9,    0,   60,    2, 0x08 /* Private */,
      10,    1,   61,    2, 0x08 /* Private */,
      12,    1,   64,    2, 0x08 /* Private */,
      13,    1,   67,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::Float, QMetaType::Bool,    3,    4,    5,

 // slots: parameters
    QMetaType::Void, QMetaType::Double,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void, QMetaType::Double,    7,
    QMetaType::Void, QMetaType::Int,    7,

       0        // eod
};

void ClipViewDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ClipViewDialog *_t = static_cast<ClipViewDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->SendClipPlaneSignal((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const float(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 1: _t->on_ClipStep_SpinBox_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 2: _t->on_SliceValueSlider_sliderReleased(); break;
        case 3: _t->on_CloseClipPlane_GUI_clicked(); break;
        case 4: _t->on_SliceValueSlider_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->on_PosBox_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 6: _t->on_XSection_cbox_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ClipViewDialog::*_t)(const QString & , const float & , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ClipViewDialog::SendClipPlaneSignal)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject ClipViewDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_ClipViewDialog.data,
      qt_meta_data_ClipViewDialog,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ClipViewDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ClipViewDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ClipViewDialog.stringdata0))
        return static_cast<void*>(const_cast< ClipViewDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int ClipViewDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void ClipViewDialog::SendClipPlaneSignal(const QString & _t1, const float & _t2, bool _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
