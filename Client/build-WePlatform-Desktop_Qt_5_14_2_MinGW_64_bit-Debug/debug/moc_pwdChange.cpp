/****************************************************************************
** Meta object code from reading C++ file 'pwdChange.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../WePlatform/pwdChange.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pwdChange.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_pwdChangeCCS_t {
    QByteArrayData data[11];
    char stringdata0[192];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_pwdChangeCCS_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_pwdChangeCCS_t qt_meta_stringdata_pwdChangeCCS = {
    {
QT_MOC_LITERAL(0, 0, 12), // "pwdChangeCCS"
QT_MOC_LITERAL(1, 13, 15), // "mousePressEvent"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 12), // "QMouseEvent*"
QT_MOC_LITERAL(4, 43, 5), // "event"
QT_MOC_LITERAL(5, 49, 14), // "mouseMoveEvent"
QT_MOC_LITERAL(6, 64, 17), // "mouseReleaseEvent"
QT_MOC_LITERAL(7, 82, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(8, 104, 27), // "on_lineEdit_editingFinished"
QT_MOC_LITERAL(9, 132, 29), // "on_lineEdit_2_editingFinished"
QT_MOC_LITERAL(10, 162, 29) // "on_lineEdit_3_editingFinished"

    },
    "pwdChangeCCS\0mousePressEvent\0\0"
    "QMouseEvent*\0event\0mouseMoveEvent\0"
    "mouseReleaseEvent\0on_pushButton_clicked\0"
    "on_lineEdit_editingFinished\0"
    "on_lineEdit_2_editingFinished\0"
    "on_lineEdit_3_editingFinished"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_pwdChangeCCS[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x08 /* Private */,
       5,    1,   52,    2, 0x08 /* Private */,
       6,    1,   55,    2, 0x08 /* Private */,
       7,    0,   58,    2, 0x08 /* Private */,
       8,    0,   59,    2, 0x08 /* Private */,
       9,    0,   60,    2, 0x08 /* Private */,
      10,    0,   61,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void pwdChangeCCS::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<pwdChangeCCS *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->mousePressEvent((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 1: _t->mouseMoveEvent((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 2: _t->mouseReleaseEvent((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 3: _t->on_pushButton_clicked(); break;
        case 4: _t->on_lineEdit_editingFinished(); break;
        case 5: _t->on_lineEdit_2_editingFinished(); break;
        case 6: _t->on_lineEdit_3_editingFinished(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject pwdChangeCCS::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_pwdChangeCCS.data,
    qt_meta_data_pwdChangeCCS,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *pwdChangeCCS::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *pwdChangeCCS::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_pwdChangeCCS.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int pwdChangeCCS::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
