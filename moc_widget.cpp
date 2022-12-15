/****************************************************************************
** Meta object code from reading C++ file 'widget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../hellman2/widget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'widget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Widget_t {
    QByteArrayData data[18];
    char stringdata0[226];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Widget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Widget_t qt_meta_stringdata_Widget = {
    {
QT_MOC_LITERAL(0, 0, 6), // "Widget"
QT_MOC_LITERAL(1, 7, 6), // "send_n"
QT_MOC_LITERAL(2, 14, 0), // ""
QT_MOC_LITERAL(3, 15, 4), // "data"
QT_MOC_LITERAL(4, 20, 6), // "send_g"
QT_MOC_LITERAL(5, 27, 6), // "send_X"
QT_MOC_LITERAL(6, 34, 7), // "send_Z1"
QT_MOC_LITERAL(7, 42, 25), // "on_pushButton_gen_clicked"
QT_MOC_LITERAL(8, 68, 24), // "on_pushButton_xX_clicked"
QT_MOC_LITERAL(9, 93, 16), // "on_get_Z_clicked"
QT_MOC_LITERAL(10, 110, 17), // "on_get_Y1_clicked"
QT_MOC_LITERAL(11, 128, 18), // "on_calc_Y2_clicked"
QT_MOC_LITERAL(12, 147, 18), // "on_calc_Z1_clicked"
QT_MOC_LITERAL(13, 166, 18), // "on_send_Z1_clicked"
QT_MOC_LITERAL(14, 185, 17), // "on_send_X_clicked"
QT_MOC_LITERAL(15, 203, 6), // "Z_sent"
QT_MOC_LITERAL(16, 210, 7), // "Y1_sent"
QT_MOC_LITERAL(17, 218, 7) // "check_k"

    },
    "Widget\0send_n\0\0data\0send_g\0send_X\0"
    "send_Z1\0on_pushButton_gen_clicked\0"
    "on_pushButton_xX_clicked\0on_get_Z_clicked\0"
    "on_get_Y1_clicked\0on_calc_Y2_clicked\0"
    "on_calc_Z1_clicked\0on_send_Z1_clicked\0"
    "on_send_X_clicked\0Z_sent\0Y1_sent\0"
    "check_k"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Widget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   89,    2, 0x06 /* Public */,
       4,    1,   92,    2, 0x06 /* Public */,
       5,    1,   95,    2, 0x06 /* Public */,
       6,    1,   98,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    0,  101,    2, 0x08 /* Private */,
       8,    0,  102,    2, 0x08 /* Private */,
       9,    0,  103,    2, 0x08 /* Private */,
      10,    0,  104,    2, 0x08 /* Private */,
      11,    0,  105,    2, 0x08 /* Private */,
      12,    0,  106,    2, 0x08 /* Private */,
      13,    0,  107,    2, 0x08 /* Private */,
      14,    0,  108,    2, 0x08 /* Private */,
      15,    1,  109,    2, 0x0a /* Public */,
      16,    1,  112,    2, 0x0a /* Public */,
      17,    0,  115,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QVariant,    3,
    QMetaType::Void, QMetaType::QVariant,    3,
    QMetaType::Void, QMetaType::QVariant,    3,
    QMetaType::Void, QMetaType::QVariant,    3,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QVariant,    3,
    QMetaType::Void, QMetaType::QVariant,    3,
    QMetaType::Void,

       0        // eod
};

void Widget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Widget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->send_n((*reinterpret_cast< const QVariant(*)>(_a[1]))); break;
        case 1: _t->send_g((*reinterpret_cast< const QVariant(*)>(_a[1]))); break;
        case 2: _t->send_X((*reinterpret_cast< const QVariant(*)>(_a[1]))); break;
        case 3: _t->send_Z1((*reinterpret_cast< const QVariant(*)>(_a[1]))); break;
        case 4: _t->on_pushButton_gen_clicked(); break;
        case 5: _t->on_pushButton_xX_clicked(); break;
        case 6: _t->on_get_Z_clicked(); break;
        case 7: _t->on_get_Y1_clicked(); break;
        case 8: _t->on_calc_Y2_clicked(); break;
        case 9: _t->on_calc_Z1_clicked(); break;
        case 10: _t->on_send_Z1_clicked(); break;
        case 11: _t->on_send_X_clicked(); break;
        case 12: _t->Z_sent((*reinterpret_cast< const QVariant(*)>(_a[1]))); break;
        case 13: _t->Y1_sent((*reinterpret_cast< const QVariant(*)>(_a[1]))); break;
        case 14: _t->check_k(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Widget::*)(const QVariant & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Widget::send_n)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Widget::*)(const QVariant & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Widget::send_g)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Widget::*)(const QVariant & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Widget::send_X)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (Widget::*)(const QVariant & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Widget::send_Z1)) {
                *result = 3;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Widget::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_Widget.data,
    qt_meta_data_Widget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Widget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Widget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Widget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int Widget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 15;
    }
    return _id;
}

// SIGNAL 0
void Widget::send_n(const QVariant & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Widget::send_g(const QVariant & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Widget::send_X(const QVariant & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Widget::send_Z1(const QVariant & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
