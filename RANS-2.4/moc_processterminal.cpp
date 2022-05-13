/****************************************************************************
** Meta object code from reading C++ file 'processterminal.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../RANS-2.0-Source/processterminal.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'processterminal.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ProcessTerminal_t {
    QByteArrayData data[20];
    char stringdata0[203];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ProcessTerminal_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ProcessTerminal_t qt_meta_stringdata_ProcessTerminal = {
    {
QT_MOC_LITERAL(0, 0, 15), // "ProcessTerminal"
QT_MOC_LITERAL(1, 16, 16), // "SendResidualData"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 13), // "QList<double>"
QT_MOC_LITERAL(4, 48, 2), // "Ux"
QT_MOC_LITERAL(5, 51, 2), // "Uy"
QT_MOC_LITERAL(6, 54, 2), // "Uz"
QT_MOC_LITERAL(7, 57, 8), // "pressure"
QT_MOC_LITERAL(8, 66, 1), // "k"
QT_MOC_LITERAL(9, 68, 7), // "epsilon"
QT_MOC_LITERAL(10, 76, 5), // "omega"
QT_MOC_LITERAL(11, 82, 13), // "SendDragCoeff"
QT_MOC_LITERAL(12, 96, 4), // "Drag"
QT_MOC_LITERAL(13, 101, 13), // "SendLiftCoeff"
QT_MOC_LITERAL(14, 115, 4), // "Lift"
QT_MOC_LITERAL(15, 120, 12), // "SendYawCoeff"
QT_MOC_LITERAL(16, 133, 3), // "Yaw"
QT_MOC_LITERAL(17, 137, 10), // "ReloadFile"
QT_MOC_LITERAL(18, 148, 24), // "on_Close_Process_clicked"
QT_MOC_LITERAL(19, 173, 29) // "on_KillProcess_Button_clicked"

    },
    "ProcessTerminal\0SendResidualData\0\0"
    "QList<double>\0Ux\0Uy\0Uz\0pressure\0k\0"
    "epsilon\0omega\0SendDragCoeff\0Drag\0"
    "SendLiftCoeff\0Lift\0SendYawCoeff\0Yaw\0"
    "ReloadFile\0on_Close_Process_clicked\0"
    "on_KillProcess_Button_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ProcessTerminal[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    7,   49,    2, 0x06 /* Public */,
      11,    1,   64,    2, 0x06 /* Public */,
      13,    1,   67,    2, 0x06 /* Public */,
      15,    1,   70,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      17,    0,   73,    2, 0x08 /* Private */,
      18,    0,   74,    2, 0x08 /* Private */,
      19,    0,   75,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 3, 0x80000000 | 3, 0x80000000 | 3, 0x80000000 | 3, 0x80000000 | 3, 0x80000000 | 3,    4,    5,    6,    7,    8,    9,   10,
    QMetaType::Void, 0x80000000 | 3,   12,
    QMetaType::Void, 0x80000000 | 3,   14,
    QMetaType::Void, 0x80000000 | 3,   16,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void ProcessTerminal::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ProcessTerminal *_t = static_cast<ProcessTerminal *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->SendResidualData((*reinterpret_cast< const QList<double>(*)>(_a[1])),(*reinterpret_cast< const QList<double>(*)>(_a[2])),(*reinterpret_cast< const QList<double>(*)>(_a[3])),(*reinterpret_cast< const QList<double>(*)>(_a[4])),(*reinterpret_cast< const QList<double>(*)>(_a[5])),(*reinterpret_cast< const QList<double>(*)>(_a[6])),(*reinterpret_cast< const QList<double>(*)>(_a[7]))); break;
        case 1: _t->SendDragCoeff((*reinterpret_cast< const QList<double>(*)>(_a[1]))); break;
        case 2: _t->SendLiftCoeff((*reinterpret_cast< const QList<double>(*)>(_a[1]))); break;
        case 3: _t->SendYawCoeff((*reinterpret_cast< const QList<double>(*)>(_a[1]))); break;
        case 4: _t->ReloadFile(); break;
        case 5: _t->on_Close_Process_clicked(); break;
        case 6: _t->on_KillProcess_Button_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
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
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
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
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ProcessTerminal::*_t)(const QList<double> & , const QList<double> & , const QList<double> & , const QList<double> & , const QList<double> & , const QList<double> & , const QList<double> & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ProcessTerminal::SendResidualData)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (ProcessTerminal::*_t)(const QList<double> & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ProcessTerminal::SendDragCoeff)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (ProcessTerminal::*_t)(const QList<double> & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ProcessTerminal::SendLiftCoeff)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (ProcessTerminal::*_t)(const QList<double> & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ProcessTerminal::SendYawCoeff)) {
                *result = 3;
                return;
            }
        }
    }
}

const QMetaObject ProcessTerminal::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_ProcessTerminal.data,
      qt_meta_data_ProcessTerminal,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ProcessTerminal::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ProcessTerminal::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ProcessTerminal.stringdata0))
        return static_cast<void*>(const_cast< ProcessTerminal*>(this));
    return QDialog::qt_metacast(_clname);
}

int ProcessTerminal::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void ProcessTerminal::SendResidualData(const QList<double> & _t1, const QList<double> & _t2, const QList<double> & _t3, const QList<double> & _t4, const QList<double> & _t5, const QList<double> & _t6, const QList<double> & _t7)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)), const_cast<void*>(reinterpret_cast<const void*>(&_t6)), const_cast<void*>(reinterpret_cast<const void*>(&_t7)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ProcessTerminal::SendDragCoeff(const QList<double> & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void ProcessTerminal::SendLiftCoeff(const QList<double> & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void ProcessTerminal::SendYawCoeff(const QList<double> & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_END_MOC_NAMESPACE
