/****************************************************************************
** Meta object code from reading C++ file 'CryptoTradingScreen.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../upstream/fincept-qt/src/screens/crypto_trading/CryptoTradingScreen.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CryptoTradingScreen.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN7fincept7screens19CryptoTradingScreenE_t {};
} // unnamed namespace


#ifdef QT_MOC_HAS_STRINGDATA
static constexpr auto qt_meta_stringdata_ZN7fincept7screens19CryptoTradingScreenE = QtMocHelpers::stringData(
    "fincept::screens::CryptoTradingScreen",
    "on_exchange_changed",
    "",
    "exchange",
    "on_symbol_selected",
    "symbol",
    "on_mode_toggled",
    "on_api_clicked",
    "on_order_submitted",
    "side",
    "order_type",
    "qty",
    "price",
    "stop_price",
    "sl",
    "tp",
    "on_cancel_order",
    "order_id",
    "on_cancel_all_orders",
    "on_close_all_positions",
    "on_close_position",
    "on_ob_price_clicked",
    "on_search_requested",
    "filter",
    "refresh_ticker",
    "refresh_orderbook",
    "refresh_portfolio",
    "refresh_watchlist",
    "refresh_market_info",
    "refresh_candles",
    "refresh_live_data",
    "update_clock"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA

Q_CONSTINIT static const uint qt_meta_data_ZN7fincept7screens19CryptoTradingScreenE[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      19,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,  128,    2, 0x08,    1 /* Private */,
       4,    1,  131,    2, 0x08,    3 /* Private */,
       6,    0,  134,    2, 0x08,    5 /* Private */,
       7,    0,  135,    2, 0x08,    6 /* Private */,
       8,    7,  136,    2, 0x08,    7 /* Private */,
      16,    1,  151,    2, 0x08,   15 /* Private */,
      18,    0,  154,    2, 0x08,   17 /* Private */,
      19,    0,  155,    2, 0x08,   18 /* Private */,
      20,    1,  156,    2, 0x08,   19 /* Private */,
      21,    1,  159,    2, 0x08,   21 /* Private */,
      22,    1,  162,    2, 0x08,   23 /* Private */,
      24,    0,  165,    2, 0x08,   25 /* Private */,
      25,    0,  166,    2, 0x08,   26 /* Private */,
      26,    0,  167,    2, 0x08,   27 /* Private */,
      27,    0,  168,    2, 0x08,   28 /* Private */,
      28,    0,  169,    2, 0x08,   29 /* Private */,
      29,    0,  170,    2, 0x08,   30 /* Private */,
      30,    0,  171,    2, 0x08,   31 /* Private */,
      31,    0,  172,    2, 0x08,   32 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double,    9,   10,   11,   12,   13,   14,   15,
    QMetaType::Void, QMetaType::QString,   17,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::Double,   12,
    QMetaType::Void, QMetaType::QString,   23,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject fincept::screens::CryptoTradingScreen::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_ZN7fincept7screens19CryptoTradingScreenE.offsetsAndSizes,
    qt_meta_data_ZN7fincept7screens19CryptoTradingScreenE,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_tag_ZN7fincept7screens19CryptoTradingScreenE_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<CryptoTradingScreen, std::true_type>,
        // method 'on_exchange_changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'on_symbol_selected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'on_mode_toggled'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_api_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_order_submitted'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        // method 'on_cancel_order'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'on_cancel_all_orders'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_close_all_positions'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_close_position'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'on_ob_price_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        // method 'on_search_requested'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'refresh_ticker'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'refresh_orderbook'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'refresh_portfolio'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'refresh_watchlist'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'refresh_market_info'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'refresh_candles'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'refresh_live_data'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'update_clock'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void fincept::screens::CryptoTradingScreen::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<CryptoTradingScreen *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->on_exchange_changed((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 1: _t->on_symbol_selected((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 2: _t->on_mode_toggled(); break;
        case 3: _t->on_api_clicked(); break;
        case 4: _t->on_order_submitted((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<double>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<double>>(_a[4])),(*reinterpret_cast< std::add_pointer_t<double>>(_a[5])),(*reinterpret_cast< std::add_pointer_t<double>>(_a[6])),(*reinterpret_cast< std::add_pointer_t<double>>(_a[7]))); break;
        case 5: _t->on_cancel_order((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 6: _t->on_cancel_all_orders(); break;
        case 7: _t->on_close_all_positions(); break;
        case 8: _t->on_close_position((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 9: _t->on_ob_price_clicked((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 10: _t->on_search_requested((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 11: _t->refresh_ticker(); break;
        case 12: _t->refresh_orderbook(); break;
        case 13: _t->refresh_portfolio(); break;
        case 14: _t->refresh_watchlist(); break;
        case 15: _t->refresh_market_info(); break;
        case 16: _t->refresh_candles(); break;
        case 17: _t->refresh_live_data(); break;
        case 18: _t->update_clock(); break;
        default: ;
        }
    }
}

const QMetaObject *fincept::screens::CryptoTradingScreen::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *fincept::screens::CryptoTradingScreen::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ZN7fincept7screens19CryptoTradingScreenE.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "IStatefulScreen"))
        return static_cast< IStatefulScreen*>(this);
    if (!strcmp(_clname, "IGroupLinked"))
        return static_cast< IGroupLinked*>(this);
    if (!strcmp(_clname, "in.fincept.IGroupLinked/1.0"))
        return static_cast< fincept::IGroupLinked*>(this);
    return QWidget::qt_metacast(_clname);
}

int fincept::screens::CryptoTradingScreen::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 19)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 19;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 19)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 19;
    }
    return _id;
}
QT_WARNING_POP
