/****************************************************************************
** Meta object code from reading C++ file 'refinementgui.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../RANS-32bit-May/refinementgui.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'refinementgui.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_RefinementGUI_t {
    QByteArrayData data[9];
    char stringdata0[173];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_RefinementGUI_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_RefinementGUI_t qt_meta_stringdata_RefinementGUI = {
    {
QT_MOC_LITERAL(0, 0, 13), // "RefinementGUI"
QT_MOC_LITERAL(1, 14, 21), // "SendVolRefinementData"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 16), // "VOLUMEREFINEMENT"
QT_MOC_LITERAL(4, 54, 15), // "RefinementInput"
QT_MOC_LITERAL(5, 70, 6), // "create"
QT_MOC_LITERAL(6, 77, 29), // "on_ShowRefinementZone_clicked"
QT_MOC_LITERAL(7, 107, 33), // "on_RefinementCreateButton_cli..."
QT_MOC_LITERAL(8, 141, 31) // "on_RefinementQuitButton_clicked"

    },
    "RefinementGUI\0SendVolRefinementData\0"
    "\0VOLUMEREFINEMENT\0RefinementInput\0"
    "create\0on_ShowRefinementZone_clicked\0"
    "on_RefinementCreateButton_clicked\0"
    "on_RefinementQuitButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_RefinementGUI[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   34,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,   39,    2, 0x08 /* Private */,
       7,    0,   40,    2, 0x08 /* Private */,
       8,    0,   41,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::Char,    4,    5,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void RefinementGUI::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        RefinementGUI *_t = static_cast<RefinementGUI *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->SendVolRefinementData((*reinterpret_cast< const VOLUMEREFINEMENT(*)>(_a[1])),(*reinterpret_cast< const char(*)>(_a[2]))); break;
        case 1: _t->on_ShowRefinementZone_clicked(); break;
        case 2: _t->on_RefinementCreateButton_clicked(); break;
        case 3: _t->on_RefinementQuitButton_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (RefinementGUI::*_t)(const VOLUMEREFINEMENT & , const char & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&RefinementGUI::SendVolRefinementData)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject RefinementGUI::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_RefinementGUI.data,
      qt_meta_data_RefinementGUI,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *RefinementGUI::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RefinementGUI::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_RefinementGUI.stringdata0))
        return static_cast<void*>(const_cast< RefinementGUI*>(this));
    return QDialog::qt_metacast(_clname);
}

int RefinementGUI::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void RefinementGUI::SendVolRefinementData(const VOLUMEREFINEMENT & _t1, const char & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
