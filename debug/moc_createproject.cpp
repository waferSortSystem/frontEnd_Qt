/****************************************************************************
** Meta object code from reading C++ file 'createproject.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.3.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../createproject.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'createproject.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.3.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_CreateProject_t {
    const uint offsetsAndSize[28];
    char stringdata0[364];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_CreateProject_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_CreateProject_t qt_meta_stringdata_CreateProject = {
    {
QT_MOC_LITERAL(0, 13), // "CreateProject"
QT_MOC_LITERAL(14, 22), // "closeCreateProjectPage"
QT_MOC_LITERAL(37, 0), // ""
QT_MOC_LITERAL(38, 34), // "on_pushButton_folderRetrun_cl..."
QT_MOC_LITERAL(73, 33), // "on_pushButton_microReturn_cli..."
QT_MOC_LITERAL(107, 34), // "on_pushButton_micreoCreate_cl..."
QT_MOC_LITERAL(142, 34), // "on_pushButton_folderCreate_cl..."
QT_MOC_LITERAL(177, 41), // "on_pushButton_folderProcessRe..."
QT_MOC_LITERAL(219, 40), // "on_pushButton_microProcessRet..."
QT_MOC_LITERAL(260, 30), // "on_pushButton_microPic_clicked"
QT_MOC_LITERAL(291, 31), // "on_pushButton_folderPic_clicked"
QT_MOC_LITERAL(323, 21), // "mouseDoubleClickEvent"
QT_MOC_LITERAL(345, 12), // "QMouseEvent*"
QT_MOC_LITERAL(358, 5) // "event"

    },
    "CreateProject\0closeCreateProjectPage\0"
    "\0on_pushButton_folderRetrun_clicked\0"
    "on_pushButton_microReturn_clicked\0"
    "on_pushButton_micreoCreate_clicked\0"
    "on_pushButton_folderCreate_clicked\0"
    "on_pushButton_folderProcessReturn_clicked\0"
    "on_pushButton_microProcessReturn_clicked\0"
    "on_pushButton_microPic_clicked\0"
    "on_pushButton_folderPic_clicked\0"
    "mouseDoubleClickEvent\0QMouseEvent*\0"
    "event"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CreateProject[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   74,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       3,    0,   75,    2, 0x08,    2 /* Private */,
       4,    0,   76,    2, 0x08,    3 /* Private */,
       5,    0,   77,    2, 0x08,    4 /* Private */,
       6,    0,   78,    2, 0x08,    5 /* Private */,
       7,    0,   79,    2, 0x08,    6 /* Private */,
       8,    0,   80,    2, 0x08,    7 /* Private */,
       9,    0,   81,    2, 0x08,    8 /* Private */,
      10,    0,   82,    2, 0x08,    9 /* Private */,
      11,    1,   83,    2, 0x0a,   10 /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 12,   13,

       0        // eod
};

void CreateProject::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CreateProject *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->closeCreateProjectPage(); break;
        case 1: _t->on_pushButton_folderRetrun_clicked(); break;
        case 2: _t->on_pushButton_microReturn_clicked(); break;
        case 3: _t->on_pushButton_micreoCreate_clicked(); break;
        case 4: _t->on_pushButton_folderCreate_clicked(); break;
        case 5: _t->on_pushButton_folderProcessReturn_clicked(); break;
        case 6: _t->on_pushButton_microProcessReturn_clicked(); break;
        case 7: _t->on_pushButton_microPic_clicked(); break;
        case 8: _t->on_pushButton_folderPic_clicked(); break;
        case 9: _t->mouseDoubleClickEvent((*reinterpret_cast< std::add_pointer_t<QMouseEvent*>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (CreateProject::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CreateProject::closeCreateProjectPage)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject CreateProject::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_CreateProject.offsetsAndSize,
    qt_meta_data_CreateProject,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_CreateProject_t
, QtPrivate::TypeAndForceComplete<CreateProject, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QMouseEvent *, std::false_type>


>,
    nullptr
} };


const QMetaObject *CreateProject::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CreateProject::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CreateProject.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int CreateProject::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void CreateProject::closeCreateProjectPage()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
