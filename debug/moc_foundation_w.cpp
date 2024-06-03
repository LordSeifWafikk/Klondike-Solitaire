/****************************************************************************
** Meta object code from reading C++ file 'foundation_w.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../foundation_w.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'foundation_w.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.6.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSFoundation_WENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSFoundation_WENDCLASS = QtMocHelpers::stringData(
    "Foundation_W",
    "draged_top",
    "",
    "drag_fail",
    "unclip",
    "check_clipboard",
    "QDragEnterEvent*&",
    "event",
    "draw_card",
    "Card*",
    "card"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSFoundation_WENDCLASS_t {
    uint offsetsAndSizes[22];
    char stringdata0[13];
    char stringdata1[11];
    char stringdata2[1];
    char stringdata3[10];
    char stringdata4[7];
    char stringdata5[16];
    char stringdata6[18];
    char stringdata7[6];
    char stringdata8[10];
    char stringdata9[6];
    char stringdata10[5];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSFoundation_WENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSFoundation_WENDCLASS_t qt_meta_stringdata_CLASSFoundation_WENDCLASS = {
    {
        QT_MOC_LITERAL(0, 12),  // "Foundation_W"
        QT_MOC_LITERAL(13, 10),  // "draged_top"
        QT_MOC_LITERAL(24, 0),  // ""
        QT_MOC_LITERAL(25, 9),  // "drag_fail"
        QT_MOC_LITERAL(35, 6),  // "unclip"
        QT_MOC_LITERAL(42, 15),  // "check_clipboard"
        QT_MOC_LITERAL(58, 17),  // "QDragEnterEvent*&"
        QT_MOC_LITERAL(76, 5),  // "event"
        QT_MOC_LITERAL(82, 9),  // "draw_card"
        QT_MOC_LITERAL(92, 5),  // "Card*"
        QT_MOC_LITERAL(98, 4)   // "card"
    },
    "Foundation_W",
    "draged_top",
    "",
    "drag_fail",
    "unclip",
    "check_clipboard",
    "QDragEnterEvent*&",
    "event",
    "draw_card",
    "Card*",
    "card"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSFoundation_WENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   44,    2, 0x06,    1 /* Public */,
       3,    0,   45,    2, 0x06,    2 /* Public */,
       4,    0,   46,    2, 0x06,    3 /* Public */,
       5,    1,   47,    2, 0x06,    4 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       8,    1,   50,    2, 0x0a,    6 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6,    7,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 9,   10,

       0        // eod
};

Q_CONSTINIT const QMetaObject Foundation_W::staticMetaObject = { {
    QMetaObject::SuperData::link<QLabel::staticMetaObject>(),
    qt_meta_stringdata_CLASSFoundation_WENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSFoundation_WENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSFoundation_WENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<Foundation_W, std::true_type>,
        // method 'draged_top'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'drag_fail'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'unclip'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'check_clipboard'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QDragEnterEvent * &, std::false_type>,
        // method 'draw_card'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<Card *, std::false_type>
    >,
    nullptr
} };

void Foundation_W::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Foundation_W *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->draged_top(); break;
        case 1: _t->drag_fail(); break;
        case 2: _t->unclip(); break;
        case 3: _t->check_clipboard((*reinterpret_cast< std::add_pointer_t<QDragEnterEvent*&>>(_a[1]))); break;
        case 4: _t->draw_card((*reinterpret_cast< std::add_pointer_t<Card*>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Foundation_W::*)();
            if (_t _q_method = &Foundation_W::draged_top; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Foundation_W::*)();
            if (_t _q_method = &Foundation_W::drag_fail; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Foundation_W::*)();
            if (_t _q_method = &Foundation_W::unclip; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (Foundation_W::*)(QDragEnterEvent * & );
            if (_t _q_method = &Foundation_W::check_clipboard; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
    }
}

const QMetaObject *Foundation_W::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Foundation_W::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSFoundation_WENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QLabel::qt_metacast(_clname);
}

int Foundation_W::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QLabel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void Foundation_W::draged_top()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Foundation_W::drag_fail()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void Foundation_W::unclip()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void Foundation_W::check_clipboard(QDragEnterEvent * & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
