/****************************************************************************
** Meta object code from reading C++ file 'EquityTradingScreen.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../upstream/fincept-qt/src/screens/equity_trading/EquityTradingScreen.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'EquityTradingScreen.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN7fincept7screens19EquityTradingScreenE_t {};
} // unnamed namespace


#ifdef QT_MOC_HAS_STRINGDATA
static constexpr auto qt_meta_stringdata_ZN7fincept7screens19EquityTradingScreenE = QtMocHelpers::stringData(
    "fincept::screens::EquityTradingScreen",
    "on_account_changed",
    "",
    "account_id",
    "on_symbol_selected",
    "symbol",
    "on_symbol_search_changed",
    "text",
    "on_mode_toggled",
    "on_accounts_clicked",
    "handle_token_expired",
    "on_order_submitted",
    "trading::UnifiedOrder",
    "order",
    "on_multi_broker_submit",
    "account_ids",
    "on_cancel_order",
    "order_id",
    "on_cancel_all_orders",
    "on_close_all_positions",
    "on_square_off_all_holdings",
    "QList<trading::BrokerHolding>",
    "holdings",
    "on_square_off_holding",
    "exchange",
    "on_strategy_submitted",
    "trading::BasketOrderRequest",
    "basket",
    "on_ob_price_clicked",
    "price",
    "on_import_holdings_requested",
    "on_replicate_portfolio_requested",
    "on_convert_position",
    "position_id",
    "new_product",
    "on_orders_day_changed",
    "day",
    "on_square_off_group",
    "sign",
    "on_trade_symbol_requested",
    "product",
    "is_buy",
    "qty",
    "on_chart_exit_position",
    "product_type",
    "side",
    "on_watchlist_selected",
    "id",
    "on_watchlist_create",
    "name",
    "on_watchlist_rename",
    "on_watchlist_delete",
    "on_watchlist_symbol_added",
    "on_watchlist_symbol_removed",
    "on_instruments_ready",
    "broker_id",
    "refresh_candles",
    "update_clock",
    "on_stream_candles_fetched",
    "QList<trading::BrokerCandle>",
    "candles",
    "on_stream_orderbook_fetched",
    "QList<std::pair<double,double>>",
    "bids",
    "asks",
    "spread",
    "spread_pct",
    "QList<int>",
    "bid_orders",
    "ask_orders",
    "on_stream_time_sales_fetched",
    "QList<trading::BrokerTrade>",
    "trades",
    "on_stream_latest_trade_fetched",
    "trading::BrokerTrade",
    "trade",
    "on_stream_calendar_fetched",
    "QList<trading::MarketCalendarDay>",
    "days",
    "on_stream_clock_fetched",
    "trading::MarketClock",
    "clock"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA

Q_CONSTINIT static const uint qt_meta_data_ZN7fincept7screens19EquityTradingScreenE[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      37,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,  236,    2, 0x08,    1 /* Private */,
       4,    1,  239,    2, 0x08,    3 /* Private */,
       6,    1,  242,    2, 0x08,    5 /* Private */,
       8,    0,  245,    2, 0x08,    7 /* Private */,
       9,    0,  246,    2, 0x08,    8 /* Private */,
      10,    1,  247,    2, 0x08,    9 /* Private */,
      11,    1,  250,    2, 0x08,   11 /* Private */,
      14,    2,  253,    2, 0x08,   13 /* Private */,
      16,    1,  258,    2, 0x08,   16 /* Private */,
      18,    0,  261,    2, 0x08,   18 /* Private */,
      19,    0,  262,    2, 0x08,   19 /* Private */,
      20,    1,  263,    2, 0x08,   20 /* Private */,
      23,    2,  266,    2, 0x08,   22 /* Private */,
      25,    1,  271,    2, 0x08,   25 /* Private */,
      28,    1,  274,    2, 0x08,   27 /* Private */,
      30,    1,  277,    2, 0x08,   29 /* Private */,
      31,    0,  280,    2, 0x08,   31 /* Private */,
      32,    3,  281,    2, 0x08,   32 /* Private */,
      35,    1,  288,    2, 0x08,   36 /* Private */,
      37,    2,  291,    2, 0x08,   38 /* Private */,
      39,    4,  296,    2, 0x08,   41 /* Private */,
      43,    5,  305,    2, 0x08,   46 /* Private */,
      46,    1,  316,    2, 0x08,   52 /* Private */,
      48,    1,  319,    2, 0x08,   54 /* Private */,
      50,    2,  322,    2, 0x08,   56 /* Private */,
      51,    1,  327,    2, 0x08,   59 /* Private */,
      52,    1,  330,    2, 0x08,   61 /* Private */,
      53,    1,  333,    2, 0x08,   63 /* Private */,
      54,    1,  336,    2, 0x08,   65 /* Private */,
      56,    0,  339,    2, 0x08,   67 /* Private */,
      57,    0,  340,    2, 0x08,   68 /* Private */,
      58,    2,  341,    2, 0x08,   69 /* Private */,
      61,    7,  346,    2, 0x08,   72 /* Private */,
      70,    2,  361,    2, 0x08,   80 /* Private */,
      73,    2,  366,    2, 0x08,   83 /* Private */,
      76,    2,  371,    2, 0x08,   86 /* Private */,
      79,    2,  376,    2, 0x08,   89 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, 0x80000000 | 12,   13,
    QMetaType::Void, 0x80000000 | 12, QMetaType::QStringList,   13,   15,
    QMetaType::Void, QMetaType::QString,   17,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 21,   22,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    5,   24,
    QMetaType::Void, 0x80000000 | 26,   27,
    QMetaType::Void, QMetaType::Double,   29,
    QMetaType::Void, 0x80000000 | 21,   22,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString,   33,    5,   34,
    QMetaType::Void, QMetaType::QDate,   36,
    QMetaType::Void, QMetaType::QString, QMetaType::Int,    3,   38,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::Bool, QMetaType::Double,    5,   40,   41,   42,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::Double,    5,   24,   44,   45,   42,
    QMetaType::Void, QMetaType::QString,   47,
    QMetaType::Void, QMetaType::QString,   49,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   47,   49,
    QMetaType::Void, QMetaType::QString,   47,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::QString,   55,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 59,    3,   60,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 62, 0x80000000 | 62, QMetaType::Double, QMetaType::Double, 0x80000000 | 67, 0x80000000 | 67,    3,   63,   64,   65,   66,   68,   69,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 71,    3,   72,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 74,    3,   75,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 77,    3,   78,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 80,    3,   81,

       0        // eod
};

