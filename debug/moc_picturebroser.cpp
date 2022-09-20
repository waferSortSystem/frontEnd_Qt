/****************************************************************************
** Meta object code from reading C++ file 'picturebroser.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.3.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../picturebroser.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'picturebroser.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.3.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PictureBroser_t {
    const uint offsetsAndSize[44];
    char stringdata0[386];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_PictureBroser_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_PictureBroser_t qt_meta_stringdata_PictureBroser = {
    {
QT_MOC_LITERAL(0, 13), // "PictureBroser"
QT_MOC_LITERAL(14, 22), // "closePictureBroserPage"
QT_MOC_LITERAL(37, 0), // ""
QT_MOC_LITERAL(38, 10), // "paintEvent"
QT_MOC_LITERAL(49, 12), // "QPaintEvent*"
QT_MOC_LITERAL(62, 5), // "event"
QT_MOC_LITERAL(68, 10), // "wheelEvent"
QT_MOC_LITERAL(79, 12), // "QWheelEvent*"
QT_MOC_LITERAL(92, 7), // "QEvent*"
QT_MOC_LITERAL(100, 21), // "mouseDoubleClickEvent"
QT_MOC_LITERAL(122, 12), // "QMouseEvent*"
QT_MOC_LITERAL(135, 24), // "on_pushButton_Up_clicked"
QT_MOC_LITERAL(160, 26), // "on_pushButton_Down_clicked"
QT_MOC_LITERAL(187, 26), // "on_pushButton_Left_clicked"
QT_MOC_LITERAL(214, 27), // "on_pushButton_Right_clicked"
QT_MOC_LITERAL(242, 28), // "on_pushButton_zoomIn_clicked"
QT_MOC_LITERAL(271, 29), // "on_pushButton_zoomOut_clicked"
QT_MOC_LITERAL(301, 27), // "on_pushButton_Reset_clicked"
QT_MOC_LITERAL(329, 11), // "setStepSize"
QT_MOC_LITERAL(341, 8), // "setRatio"
QT_MOC_LITERAL(350, 6), // "_ratio"
QT_MOC_LITERAL(357, 28) // "on_pushButton_Return_clicked"

    },
    "PictureBroser\0closePictureBroserPage\0"
    "\0paintEvent\0QPaintEvent*\0event\0"
    "wheelEvent\0QWheelEvent*\0QEvent*\0"
    "mouseDoubleClickEvent\0QMouseEvent*\0"
    "on_pushButton_Up_clicked\0"
    "on_pushButton_Down_clicked\0"
    "on_pushButton_Left_clicked\0"
    "on_pushButton_Right_clicked\0"
    "on_pushButton_zoomIn_clicked\0"
    "on_pushButton_zoomOut_clicked\0"
    "on_pushButton_Reset_clicked\0setStepSize\0"
    "setRatio\0_ratio\0on_pushButton_Return_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PictureBroser[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  104,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       3,    1,  105,    2, 0x0a,    2 /* Public */,
       6,    1,  108,    2, 0x0a,    4 /* Public */,
       5,    1,  111,    2, 0x0a,    6 /* Public */,
       9,    1,  114,    2, 0x0a,    8 /* Public */,
      11,    0,  117,    2, 0x0a,   10 /* Public */,
      12,    0,  118,    2, 0x0a,   11 /* Public */,
      13,    0,  119,    2, 0x0a,   12 /* Public */,
      14,    0,  120,    2, 0x0a,   13 /* Public */,
      15,    0,  121,    2, 0x0a,   14 /* Public */,
      16,    0,  122,    2, 0x0a,   15 /* Public */,
      17,    0,  123,    2, 0x0a,   16 /* Public */,
      18,    0,  124,    2, 0x0a,   17 /* Public */,
      19,    1,  125,    2, 0x0a,   18 /* Public */,
      21,    0,  128,    2, 0x08,   20 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 7,    5,
    QMetaType::Bool, 0x80000000 | 8,    5,
    QMetaType::Void, 0x80000000 | 10,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   20,
    QMetaType::Void,

       0        // eod
};

void PictureBroser::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PictureBroser *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->closePictureBroserPage(); break;
        case 1: _t->paintEvent((*reinterpret_cast< std::add_pointer_t<QPaintEvent*>>(_a[1]))); break;
        case 2: _t->wheelEvent((*reinterpret_cast< std::add_pointer_t<QWheelEvent*>>(_a[1]))); break;
        case 3: { bool _r = _t->event((*reinterpret_cast< std::add_pointer_t<QEvent*>>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 4: _t->mouseDoubleClickEvent((*reinterpret_cast< std::add_pointer_t<QMouseEvent*>>(_a[1]))); break;
        case 5: _t->on_pushButton_Up_clicked(); break;
        case 6: _t->on_pushButton_Down_clicked(); break;
        case 7: _t->on_pushButton_Left_clicked(); break;
        case 8: _t->on_pushButton_Right_clicked(); break;
        case 9: _t->on_pushButton_zoomIn_clicked(); break;
        case 10: _t->on_pushButton_zoomOut_clicked(); break;
        case 11: _t->on_pushButton_Reset_clicked(); break;
        case 12: _t->setStepSize(); break;
        case 13: _t->setRatio((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 14: _t->on_pushButton_Return_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (PictureBroser::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PictureBroser::closePictureBroserPage)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject PictureBroser::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_PictureBroser.offsetsAndSize,
    qt_meta_data_PictureBroser,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_PictureBroser_t
, QtPrivate::TypeAndForceComplete<PictureBroser, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QPaintEvent *, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QWheelEvent *, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<QEvent *, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QMouseEvent *, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *PictureBroser::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PictureBroser::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PictureBroser.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int PictureBroser::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 15;
    }
    return _id;
}

// SIGNAL 0
void PictureBroser::closePictureBroserPage()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
