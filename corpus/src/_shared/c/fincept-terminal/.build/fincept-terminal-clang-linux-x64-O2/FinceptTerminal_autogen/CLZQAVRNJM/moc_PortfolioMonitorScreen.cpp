/****************************************************************************
** Meta object code from reading C++ file 'PortfolioMonitorScreen.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../upstream/fincept-qt/src/screens/portfolio_monitor/PortfolioMonitorScreen.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'PortfolioMonitorScreen.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN7fincept7screens22PortfolioMonitorScreenE_t {};
} // unnamed namespace


#ifdef QT_MOC_HAS_STRINGDATA
static constexpr auto qt_meta_stringdata_ZN7fincept7screens22PortfolioMonitorScreenE = QtMocHelpers::stringData(
    "fincept::screens::PortfolioMonitorScreen",
    "float_requested",
    "",
    "dock_requested",
    "rebuild_positions",
    "rebuild_holdings",
    "patch_position",
    "symbol",
    "patch_holding",
    "update_summary",
    "on_action_finished",
    "ok",
    "message",
    "on_new_order",
    "on_mode_toggled",
    "live"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA

Q_CONSTINIT static const uint qt_meta_data_ZN7fincept7screens22PortfolioMonitorScreenE[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   74,    2, 0x06,    1 /* Public */,
       3,    0,   75,    2, 0x06,    2 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       4,    0,   76,    2, 0x08,    3 /* Private */,
       5,    0,   77,    2, 0x08,    4 /* Private */,
       6,    1,   78,    2, 0x08,    5 /* Private */,
       8,    1,   81,    2, 0x08,    7 /* Private */,
       9,    0,   84,    2, 0x08,    9 /* Private */,
      10,    2,   85,    2, 0x08,   10 /* Private */,
      13,    0,   90,    2, 0x08,   13 /* Private */,
      14,    1,   91,    2, 0x08,   14 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool, QMetaType::QString,   11,   12,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   15,

       0        // eod
};

Q_CONSTINIT const QMetaObject fincept::screens::PortfolioMonitorScreen::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_ZN7fincept7screens22PortfolioMonitorScreenE.offsetsAndSizes,
    qt_meta_data_ZN7fincept7screens22PortfolioMonitorScreenE,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_tag_ZN7fincept7screens22PortfolioMonitorScreenE_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<PortfolioMonitorScreen, std::true_type>,
        // method 'float_requested'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'dock_requested'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'rebuild_positions'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'rebuild_holdings'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'patch_position'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'patch_holding'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'update_summary'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_action_finished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'on_new_order'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_mode_toggled'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>
    >,
    nullptr
} };

void fincept::screens::PortfolioMonitorScreen::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<PortfolioMonitorScreen *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->float_requested(); break;
        case 1: _t->dock_requested(); break;
        case 2: _t->rebuild_positions(); break;
        case 3: _t->rebuild_holdings(); break;
        case 4: _t->patch_position((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 5: _t->patch_holding((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 6: _t->update_summary(); break;
        case 7: _t->on_action_finished((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 8: _t->on_new_order(); break;
        case 9: _t->on_mode_toggled((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _q_method_type = void (PortfolioMonitorScreen::*)();
            if (_q_method_type _q_method = &PortfolioMonitorScreen::float_requested; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _q_method_type = void (PortfolioMonitorScreen::*)();
            if (_q_method_type _q_method = &PortfolioMonitorScreen::dock_requested; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject *fincept::screens::PortfolioMonitorScreen::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *fincept::screens::PortfolioMonitorScreen::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ZN7fincept7screens22PortfolioMonitorScreenE.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int fincept::screens::PortfolioMonitorScreen::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void fincept::screens::PortfolioMonitorScreen::float_requested()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void fincept::screens::PortfolioMonitorScreen::dock_requested()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
