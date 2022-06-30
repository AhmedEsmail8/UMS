/****************************************************************************
** Meta object code from reading C++ file 'student_data.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.3.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../student_data.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'student_data.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.3.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Student_Data_t {
    const uint offsetsAndSize[34];
    char stringdata0[346];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_Student_Data_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_Student_Data_t qt_meta_stringdata_Student_Data = {
    {
QT_MOC_LITERAL(0, 12), // "Student_Data"
QT_MOC_LITERAL(13, 20), // "on_addCourse_clicked"
QT_MOC_LITERAL(34, 0), // ""
QT_MOC_LITERAL(35, 24), // "on_pushButton_39_clicked"
QT_MOC_LITERAL(60, 24), // "on_pushButton_45_clicked"
QT_MOC_LITERAL(85, 24), // "on_pushButton_40_clicked"
QT_MOC_LITERAL(110, 24), // "on_pushButton_41_clicked"
QT_MOC_LITERAL(135, 24), // "on_pushButton_42_clicked"
QT_MOC_LITERAL(160, 24), // "on_pushButton_44_clicked"
QT_MOC_LITERAL(185, 24), // "on_pushButton_47_clicked"
QT_MOC_LITERAL(210, 24), // "on_pushButton_46_clicked"
QT_MOC_LITERAL(235, 15), // "on_Show_clicked"
QT_MOC_LITERAL(251, 15), // "on_Edit_clicked"
QT_MOC_LITERAL(267, 15), // "on_Done_clicked"
QT_MOC_LITERAL(283, 27), // "on_CurrentCourses_activated"
QT_MOC_LITERAL(311, 5), // "index"
QT_MOC_LITERAL(317, 28) // "on_FinishedCourses_activated"

    },
    "Student_Data\0on_addCourse_clicked\0\0"
    "on_pushButton_39_clicked\0"
    "on_pushButton_45_clicked\0"
    "on_pushButton_40_clicked\0"
    "on_pushButton_41_clicked\0"
    "on_pushButton_42_clicked\0"
    "on_pushButton_44_clicked\0"
    "on_pushButton_47_clicked\0"
    "on_pushButton_46_clicked\0on_Show_clicked\0"
    "on_Edit_clicked\0on_Done_clicked\0"
    "on_CurrentCourses_activated\0index\0"
    "on_FinishedCourses_activated"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Student_Data[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   98,    2, 0x08,    1 /* Private */,
       3,    0,   99,    2, 0x08,    2 /* Private */,
       4,    0,  100,    2, 0x08,    3 /* Private */,
       5,    0,  101,    2, 0x08,    4 /* Private */,
       6,    0,  102,    2, 0x08,    5 /* Private */,
       7,    0,  103,    2, 0x08,    6 /* Private */,
       8,    0,  104,    2, 0x08,    7 /* Private */,
       9,    0,  105,    2, 0x08,    8 /* Private */,
      10,    0,  106,    2, 0x08,    9 /* Private */,
      11,    0,  107,    2, 0x08,   10 /* Private */,
      12,    0,  108,    2, 0x08,   11 /* Private */,
      13,    0,  109,    2, 0x08,   12 /* Private */,
      14,    1,  110,    2, 0x08,   13 /* Private */,
      16,    1,  113,    2, 0x08,   15 /* Private */,

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
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   15,
    QMetaType::Void, QMetaType::Int,   15,

       0        // eod
};

void Student_Data::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Student_Data *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_addCourse_clicked(); break;
        case 1: _t->on_pushButton_39_clicked(); break;
        case 2: _t->on_pushButton_45_clicked(); break;
        case 3: _t->on_pushButton_40_clicked(); break;
        case 4: _t->on_pushButton_41_clicked(); break;
        case 5: _t->on_pushButton_42_clicked(); break;
        case 6: _t->on_pushButton_44_clicked(); break;
        case 7: _t->on_pushButton_47_clicked(); break;
        case 8: _t->on_pushButton_46_clicked(); break;
        case 9: _t->on_Show_clicked(); break;
        case 10: _t->on_Edit_clicked(); break;
        case 11: _t->on_Done_clicked(); break;
        case 12: _t->on_CurrentCourses_activated((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 13: _t->on_FinishedCourses_activated((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject Student_Data::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_Student_Data.offsetsAndSize,
    qt_meta_data_Student_Data,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_Student_Data_t
, QtPrivate::TypeAndForceComplete<Student_Data, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>


>,
    nullptr
} };


const QMetaObject *Student_Data::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Student_Data::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Student_Data.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int Student_Data::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 14;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
