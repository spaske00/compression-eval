/****************************************************************************
** Meta object code from reading C++ file 'PortfolioScreen.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../upstream/fincept-qt/src/screens/portfolio/PortfolioScreen.h"
#include <QtCore/qmetatype.h>
#include <QtCore/QList>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'PortfolioScreen.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN7fincept7screens15PortfolioScreenE_t {};
} // unnamed namespace


#ifdef QT_MOC_HAS_STRINGDATA
static constexpr auto qt_meta_stringdata_ZN7fincept7screens15PortfolioScreenE = QtMocHelpers::stringData(
    "fincept::screens::PortfolioScreen",
    "on_portfolios_loaded",
    "",
    "QList<portfolio::Portfolio>",
    "portfolios",
    "on_portfolio_selected",
    "id",
    "on_summary_loaded",
    "portfolio::PortfolioSummary",
    "summary",
    "on_summary_error",
    "portfolio_id",
    "error",
    "on_metrics_computed",
    "portfolio::ComputedMetrics",
    "metrics",
    "on_snapshots_loaded",
    "QList<portfolio::PortfolioSnapshot>",
    "snapshots",
    "on_portfolio_created",
    "portfolio::Portfolio",
    "portfolio",
    "on_portfolio_deleted",
    "on_asset_changed",
    "on_create_requested",
    "on_delete_requested",
    "on_detail_view_selected",
    "portfolio::DetailView",
    "view",
    "on_refresh_interval_changed",
    "ms",
    "on_symbol_selected",
    "symbol",
    "on_buy_requested",
    "on_sell_requested",
    "on_order_panel_close"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA

Q_CONSTINIT static const uint qt_meta_data_ZN7fincept7screens15PortfolioScreenE[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,  116,    2, 0x08,    1 /* Private */,
       5,    1,  119,    2, 0x08,    3 /* Private */,
       7,    1,  122,    2, 0x08,    5 /* Private */,
      10,    2,  125,    2, 0x08,    7 /* Private */,
      13,    1,  130,    2, 0x08,   10 /* Private */,
      16,    2,  133,    2, 0x08,   12 /* Private */,
      19,    1,  138,    2, 0x08,   15 /* Private */,
      22,    1,  141,    2, 0x08,   17 /* Private */,
      23,    1,  144,    2, 0x08,   19 /* Private */,
      24,    0,  147,    2, 0x08,   21 /* Private */,
      25,    1,  148,    2, 0x08,   22 /* Private */,
      26,    1,  151,    2, 0x08,   24 /* Private */,
      29,    1,  154,    2, 0x08,   26 /* Private */,
      31,    1,  157,    2, 0x08,   28 /* Private */,
      33,    0,  160,    2, 0x08,   30 /* Private */,
      34,    0,  161,    2, 0x08,   31 /* Private */,
      35,    0,  162,    2, 0x08,   32 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   11,   12,
    QMetaType::Void, 0x80000000 | 14,   15,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 17,   11,   18,
    QMetaType::Void, 0x80000000 | 20,   21,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::QString,   11,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, 0x80000000 | 27,   28,
    QMetaType::Void, QMetaType::Int,   30,
    QMetaType::Void, QMetaType::QString,   32,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject fincept::screens::PortfolioScreen::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_ZN7fincept7screens15PortfolioScreenE.offsetsAndSizes,
    qt_meta_data_ZN7fincept7screens15PortfolioScreenE,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_tag_ZN7fincept7screens15PortfolioScreenE_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<PortfolioScreen, std::true_type>,
        // method 'on_portfolios_loaded'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QVector<portfolio::Portfolio>, std::false_type>,
        // method 'on_portfolio_selected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'on_summary_loaded'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<portfolio::PortfolioSummary, std::false_type>,
        // method 'on_summary_error'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'on_metrics_computed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<portfolio::ComputedMetrics, std::false_type>,
        // method 'on_snapshots_loaded'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<QVector<portfolio::PortfolioSnapshot>, std::false_type>,
        // method 'on_portfolio_created'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<portfolio::Portfolio, std::false_type>,
        // method 'on_portfolio_deleted'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'on_asset_changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'on_create_requested'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_delete_requested'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'on_detail_view_selected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<portfolio::DetailView, std::false_type>,
        // method 'on_refresh_interval_changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_symbol_selected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'on_buy_requested'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_sell_requested'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_order_panel_close'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void fincept::screens::PortfolioScreen::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<PortfolioScreen *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->on_portfolios_loaded((*reinterpret_cast< std::add_pointer_t<QList<portfolio::Portfolio>>>(_a[1]))); break;
        case 1: _t->on_portfolio_selected((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 2: _t->on_summary_loaded((*reinterpret_cast< std::add_pointer_t<portfolio::PortfolioSummary>>(_a[1]))); break;
        case 3: _t->on_summary_error((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 4: _t->on_metrics_computed((*reinterpret_cast< std::add_pointer_t<portfolio::ComputedMetrics>>(_a[1]))); break;
        case 5: _t->on_snapshots_loaded((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QList<portfolio::PortfolioSnapshot>>>(_a[2]))); break;
        case 6: _t->on_portfolio_created((*reinterpret_cast< std::add_pointer_t<portfolio::Portfolio>>(_a[1]))); break;
        case 7: _t->on_portfolio_deleted((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 8: _t->on_asset_changed((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 9: _t->on_create_requested(); break;
        case 10: _t->on_delete_requested((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 11: _t->on_detail_view_selected((*reinterpret_cast< std::add_pointer_t<portfolio::DetailView>>(_a[1]))); break;
        case 12: _t->on_refresh_interval_changed((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 13: _t->on_symbol_selected((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 14: _t->on_buy_requested(); break;
        case 15: _t->on_sell_requested(); break;
        case 16: _t->on_order_panel_close(); break;
        default: ;
        }
    }
}

const QMetaObject *fincept::screens::PortfolioScreen::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *fincept::screens::PortfolioScreen::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ZN7fincept7screens15PortfolioScreenE.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "IStatefulScreen"))
        return static_cast< IStatefulScreen*>(this);
    if (!strcmp(_clname, "IGroupLinked"))
        return static_cast< IGroupLinked*>(this);
    if (!strcmp(_clname, "in.fincept.IGroupLinked/1.0"))
        return static_cast< fincept::IGroupLinked*>(this);
    return QWidget::qt_metacast(_clname);
}

int fincept::screens::PortfolioScreen::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 17)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 17;
    }
    return _id;
}
QT_WARNING_POP
