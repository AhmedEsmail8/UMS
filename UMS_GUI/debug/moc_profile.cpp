/****************************************************************************
** Meta object code from reading C++ file 'profile.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.3.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../profile.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'profile.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.3.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Profile_t {
    const uint offsetsAndSize[20];
    char stringdata0[191];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_Profile_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_Profile_t qt_meta_stringdata_Profile = {
    {
QT_MOC_LITERAL(0, 7), // "Profile"
QT_MOC_LITERAL(8, 24), // "on_pushButton_25_clicked"
QT_MOC_LITERAL(33, 0), // ""
QT_MOC_LITERAL(34, 24), // "on_pushButton_32_clicked"
QT_MOC_LITERAL(59, 24), // "on_pushButton_26_clicked"
QT_MOC_LITERAL(84, 15), // "on_Edit_clicked"
QT_MOC_LITERAL(100, 15), // "on_Done_clicked"
QT_MOC_LITERAL(116, 24), // "on_pushButton_29_clicked"
QT_MOC_LITERAL(141, 24), // "on_pushButton_30_clicked"
QT_MOC_LITERAL(166, 24) // "on_pushButton_28_clicked"

    },
    "Profile\0on_pushButton_25_clicked\0\0"
    "on_pushButton_32_clicked\0"
    "on_pushButton_26_clicked\0on_Edit_clicked\0"
    "on_Done_clicked\0on_pushButton_29_clicked\0"
    "on_pushButton_30_clicked\0"
    "on_pushButton_28_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Profile[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   62,    2, 0x08,    1 /* Private */,
       3,    0,   63,    2, 0x08,    2 /* Private */,
       4,    0,   64,    2, 0x08,    3 /* Private */,
       5,    0,   65,    2, 0x08,    4 /* Private */,
       6,    0,   66,    2, 0x08,    5 /* Private */,
       7,    0,   67,    2, 0x08,    6 /* Private */,
       8,    0,   68,    2, 0x08,    7 /* Private */,
       9,    0,   69,    2, 0x08,    8 /* Private */,

 // slots: parameters
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

void Profile::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Profile *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_pushButton_25_clicked(); break;
        case 1: _t->on_pushButton_32_clicked(); break;
        case 2: _t->on_pushButton_26_clicked(); break;
        case 3: _t->on_Edit_clicked(); break;
        case 4: _t->on_Done_clicked(); break;
        case 5: _t->on_pushButton_29_clicked(); break;
        case 6: _t->on_pushButton_30_clicked(); break;
        case 7: _t->on_pushButton_28_clicked(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject Profile::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_Profile.offsetsAndSize,
    qt_meta_data_Profile,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_Profile_t
, QtPrivate::TypeAndForceComplete<Profile, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *Profile::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Profile::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Profile.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int Profile::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