Q_CONSTINIT const QMetaObject fincept::screens::EquityTradingScreen::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_ZN7fincept7screens19EquityTradingScreenE.offsetsAndSizes,
    qt_meta_data_ZN7fincept7screens19EquityTradingScreenE,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_tag_ZN7fincept7screens19EquityTradingScreenE_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<EquityTradingScreen, std::true_type>,
        // method 'on_account_changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'on_symbol_selected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'on_symbol_search_changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'on_mode_toggled'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_accounts_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'handle_token_expired'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'on_order_submitted'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const trading::UnifiedOrder &, std::false_type>,
        // method 'on_multi_broker_submit'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const trading::UnifiedOrder &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QStringList &, std::false_type>,
        // method 'on_cancel_order'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'on_cancel_all_orders'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_close_all_positions'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_square_off_all_holdings'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QVector<trading::BrokerHolding> &, std::false_type>,
        // method 'on_square_off_holding'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'on_strategy_submitted'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const trading::BasketOrderRequest &, std::false_type>,
        // method 'on_ob_price_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        // method 'on_import_holdings_requested'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QVector<trading::BrokerHolding> &, std::false_type>,
        // method 'on_replicate_portfolio_requested'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_convert_position'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'on_orders_day_changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QDate &, std::false_type>,
        // method 'on_square_off_group'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_trade_symbol_requested'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        // method 'on_chart_exit_position'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        // method 'on_watchlist_selected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'on_watchlist_create'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'on_watchlist_rename'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'on_watchlist_delete'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'on_watchlist_symbol_added'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'on_watchlist_symbol_removed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'on_instruments_ready'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'refresh_candles'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'update_clock'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_stream_candles_fetched'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QVector<trading::BrokerCandle> &, std::false_type>,
        // method 'on_stream_orderbook_fetched'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QVector<QPair<double,double>> &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QVector<QPair<double,double>> &, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QVector<int> &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QVector<int> &, std::false_type>,
        // method 'on_stream_time_sales_fetched'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QVector<trading::BrokerTrade> &, std::false_type>,
        // method 'on_stream_latest_trade_fetched'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const trading::BrokerTrade &, std::false_type>,
        // method 'on_stream_calendar_fetched'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QVector<trading::MarketCalendarDay> &, std::false_type>,
        // method 'on_stream_clock_fetched'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const trading::MarketClock &, std::false_type>
    >,
    nullptr
} };

