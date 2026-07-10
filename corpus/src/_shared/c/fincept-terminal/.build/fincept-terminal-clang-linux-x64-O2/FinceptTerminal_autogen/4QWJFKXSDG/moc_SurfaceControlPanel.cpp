/****************************************************************************
** Meta object code from reading C++ file 'SurfaceControlPanel.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../upstream/fincept-qt/src/screens/surface_analytics/SurfaceControlPanel.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SurfaceControlPanel.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN7fincept7surface19SurfaceControlPanelE_t {};
} // unnamed namespace


#ifdef QT_MOC_HAS_STRINGDATA
static constexpr auto qt_meta_stringdata_ZN7fincept7surface19SurfaceControlPanelE = QtMocHelpers::stringData(
    "fincept::surface::SurfaceControlPanel",
    "controls_changed",
    "",
    "fetch_requested",
    "symbol_changed",
    "symbol",
    "on_symbol_edited",
    "on_symbol_text_changed",
    "text",
    "on_search_debounce_fired",
    "on_dataset_changed",
    "on_dates_changed",
    "on_lookback_preset",
    "days",
    "on_strike_window_changed",
    "v",
    "on_dte_changed",
    "on_iv_method_changed",
    "on_basket_add",
    "on_basket_remove",
    "on_fetch_clicked"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA

Q_CONSTINIT static const uint qt_meta_data_ZN7fincept7surface19SurfaceControlPanelE[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  104,    2, 0x06,    1 /* Public */,
       3,    0,  105,    2, 0x06,    2 /* Public */,
       4,    1,  106,    2, 0x06,    3 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       6,    0,  109,    2, 0x08,    5 /* Private */,
       7,    1,  110,    2, 0x08,    6 /* Private */,
       9,    0,  113,    2, 0x08,    8 /* Private */,
      10,    0,  114,    2, 0x08,    9 /* Private */,
      11,    0,  115,    2, 0x08,   10 /* Private */,
      12,    1,  116,    2, 0x08,   11 /* Private */,
      14,    1,  119,    2, 0x08,   13 /* Private */,
      16,    0,  122,    2, 0x08,   15 /* Private */,
      17,    0,  123,    2, 0x08,   16 /* Private */,
      18,    0,  124,    2, 0x08,   17 /* Private */,
      19,    0,  125,    2, 0x08,   18 /* Private */,
      20,    0,  126,    2, 0x08,   19 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    5,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   13,
    QMetaType::Void, QMetaType::Int,   15,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject fincept::surface::SurfaceControlPanel::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_ZN7fincept7surface19SurfaceControlPanelE.offsetsAndSizes,
    qt_meta_data_ZN7fincept7surface19SurfaceControlPanelE,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_tag_ZN7fincept7surface19SurfaceControlPanelE_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<SurfaceControlPanel, std::true_type>,
        // method 'controls_changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'fetch_requested'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'symbol_changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'on_symbol_edited'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_symbol_text_changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'on_search_debounce_fired'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_dataset_changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_dates_changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_lookback_preset'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_strike_window_changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_dte_changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_iv_method_changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_basket_add'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_basket_remove'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_fetch_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void fincept::surface::SurfaceControlPanel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<SurfaceControlPanel *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->controls_changed(); break;
        case 1: _t->fetch_requested(); break;
        case 2: _t->symbol_changed((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 3: _t->on_symbol_edited(); break;
        case 4: _t->on_symbol_text_changed((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 5: _t->on_search_debounce_fired(); break;
        case 6: _t->on_dataset_changed(); break;
        case 7: _t->on_dates_changed(); break;
        case 8: _t->on_lookback_preset((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 9: _t->on_strike_window_changed((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 10: _t->on_dte_changed(); break;
        case 11: _t->on_iv_method_changed(); break;
        case 12: _t->on_basket_add(); break;
        case 13: _t->on_basket_remove(); break;
        case 14: _t->on_fetch_clicked(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _q_method_type = void (SurfaceControlPanel::*)();
            if (_q_method_type _q_method = &SurfaceControlPanel::controls_changed; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _q_method_type = void (SurfaceControlPanel::*)();
            if (_q_method_type _q_method = &SurfaceControlPanel::fetch_requested; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _q_method_type = void (SurfaceControlPanel::*)(const QString & );
            if (_q_method_type _q_method = &SurfaceControlPanel::symbol_changed; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject *fincept::surface::SurfaceControlPanel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *fincept::surface::SurfaceControlPanel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ZN7fincept7surface19SurfaceControlPanelE.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int fincept::surface::SurfaceControlPanel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 15;
    }
    return _id;
}

// SIGNAL 0
void fincept::surface::SurfaceControlPanel::controls_changed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void fincept::surface::SurfaceControlPanel::fetch_requested()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void fincept::surface::SurfaceControlPanel::symbol_changed(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
