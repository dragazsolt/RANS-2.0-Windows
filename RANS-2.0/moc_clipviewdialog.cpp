/****************************************************************************
** Meta object code from reading C++ file 'clipviewdialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../RANS-32bit/clipviewdialog.h"
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
    QByteArrayData data[11];
    char stringdata0[194];
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
QT_MOC_LITERAL(5, 52, 32), // "on_ClipStep_SpinBox_valueChanged"
QT_MOC_LITERAL(6, 85, 4), // "arg1"
QT_MOC_LITERAL(7, 90, 34), // "on_SliceValueSlider_sliderRel..."
QT_MOC_LITERAL(8, 125, 29), // "on_CloseClipPlane_GUI_clicked"
QT_MOC_LITERAL(9, 155, 32), // "on_SliceValueSlider_valueChanged"
QT_MOC_LITERAL(10, 188, 5) // "value"

    },
    "ClipViewDialog\0SendClipPlaneSignal\0\0"
    "plane\0clipvalue\0on_ClipStep_SpinBox_valueChanged\0"
    "arg1\0on_SliceValueSlider_sliderReleased\0"
    "on_CloseClipPlane_GUI_clicked\0"
    "on_SliceValueSlider_valueChanged\0value"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ClipViewDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   39,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   44,    2, 0x08 /* Private */,
       7,    0,   47,    2, 0x08 /* Private */,
       8,    0,   48,    2, 0x08 /* Private */,
       9,    1,   49,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::Float,    3,    4,

 // slots: parameters
    QMetaType::Void, QMetaType::Double,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   10,

       0        // eod
};

void ClipViewDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ClipViewDialog *_t = static_cast<ClipViewDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->SendClipPlaneSignal((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const float(*)>(_a[2]))); break;
        case 1: _t->on_ClipStep_SpinBox_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 2: _t->on_SliceValueSlider_sliderReleased(); break;
        case 3: _t->on_CloseClipPlane_GUI_clicked(); break;
        case 4: _t->on_SliceValueSlider_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ClipViewDialog::*_t)(const QString & , const float & );
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
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void ClipViewDialog::SendClipPlaneSignal(const QString & _t1, const float & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
