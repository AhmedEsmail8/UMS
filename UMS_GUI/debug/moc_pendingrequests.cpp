/****************************************************************************
** Meta object code from reading C++ file 'pendingrequests.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.3.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../pendingrequests.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pendingrequests.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.3.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PendingRequests_t {
    const uint offsetsAndSize[22];
    char stringdata0[228];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_PendingRequests_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_PendingRequests_t qt_meta_stringdata_PendingRequests = {
    {
QT_MOC_LITERAL(0, 15), // "PendingRequests"
QT_MOC_LITERAL(16, 10), // "add_course"
QT_MOC_LITERAL(27, 0), // ""
QT_MOC_LITERAL(28, 24), // "on_pushButton_40_clicked"
QT_MOC_LITERAL(53, 24), // "on_pushButton_39_clicked"
QT_MOC_LITERAL(78, 24), // "on_pushButton_45_clicked"
QT_MOC_LITERAL(103, 24), // "on_pushButton_41_clicked"
QT_MOC_LITERAL(128, 24), // "on_pushButton_43_clicked"
QT_MOC_LITERAL(153, 24), // "on_pushButton_42_clicked"
QT_MOC_LITERAL(178, 24), // "on_pushButton_47_clicked"
QT_MOC_LITERAL(203, 24) // "on_pushButton_44_clicked"

    },
    "PendingRequests\0add_course\0\0"
    "on_pushButton_40_clicked\0"
    "on_pushButton_39_clicked\0"
    "on_pushButton_45_clicked\0"
    "on_pushButton_41_clicked\0"
    "on_pushButton_43_clicked\0"
    "on_pushButton_42_clicked\0"
    "on_pushButton_47_clicked\0"
    "on_pushButton_44_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PendingRequests[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   68,    2, 0x0a,    1 /* Public */,
       3,    0,   69,    2, 0x08,    2 /* Private */,
       4,    0,   70,    2, 0x08,    3 /* Private */,
       5,    0,   71,    2, 0x08,    4 /* Private */,
       6,    0,   72,    2, 0x08,    5 /* Private */,
       7,    0,   73,    2, 0x08,    6 /* Private */,
       8,    0,   74,    2, 0x08,    7 /* Private */,
       9,    0,   75,    2, 0x08,    8 /* Private */,
      10,    0,   76,    2, 0x08,    9 /* Private */,

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

       0        // eod
};

void PendingRequests::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PendingRequests *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->add_course(); break;
        case 1: _t->on_pushButton_40_clicked(); break;
        case 2: _t->on_pushButton_39_clicked(); break;
        case 3: _t->on_pushButton_45_clicked(); break;
        case 4: _t->on_pushButton_41_clicked(); break;
        case 5: _t->on_pushButton_43_clicked(); break;
        case 6: _t->on_pushButton_42_clicked(); break;
        case 7: _t->on_pushButton_47_clicked(); break;
        case 8: _t->on_pushButton_44_clicked(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject PendingRequests::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_PendingRequests.offsetsAndSize,
    qt_meta_data_PendingRequests,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_PendingRequests_t
, QtPrivate::TypeAndForceComplete<PendingRequests, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *PendingRequests::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PendingRequests::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PendingRequests.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int PendingRequests::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 9;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
