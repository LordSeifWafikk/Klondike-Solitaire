/****************************************************************************
** Meta object code from reading C++ file 'tableau.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../tableau.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tableau.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSTableauENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSTableauENDCLASS = QtMocHelpers::stringData(
    "Tableau",
    "flip",
    "",
    "Card",
    "card",
    "send_to_clipboard",
    "CardNode*",
    "val",
    "source",
    "retrieve_clipboard",
    "Tableau*",
    "check_clipboard",
    "QDragEnterEvent*&",
    "show",
    "remove",
    "size_t",
    "index",
    "request_clipboard"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSTableauENDCLASS_t {
    uint offsetsAndSizes[36];
    char stringdata0[8];
    char stringdata1[5];
    char stringdata2[1];
    char stringdata3[5];
    char stringdata4[5];
    char stringdata5[18];
    char stringdata6[10];
    char stringdata7[4];
    char stringdata8[7];
    char stringdata9[19];
    char stringdata10[9];
    char stringdata11[16];
    char stringdata12[18];
    char stringdata13[5];
    char stringdata14[7];
    char stringdata15[7];
    char stringdata16[6];
    char stringdata17[18];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSTableauENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSTableauENDCLASS_t qt_meta_stringdata_CLASSTableauENDCLASS = {
    {
        QT_MOC_LITERAL(0, 7),  // "Tableau"
        QT_MOC_LITERAL(8, 4),  // "flip"
        QT_MOC_LITERAL(13, 0),  // ""
        QT_MOC_LITERAL(14, 4),  // "Card"
        QT_MOC_LITERAL(19, 4),  // "card"
        QT_MOC_LITERAL(24, 17),  // "send_to_clipboard"
        QT_MOC_LITERAL(42, 9),  // "CardNode*"
        QT_MOC_LITERAL(52, 3),  // "val"
        QT_MOC_LITERAL(56, 6),  // "source"
        QT_MOC_LITERAL(63, 18),  // "retrieve_clipboard"
        QT_MOC_LITERAL(82, 8),  // "Tableau*"
        QT_MOC_LITERAL(91, 15),  // "check_clipboard"
        QT_MOC_LITERAL(107, 17),  // "QDragEnterEvent*&"
        QT_MOC_LITERAL(125, 4),  // "show"
        QT_MOC_LITERAL(130, 6),  // "remove"
        QT_MOC_LITERAL(137, 6),  // "size_t"
        QT_MOC_LITERAL(144, 5),  // "index"
        QT_MOC_LITERAL(150, 17)   // "request_clipboard"
    },
    "Tableau",
    "flip",
    "",
    "Card",
    "card",
    "send_to_clipboard",
    "CardNode*",
    "val",
    "source",
    "retrieve_clipboard",
    "Tableau*",
    "check_clipboard",
    "QDragEnterEvent*&",
    "show",
    "remove",
    "size_t",
    "index",
    "request_clipboard"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSTableauENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   62,    2, 0x06,    1 /* Public */,
       5,    2,   65,    2, 0x06,    3 /* Public */,
       9,    1,   70,    2, 0x06,    6 /* Public */,
      11,    2,   73,    2, 0x06,    8 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      13,    0,   78,    2, 0x0a,   11 /* Public */,
      14,    1,   79,    2, 0x0a,   12 /* Public */,
      17,    0,   82,    2, 0x0a,   14 /* Public */,
      17,    1,   83,    2, 0x0a,   15 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6, QMetaType::VoidStar,    7,    8,
    QMetaType::Void, 0x80000000 | 10,    2,
    QMetaType::Void, 0x80000000 | 10, 0x80000000 | 12,    2,    2,

 // slots: parameters
    QMetaType::Bool,
    QMetaType::Bool, 0x80000000 | 15,   16,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 12,    2,

       0        // eod
};

Q_CONSTINIT const QMetaObject Tableau::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSTableauENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSTableauENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSTableauENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<Tableau, std::true_type>,
        // method 'flip'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<Card, std::false_type>,
        // method 'send_to_clipboard'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<CardNode *, std::false_type>,
        QtPrivate::TypeAndForceComplete<void *, std::false_type>,
        // method 'retrieve_clipboard'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<Tableau *, std::false_type>,
        // method 'check_clipboard'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<Tableau *, std::false_type>,
        QtPrivate::TypeAndForceComplete<QDragEnterEvent * &, std::false_type>,
        // method 'show'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'remove'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<size_t, std::false_type>,
        // method 'request_clipboard'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'request_clipboard'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QDragEnterEvent * &, std::false_type>
    >,
    nullptr
} };

void Tableau::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Tableau *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->flip((*reinterpret_cast< std::add_pointer_t<Card>>(_a[1]))); break;
        case 1: _t->send_to_clipboard((*reinterpret_cast< std::add_pointer_t<CardNode*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<void*>>(_a[2]))); break;
        case 2: _t->retrieve_clipboard((*reinterpret_cast< std::add_pointer_t<Tableau*>>(_a[1]))); break;
        case 3: _t->check_clipboard((*reinterpret_cast< std::add_pointer_t<Tableau*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QDragEnterEvent*&>>(_a[2]))); break;
        case 4: { bool _r = _t->show();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 5: { bool _r = _t->remove((*reinterpret_cast< std::add_pointer_t<size_t>>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 6: _t->request_clipboard(); break;
        case 7: _t->request_clipboard((*reinterpret_cast< std::add_pointer_t<QDragEnterEvent*&>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< Tableau* >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< Tableau* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Tableau::*)(Card );
            if (_t _q_method = &Tableau::flip; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Tableau::*)(CardNode * , void * );
            if (_t _q_method = &Tableau::send_to_clipboard; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Tableau::*)(Tableau * );
            if (_t _q_method = &Tableau::retrieve_clipboard; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (Tableau::*)(Tableau * , QDragEnterEvent * & );
            if (_t _q_method = &Tableau::check_clipboard; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
    }
}

const QMetaObject *Tableau::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Tableau::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSTableauENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Tableau::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void Tableau::flip(Card _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Tableau::send_to_clipboard(CardNode * _t1, void * _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Tableau::retrieve_clipboard(Tableau * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Tableau::check_clipboard(Tableau * _t1, QDragEnterEvent * & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
