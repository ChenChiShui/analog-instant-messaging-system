/****************************************************************************
** Meta object code from reading C++ file 'listwidget2.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../listwidget2.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'listwidget2.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_listwidget2_t {
    QByteArrayData data[9];
    char stringdata0[104];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_listwidget2_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_listwidget2_t qt_meta_stringdata_listwidget2 = {
    {
QT_MOC_LITERAL(0, 0, 11), // "listwidget2"
QT_MOC_LITERAL(1, 12, 9), // "actionone"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 9), // "actiontwo"
QT_MOC_LITERAL(4, 33, 16), // "contextMenuEvent"
QT_MOC_LITERAL(5, 50, 18), // "QContextMenuEvent*"
QT_MOC_LITERAL(6, 69, 5), // "event"
QT_MOC_LITERAL(7, 75, 15), // "mousePressEvent"
QT_MOC_LITERAL(8, 91, 12) // "QMouseEvent*"

    },
    "listwidget2\0actionone\0\0actiontwo\0"
    "contextMenuEvent\0QContextMenuEvent*\0"
    "event\0mousePressEvent\0QMouseEvent*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_listwidget2[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x0a /* Public */,
       3,    0,   35,    2, 0x0a /* Public */,
       4,    1,   36,    2, 0x08 /* Private */,
       7,    1,   39,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 8,    6,

       0        // eod
};

void listwidget2::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<listwidget2 *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->actionone(); break;
        case 1: _t->actiontwo(); break;
        case 2: _t->contextMenuEvent((*reinterpret_cast< QContextMenuEvent*(*)>(_a[1]))); break;
        case 3: _t->mousePressEvent((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject listwidget2::staticMetaObject = { {
    QMetaObject::SuperData::link<QListWidget::staticMetaObject>(),
    qt_meta_stringdata_listwidget2.data,
    qt_meta_data_listwidget2,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *listwidget2::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *listwidget2::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_listwidget2.stringdata0))
        return static_cast<void*>(this);
    return QListWidget::qt_metacast(_clname);
}

int listwidget2::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QListWidget::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
