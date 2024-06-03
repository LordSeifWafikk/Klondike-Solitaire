/****************************************************************************
** Meta object code from reading C++ file 'tableau_w.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../tableau_w.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tableau_w.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSTableau_WENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSTableau_WENDCLASS = QtMocHelpers::stringData(
    "Tableau_W",
    "show_top",
    "",
    "clip",
    "size_t",
    "index",
    "unclip",
    "check_clipboard",
    "QDragEnterEvent*&",
    "event",
    "flip_top",
    "Card",
    "card"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSTableau_WENDCLASS_t {
    uint offsetsAndSizes[26];
    char stringdata0[10];
    char stringdata1[9];
    char stringdata2[1];
    char stringdata3[5];
    char stringdata4[7];
    char stringdata5[6];
    char stringdata6[7];
    char stringdata7[16];
    char stringdata8[18];
    char stringdata9[6];
    char stringdata10[9];
    char stringdata11[5];
    char stringdata12[5];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSTableau_WENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSTableau_WENDCLASS_t qt_meta_stringdata_CLASSTableau_WENDCLASS = {
    {
        QT_MOC_LITERAL(0, 9),  // "Tableau_W"
        QT_MOC_LITERAL(10, 8),  // "show_top"
        QT_MOC_LITERAL(19, 0),  // ""
        QT_MOC_LITERAL(20, 4),  // "clip"
        QT_MOC_LITERAL(25, 6),  // "size_t"
        QT_MOC_LITERAL(32, 5),  // "index"
        QT_MOC_LITERAL(38, 6),  // "unclip"
        QT_MOC_LITERAL(45, 15),  // "check_clipboard"
        QT_MOC_LITERAL(61, 17),  // "QDragEnterEvent*&"
        QT_MOC_LITERAL(79, 5),  // "event"
        QT_MOC_LITERAL(85, 8),  // "flip_top"
        QT_MOC_LITERAL(94, 4),  // "Card"
        QT_MOC_LITERAL(99, 4)   // "card"
    },
    "Tableau_W",
    "show_top",
    "",
    "clip",
    "size_t",
    "index",
    "unclip",
    "check_clipboard",
    "QDragEnterEvent*&",
    "event",
    "flip_top",
    "Card",
    "card"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSTableau_WENDCLASS[] = {

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
       3,    1,   45,    2, 0x06,    2 /* Public */,
       6,    0,   48,    2, 0x06,    4 /* Public */,
       7,    1,   49,    2, 0x06,    5 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      10,    1,   52,    2, 0x0a,    7 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8,    9,

 // slots: parameters
    QMetaType::Bool, 0x80000000 | 11,   12,

       0        // eod
};

Q_CONSTINIT const QMetaObject Tableau_W::staticMetaObject = { {
    QMetaObject::SuperData::link<QFrame::staticMetaObject>(),
    qt_meta_stringdata_CLASSTableau_WENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSTableau_WENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSTableau_WENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<Tableau_W, std::true_type>,
        // method 'show_top'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'clip'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<size_t, std::false_type>,
        // method 'unclip'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'check_clipboard'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QDragEnterEvent * &, std::false_type>,
        // method 'flip_top'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<Card, std::false_type>
    >,
    nullptr
} };

void Tableau_W::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Tableau_W *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->show_top(); break;
        case 1: _t->clip((*reinterpret_cast< std::add_pointer_t<size_t>>(_a[1]))); break;
        case 2: _t->unclip(); break;
        case 3: _t->check_clipboard((*reinterpret_cast< std::add_pointer_t<QDragEnterEvent*&>>(_a[1]))); break;
        case 4: { bool _r = _t->flip_top((*reinterpret_cast< std::add_pointer_t<Card>>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Tableau_W::*)();
            if (_t _q_method = &Tableau_W::show_top; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Tableau_W::*)(size_t );
            if (_t _q_method = &Tableau_W::clip; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Tableau_W::*)();
            if (_t _q_method = &Tableau_W::unclip; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (Tableau_W::*)(QDragEnterEvent * & );
            if (_t _q_method = &Tableau_W::check_clipboard; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
    }
}

const QMetaObject *Tableau_W::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Tableau_W::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSTableau_WENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QFrame::qt_metacast(_clname);
}

int Tableau_W::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
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
void Tableau_W::show_top()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Tableau_W::clip(size_t _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Tableau_W::unclip()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void Tableau_W::check_clipboard(QDragEnterEvent * & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