void fincept::screens::EquityTradingScreen::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<EquityTradingScreen *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->on_account_changed((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 1: _t->on_symbol_selected((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 2: _t->on_symbol_search_changed((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 3: _t->on_mode_toggled(); break;
        case 4: _t->on_accounts_clicked(); break;
        case 5: _t->handle_token_expired((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 6: _t->on_order_submitted((*reinterpret_cast< std::add_pointer_t<trading::UnifiedOrder>>(_a[1]))); break;
        case 7: _t->on_multi_broker_submit((*reinterpret_cast< std::add_pointer_t<trading::UnifiedOrder>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QStringList>>(_a[2]))); break;
        case 8: _t->on_cancel_order((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 9: _t->on_cancel_all_orders(); break;
        case 10: _t->on_close_all_positions(); break;
        case 11: _t->on_square_off_all_holdings((*reinterpret_cast< std::add_pointer_t<QList<trading::BrokerHolding>>>(_a[1]))); break;
        case 12: _t->on_square_off_holding((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 13: _t->on_strategy_submitted((*reinterpret_cast< std::add_pointer_t<trading::BasketOrderRequest>>(_a[1]))); break;
        case 14: _t->on_ob_price_clicked((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 15: _t->on_import_holdings_requested((*reinterpret_cast< std::add_pointer_t<QList<trading::BrokerHolding>>>(_a[1]))); break;
        case 16: _t->on_replicate_portfolio_requested(); break;
        case 17: _t->on_convert_position((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3]))); break;
        case 18: _t->on_orders_day_changed((*reinterpret_cast< std::add_pointer_t<QDate>>(_a[1]))); break;
        case 19: _t->on_square_off_group((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 20: _t->on_trade_symbol_requested((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<double>>(_a[4]))); break;
        case 21: _t->on_chart_exit_position((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[4])),(*reinterpret_cast< std::add_pointer_t<double>>(_a[5]))); break;
        case 22: _t->on_watchlist_selected((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 23: _t->on_watchlist_create((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 24: _t->on_watchlist_rename((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 25: _t->on_watchlist_delete((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 26: _t->on_watchlist_symbol_added((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 27: _t->on_watchlist_symbol_removed((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 28: _t->on_instruments_ready((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 29: _t->refresh_candles(); break;
        case 30: _t->update_clock(); break;
        case 31: _t->on_stream_candles_fetched((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QList<trading::BrokerCandle>>>(_a[2]))); break;
        case 32: _t->on_stream_orderbook_fetched((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QList<std::pair<double,double>>>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QList<std::pair<double,double>>>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<double>>(_a[4])),(*reinterpret_cast< std::add_pointer_t<double>>(_a[5])),(*reinterpret_cast< std::add_pointer_t<QList<int>>>(_a[6])),(*reinterpret_cast< std::add_pointer_t<QList<int>>>(_a[7]))); break;
        case 33: _t->on_stream_time_sales_fetched((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QList<trading::BrokerTrade>>>(_a[2]))); break;
        case 34: _t->on_stream_latest_trade_fetched((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<trading::BrokerTrade>>(_a[2]))); break;
        case 35: _t->on_stream_calendar_fetched((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QList<trading::MarketCalendarDay>>>(_a[2]))); break;
        case 36: _t->on_stream_clock_fetched((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<trading::MarketClock>>(_a[2]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 32:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 6:
            case 5:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QList<int> >(); break;
            }
            break;
        }
    }
}

const QMetaObject *fincept::screens::EquityTradingScreen::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *fincept::screens::EquityTradingScreen::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ZN7fincept7screens19EquityTradingScreenE.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "IGroupLinked"))
        return static_cast< IGroupLinked*>(this);
    if (!strcmp(_clname, "IStatefulScreen"))
        return static_cast< IStatefulScreen*>(this);
    if (!strcmp(_clname, "in.fincept.IGroupLinked/1.0"))
        return static_cast< fincept::IGroupLinked*>(this);
    return QWidget::qt_metacast(_clname);
}

int fincept::screens::EquityTradingScreen::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 37)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 37;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 37)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 37;
    }
    return _id;
}
QT_WARNING_POP
