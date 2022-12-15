/****************************************************************************
** Meta object code from reading C++ file 'widget_2.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../hellman2/widget_2.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'widget_2.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_widget_2_t {
    QByteArrayData data[18];
    char stringdata0[219];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_widget_2_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_widget_2_t qt_meta_stringdata_widget_2 = {
    {
QT_MOC_LITERAL(0, 0, 8), // "widget_2"
QT_MOC_LITERAL(1, 9, 6), // "send_Y"
QT_MOC_LITERAL(2, 16, 0), // ""
QT_MOC_LITERAL(3, 17, 4), // "data"
QT_MOC_LITERAL(4, 22, 7), // "send_X1"
QT_MOC_LITERAL(5, 30, 17), // "on_get_ng_clicked"
QT_MOC_LITERAL(6, 48, 24), // "on_pushButton_yY_clicked"
QT_MOC_LITERAL(7, 73, 17), // "on_Send_Y_clicked"
QT_MOC_LITERAL(8, 91, 18), // "on_send_X1_clicked"
QT_MOC_LITERAL(9, 110, 16), // "on_get_X_clicked"
QT_MOC_LITERAL(10, 127, 18), // "on_calc_X1_clicked"
QT_MOC_LITERAL(11, 146, 17), // "on_get_Z1_clicked"
QT_MOC_LITERAL(12, 164, 17), // "on_calc_K_clicked"
QT_MOC_LITERAL(13, 182, 7), // "check_k"
QT_MOC_LITERAL(14, 190, 6), // "n_sent"
QT_MOC_LITERAL(15, 197, 6), // "g_sent"
QT_MOC_LITERAL(16, 204, 6), // "X_sent"
QT_MOC_LITERAL(17, 211, 7) // "Z1_sent"

    },
    "widget_2\0send_Y\0\0data\0send_X1\0"
    "on_get_ng_clicked\0on_pushButton_yY_clicked\0"
    "on_Send_Y_clicked\0on_send_X1_clicked\0"
    "on_get_X_clicked\0on_calc_X1_clicked\0"
    "on_get_Z1_clicked\0on_calc_K_clicked\0"
    "check_k\0n_sent\0g_sent\0X_sent\0Z1_sent"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_widget_2[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   89,    2, 0x06 /* Public */,
       4,    1,   92,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   95,    2, 0x08 /* Private */,
       6,    0,   96,    2, 0x08 /* Private */,
       7,    0,   97,    2, 0x08 /* Private */,
       8,    0,   98,    2, 0x08 /* Private */,
       9,    0,   99,    2, 0x08 /* Private */,
      10,    0,  100,    2, 0x08 /* Private */,
      11,    0,  101,    2, 0x08 /* Private */,
      12,    0,  102,    2, 0x08 /* Private */,
      13,    0,  103,    2, 0x08 /* Private */,
      14,    1,  104,    2, 0x0a /* Public */,
      15,    1,  107,    2, 0x0a /* Public */,
      16,    1,  110,    2, 0x0a /* Public */,
      17,    1,  113,    2, 0x0a /* Public */,

 // signals: parameters
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
    QMetaType::Void,
    QMetaType::Void, QMetaType::QVariant,    3,
    QMetaType::Void, QMetaType::QVariant,    3,
    QMetaType::Void, QMetaType::QVariant,    3,
    QMetaType::Void, QMetaType::QVariant,    3,

       0        // eod
};

void widget_2::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<widget_2 *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->send_Y((*reinterpret_cast< const QVariant(*)>(_a[1]))); break;
        case 1: _t->send_X1((*reinterpret_cast< const QVariant(*)>(_a[1]))); break;
        case 2: _t->on_get_ng_clicked(); break;
        case 3: _t->on_pushButton_yY_clicked(); break;
        case 4: _t->on_Send_Y_clicked(); break;
        case 5: _t->on_send_X1_clicked(); break;
        case 6: _t->on_get_X_clicked(); break;
        case 7: _t->on_calc_X1_clicked(); break;
        case 8: _t->on_get_Z1_clicked(); break;
        case 9: _t->on_calc_K_clicked(); break;
        case 10: _t->check_k(); break;
        case 11: _t->n_sent((*reinterpret_cast< const QVariant(*)>(_a[1]))); break;
        case 12: _t->g_sent((*reinterpret_cast< const QVariant(*)>(_a[1]))); break;
        case 13: _t->X_sent((*reinterpret_cast< const QVariant(*)>(_a[1]))); break;
        case 14: _t->Z1_sent((*reinterpret_cast< const QVariant(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (widget_2::*)(const QVariant & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&widget_2::send_Y)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (widget_2::*)(const QVariant & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&widget_2::send_X1)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject widget_2::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_widget_2.data,
    qt_meta_data_widget_2,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *widget_2::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *widget_2::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_widget_2.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int widget_2::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void widget_2::send_Y(const QVariant & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void widget_2::send_X1(const QVariant & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
