/****************************************************************************
** Meta object code from reading C++ file 'PortfolioCommandBar.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../upstream/fincept-qt/src/screens/portfolio/PortfolioCommandBar.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'PortfolioCommandBar.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.8.3. It"
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
struct qt_meta_tag_ZN7fincept7screens19PortfolioCommandBarE_t {};
} // unnamed namespace


#ifdef QT_MOC_HAS_STRINGDATA
static constexpr auto qt_meta_stringdata_ZN7fincept7screens19PortfolioCommandBarE = QtMocHelpers::stringData(
    "fincept::screens::PortfolioCommandBar",
    "portfolio_selected",
    "",
    "id",
    "create_requested",
    "delete_requested",
    "buy_requested",
    "sell_requested",
    "dividend_requested",
    "refresh_requested",
    "export_csv_requested",
    "export_json_requested",
    "import_requested",
    "refresh_interval_changed",
    "ms",
    "ffn_toggled",
    "detail_view_selected",
    "portfolio::DetailView",
    "view",
    "ai_analyze_requested",
    "agent_run_requested",
    "backtest_requested"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA

Q_CONSTINIT static const uint qt_meta_data_ZN7fincept7screens19PortfolioCommandBarE[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      16,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,  110,    2, 0x06,    1 /* Public */,
       4,    0,  113,    2, 0x06,    3 /* Public */,
       5,    1,  114,    2, 0x06,    4 /* Public */,
       6,    0,  117,    2, 0x06,    6 /* Public */,
       7,    0,  118,    2, 0x06,    7 /* Public */,
       8,    0,  119,    2, 0x06,    8 /* Public */,
       9,    0,  120,    2, 0x06,    9 /* Public */,
      10,    0,  121,    2, 0x06,   10 /* Public */,
      11,    0,  122,    2, 0x06,   11 /* Public */,
      12,    0,  123,    2, 0x06,   12 /* Public */,
      13,    1,  124,    2, 0x06,   13 /* Public */,
      15,    0,  127,    2, 0x06,   15 /* Public */,
      16,    1,  128,    2, 0x06,   16 /* Public */,
      19,    0,  131,    2, 0x06,   18 /* Public */,
      20,    0,  132,    2, 0x06,   19 /* Public */,
      21,    0,  133,    2, 0x06,   20 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   14,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 17,   18,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject fincept::screens::PortfolioCommandBar::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_ZN7fincept7screens19PortfolioCommandBarE.offsetsAndSizes,
    qt_meta_data_ZN7fincept7screens19PortfolioCommandBarE,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_tag_ZN7fincept7screens19PortfolioCommandBarE_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<PortfolioCommandBar, std::true_type>,
        // method 'portfolio_selected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'create_requested'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'delete_requested'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'buy_requested'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'sell_requested'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'dividend_requested'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'refresh_requested'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'export_csv_requested'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'export_json_requested'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'import_requested'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'refresh_interval_changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'ffn_toggled'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'detail_view_selected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<portfolio::DetailView, std::false_type>,
        // method 'ai_analyze_requested'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'agent_run_requested'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'backtest_requested'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void fincept::screens::PortfolioCommandBar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<PortfolioCommandBar *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->portfolio_selected((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 1: _t->create_requested(); break;
        case 2: _t->delete_requested((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 3: _t->buy_requested(); break;
        case 4: _t->sell_requested(); break;
        case 5: _t->dividend_requested(); break;
        case 6: _t->refresh_requested(); break;
        case 7: _t->export_csv_requested(); break;
        case 8: _t->export_json_requested(); break;
        case 9: _t->import_requested(); break;
        case 10: _t->refresh_interval_changed((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 11: _t->ffn_toggled(); break;
        case 12: _t->detail_view_selected((*reinterpret_cast< std::add_pointer_t<portfolio::DetailView>>(_a[1]))); break;
        case 13: _t->ai_analyze_requested(); break;
        case 14: _t->agent_run_requested(); break;
        case 15: _t->backtest_requested(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _q_method_type = void (PortfolioCommandBar::*)(QString );
            if (_q_method_type _q_method = &PortfolioCommandBar::portfolio_selected; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _q_method_type = void (PortfolioCommandBar::*)();
            if (_q_method_type _q_method = &PortfolioCommandBar::create_requested; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _q_method_type = void (PortfolioCommandBar::*)(QString );
            if (_q_method_type _q_method = &PortfolioCommandBar::delete_requested; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _q_method_type = void (PortfolioCommandBar::*)();
            if (_q_method_type _q_method = &PortfolioCommandBar::buy_requested; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _q_method_type = void (PortfolioCommandBar::*)();
            if (_q_method_type _q_method = &PortfolioCommandBar::sell_requested; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _q_method_type = void (PortfolioCommandBar::*)();
            if (_q_method_type _q_method = &PortfolioCommandBar::dividend_requested; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
        {
            using _q_method_type = void (PortfolioCommandBar::*)();
            if (_q_method_type _q_method = &PortfolioCommandBar::refresh_requested; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 6;
                return;
            }
        }
        {
            using _q_method_type = void (PortfolioCommandBar::*)();
            if (_q_method_type _q_method = &PortfolioCommandBar::export_csv_requested; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 7;
                return;
            }
        }
        {
            using _q_method_type = void (PortfolioCommandBar::*)();
            if (_q_method_type _q_method = &PortfolioCommandBar::export_json_requested; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 8;
                return;
            }
        }
        {
            using _q_method_type = void (PortfolioCommandBar::*)();
            if (_q_method_type _q_method = &PortfolioCommandBar::import_requested; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 9;
                return;
            }
        }
        {
            using _q_method_type = void (PortfolioCommandBar::*)(int );
            if (_q_method_type _q_method = &PortfolioCommandBar::refresh_interval_changed; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 10;
                return;
            }
        }
        {
            using _q_method_type = void (PortfolioCommandBar::*)();
            if (_q_method_type _q_method = &PortfolioCommandBar::ffn_toggled; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 11;
                return;
            }
        }
        {
            using _q_method_type = void (PortfolioCommandBar::*)(portfolio::DetailView );
            if (_q_method_type _q_method = &PortfolioCommandBar::detail_view_selected; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 12;
                return;
            }
        }
        {
            using _q_method_type = void (PortfolioCommandBar::*)();
            if (_q_method_type _q_method = &PortfolioCommandBar::ai_analyze_requested; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 13;
                return;
            }
        }
        {
            using _q_method_type = void (PortfolioCommandBar::*)();
            if (_q_method_type _q_method = &PortfolioCommandBar::agent_run_requested; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 14;
                return;
            }
        }
        {
            using _q_method_type = void (PortfolioCommandBar::*)();
            if (_q_method_type _q_method = &PortfolioCommandBar::backtest_requested; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 15;
                return;
            }
        }
    }
}

const QMetaObject *fincept::screens::PortfolioCommandBar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *fincept::screens::PortfolioCommandBar::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ZN7fincept7screens19PortfolioCommandBarE.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int fincept::screens::PortfolioCommandBar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 16)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 16;
    }
    return _id;
}

// SIGNAL 0
void fincept::screens::PortfolioCommandBar::portfolio_selected(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void fincept::screens::PortfolioCommandBar::create_requested()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void fincept::screens::PortfolioCommandBar::delete_requested(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void fincept::screens::PortfolioCommandBar::buy_requested()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void fincept::screens::PortfolioCommandBar::sell_requested()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void fincept::screens::PortfolioCommandBar::dividend_requested()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void fincept::screens::PortfolioCommandBar::refresh_requested()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void fincept::screens::PortfolioCommandBar::export_csv_requested()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void fincept::screens::PortfolioCommandBar::export_json_requested()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void fincept::screens::PortfolioCommandBar::import_requested()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}

// SIGNAL 10
void fincept::screens::PortfolioCommandBar::refresh_interval_changed(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void fincept::screens::PortfolioCommandBar::ffn_toggled()
{
    QMetaObject::activate(this, &staticMetaObject, 11, nullptr);
}

// SIGNAL 12
void fincept::screens::PortfolioCommandBar::detail_view_selected(portfolio::DetailView _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void fincept::screens::PortfolioCommandBar::ai_analyze_requested()
{
    QMetaObject::activate(this, &staticMetaObject, 13, nullptr);
}

// SIGNAL 14
void fincept::screens::PortfolioCommandBar::agent_run_requested()
{
    QMetaObject::activate(this, &staticMetaObject, 14, nullptr);
}

// SIGNAL 15
void fincept::screens::PortfolioCommandBar::backtest_requested()
{
    QMetaObject::activate(this, &staticMetaObject, 15, nullptr);
}
QT_WARNING_POP
