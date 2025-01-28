/****************************************************************************
** Meta object code from reading C++ file 'login.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../login.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'login.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_loginCCS_t {
    QByteArrayData data[16];
    char stringdata0[249];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_loginCCS_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_loginCCS_t qt_meta_stringdata_loginCCS = {
    {
QT_MOC_LITERAL(0, 0, 8), // "loginCCS"
QT_MOC_LITERAL(1, 9, 13), // "PixmapToRound"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 3), // "src"
QT_MOC_LITERAL(4, 28, 6), // "radius"
QT_MOC_LITERAL(5, 35, 15), // "mousePressEvent"
QT_MOC_LITERAL(6, 51, 12), // "QMouseEvent*"
QT_MOC_LITERAL(7, 64, 5), // "event"
QT_MOC_LITERAL(8, 70, 14), // "mouseMoveEvent"
QT_MOC_LITERAL(9, 85, 17), // "mouseReleaseEvent"
QT_MOC_LITERAL(10, 103, 23), // "on_pushButton_3_clicked"
QT_MOC_LITERAL(11, 127, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(12, 149, 23), // "on_pushButton_2_clicked"
QT_MOC_LITERAL(13, 173, 23), // "on_pushButton_4_clicked"
QT_MOC_LITERAL(14, 197, 23), // "on_pushButton_5_clicked"
QT_MOC_LITERAL(15, 221, 27) // "on_lineEdit_editingFinished"

    },
    "loginCCS\0PixmapToRound\0\0src\0radius\0"
    "mousePressEvent\0QMouseEvent*\0event\0"
    "mouseMoveEvent\0mouseReleaseEvent\0"
    "on_pushButton_3_clicked\0on_pushButton_clicked\0"
    "on_pushButton_2_clicked\0on_pushButton_4_clicked\0"
    "on_pushButton_5_clicked\0"
    "on_lineEdit_editingFinished"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_loginCCS[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    2,   64,    2, 0x08 /* Private */,
       5,    1,   69,    2, 0x08 /* Private */,
       8,    1,   72,    2, 0x08 /* Private */,
       9,    1,   75,    2, 0x08 /* Private */,
      10,    0,   78,    2, 0x08 /* Private */,
      11,    0,   79,    2, 0x08 /* Private */,
      12,    0,   80,    2, 0x08 /* Private */,
      13,    0,   81,    2, 0x08 /* Private */,
      14,    0,   82,    2, 0x08 /* Private */,
      15,    0,   83,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::QPixmap, QMetaType::QPixmap, QMetaType::Int,    3,    4,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void loginCCS::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<loginCCS *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { QPixmap _r = _t->PixmapToRound((*reinterpret_cast< const QPixmap(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QPixmap*>(_a[0]) = std::move(_r); }  break;
        case 1: _t->mousePressEvent((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 2: _t->mouseMoveEvent((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 3: _t->mouseReleaseEvent((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 4: _t->on_pushButton_3_clicked(); break;
        case 5: _t->on_pushButton_clicked(); break;
        case 6: _t->on_pushButton_2_clicked(); break;
        case 7: _t->on_pushButton_4_clicked(); break;
        case 8: _t->on_pushButton_5_clicked(); break;
        case 9: _t->on_lineEdit_editingFinished(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject loginCCS::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_loginCCS.data,
    qt_meta_data_loginCCS,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *loginCCS::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *loginCCS::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_loginCCS.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int loginCCS::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
