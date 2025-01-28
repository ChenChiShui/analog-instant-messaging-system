/****************************************************************************
** Meta object code from reading C++ file 'regist.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../regist.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'regist.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_registCCS_t {
    QByteArrayData data[13];
    char stringdata0[243];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_registCCS_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_registCCS_t qt_meta_stringdata_registCCS = {
    {
QT_MOC_LITERAL(0, 0, 9), // "registCCS"
QT_MOC_LITERAL(1, 10, 15), // "mousePressEvent"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 12), // "QMouseEvent*"
QT_MOC_LITERAL(4, 40, 5), // "event"
QT_MOC_LITERAL(5, 46, 14), // "mouseMoveEvent"
QT_MOC_LITERAL(6, 61, 17), // "mouseReleaseEvent"
QT_MOC_LITERAL(7, 79, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(8, 101, 27), // "on_lineEdit_editingFinished"
QT_MOC_LITERAL(9, 129, 29), // "on_lineEdit_4_editingFinished"
QT_MOC_LITERAL(10, 159, 29), // "on_lineEdit_2_editingFinished"
QT_MOC_LITERAL(11, 189, 29), // "on_lineEdit_3_editingFinished"
QT_MOC_LITERAL(12, 219, 23) // "on_pushButton_2_clicked"

    },
    "registCCS\0mousePressEvent\0\0QMouseEvent*\0"
    "event\0mouseMoveEvent\0mouseReleaseEvent\0"
    "on_pushButton_clicked\0on_lineEdit_editingFinished\0"
    "on_lineEdit_4_editingFinished\0"
    "on_lineEdit_2_editingFinished\0"
    "on_lineEdit_3_editingFinished\0"
    "on_pushButton_2_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_registCCS[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   59,    2, 0x08 /* Private */,
       5,    1,   62,    2, 0x08 /* Private */,
       6,    1,   65,    2, 0x08 /* Private */,
       7,    0,   68,    2, 0x08 /* Private */,
       8,    0,   69,    2, 0x08 /* Private */,
       9,    0,   70,    2, 0x08 /* Private */,
      10,    0,   71,    2, 0x08 /* Private */,
      11,    0,   72,    2, 0x08 /* Private */,
      12,    0,   73,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void registCCS::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<registCCS *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->mousePressEvent((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 1: _t->mouseMoveEvent((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 2: _t->mouseReleaseEvent((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 3: _t->on_pushButton_clicked(); break;
        case 4: _t->on_lineEdit_editingFinished(); break;
        case 5: _t->on_lineEdit_4_editingFinished(); break;
        case 6: _t->on_lineEdit_2_editingFinished(); break;
        case 7: _t->on_lineEdit_3_editingFinished(); break;
        case 8: _t->on_pushButton_2_clicked(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject registCCS::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_registCCS.data,
    qt_meta_data_registCCS,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *registCCS::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *registCCS::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_registCCS.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int registCCS::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
