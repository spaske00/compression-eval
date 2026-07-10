/****************************************************************************
** Meta object code from reading C++ file 'PolymarketScreen.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../upstream/fincept-qt/src/screens/polymarket/PolymarketScreen.h"
#include <QtCore/qmetatype.h>
#include <QtCore/QList>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'PolymarketScreen.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN7fincept7screens16PolymarketScreenE_t {};
} // unnamed namespace


#ifdef QT_MOC_HAS_STRINGDATA
static constexpr auto qt_meta_stringdata_ZN7fincept7screens16PolymarketScreenE = QtMocHelpers::stringData(
    "fincept::screens::PolymarketScreen",
    "on_view_changed",
    "",
    "view",
    "on_category_changed",
    "category",
    "on_search_submitted",
    "query",
    "on_sort_changed",
    "sort_by",
    "on_refresh",
    "on_exchange_changed",
    "exchange_id",
    "on_market_selected",
    "fincept::services::prediction::PredictionMarket",
    "market",
    "on_event_selected",
    "fincept::services::prediction::PredictionEvent",
    "event",
    "on_interval_changed",
    "interval",
    "on_outcome_changed",
    "index",
    "on_related_market_clicked",
    "on_markets_ready",
    "QList<fincept::services::prediction::PredictionMarket>",
    "markets",
    "on_events_ready",
    "QList<fincept::services::prediction::PredictionEvent>",
    "events",
    "on_search_results_ready",
    "on_tags_ready",
    "tags",
    "on_order_book_ready",
    "fincept::services::prediction::PredictionOrderBook",
    "book",
    "on_price_history_ready",
    "fincept::services::prediction::PriceHistory",
    "history",
    "on_trades_ready",
    "QList<fincept::services::prediction::PredictionTrade>",
    "trades",
    "on_leaderboard_ready",
    "QVariantList",
    "entries",
    "on_adapter_error",
    "ctx",
    "msg",
    "on_ws_price_updated",
    "asset_id",
    "price",
    "on_ws_orderbook_updated",
    "on_ws_connection_changed",
    "connected",
    "on_price_summary_received",
    "fincept::services::polymarket::PriceSummary",
    "summary",
    "on_top_holders_received",
    "QList<fincept::services::polymarket::TopHolder>",
    "holders",
    "on_comments_received",
    "QList<fincept::services::polymarket::Comment>",
    "comments",
    "on_related_markets_received",
    "QList<fincept::services::polymarket::Market>",
    "on_kalshi_exchange_status",
    "status",
    "on_kalshi_exchange_schedule",
    "schedule",
    "on_kalshi_ws_trade",
    "fincept::services::prediction::PredictionTrade",
    "trade",
    "on_kalshi_market_lifecycle",
    "ticker",
    "on_kalshi_batch_candles",
    "QHash<QString,fincept::services::prediction::PriceHistory>",
    "histories",
    "on_kalshi_market_detail",
    "on_kalshi_series_detail",
    "series_ticker",
    "series",
    "on_open_orders_ready",
    "QList<fincept::services::prediction::OpenOrder>",
    "orders",
    "on_order_refresh_requested",
    "order_id",
    "on_order_amend_requested",
    "side",
    "on_order_cancel_requested",
    "on_orders_cancel_all_requested",
    "order_ids",
    "on_kalshi_single_order",
    "order"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA

Q_CONSTINIT static const uint qt_meta_data_ZN7fincept7screens16PolymarketScreenE[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      40,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,  254,    2, 0x08,    1 /* Private */,
       4,    1,  257,    2, 0x08,    3 /* Private */,
       6,    1,  260,    2, 0x08,    5 /* Private */,
       8,    1,  263,    2, 0x08,    7 /* Private */,
      10,    0,  266,    2, 0x08,    9 /* Private */,
      11,    1,  267,    2, 0x08,   10 /* Private */,
      13,    1,  270,    2, 0x08,   12 /* Private */,
      16,    1,  273,    2, 0x08,   14 /* Private */,
      19,    1,  276,    2, 0x08,   16 /* Private */,
      21,    1,  279,    2, 0x08,   18 /* Private */,
      23,    1,  282,    2, 0x08,   20 /* Private */,
      24,    1,  285,    2, 0x08,   22 /* Private */,
      27,    1,  288,    2, 0x08,   24 /* Private */,
      30,    2,  291,    2, 0x08,   26 /* Private */,
      31,    1,  296,    2, 0x08,   29 /* Private */,
      33,    1,  299,    2, 0x08,   31 /* Private */,
      36,    1,  302,    2, 0x08,   33 /* Private */,
      39,    1,  305,    2, 0x08,   35 /* Private */,
      42,    1,  308,    2, 0x08,   37 /* Private */,
      45,    2,  311,    2, 0x08,   39 /* Private */,
      48,    2,  316,    2, 0x08,   42 /* Private */,
      51,    2,  321,    2, 0x08,   45 /* Private */,
      52,    1,  326,    2, 0x08,   48 /* Private */,
      54,    1,  329,    2, 0x08,   50 /* Private */,
      57,    1,  332,    2, 0x08,   52 /* Private */,
      60,    1,  335,    2, 0x08,   54 /* Private */,
      63,    1,  338,    2, 0x08,   56 /* Private */,
      65,    1,  341,    2, 0x08,   58 /* Private */,
      67,    1,  344,    2, 0x08,   60 /* Private */,
      69,    1,  347,    2, 0x08,   62 /* Private */,
      72,    2,  350,    2, 0x08,   64 /* Private */,
      74,    1,  355,    2, 0x08,   67 /* Private */,
      77,    1,  358,    2, 0x08,   69 /* Private */,
      78,    2,  361,    2, 0x08,   71 /* Private */,
      81,    1,  366,    2, 0x08,   74 /* Private */,
      84,    1,  369,    2, 0x08,   76 /* Private */,
      86,    3,  372,    2, 0x08,   78 /* Private */,
      88,    1,  379,    2, 0x08,   82 /* Private */,
      89,    1,  382,    2, 0x08,   84 /* Private */,
      91,    1,  385,    2, 0x08,   86 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   12,
    QMetaType::Void, 0x80000000 | 14,   15,
    QMetaType::Void, 0x80000000 | 17,   18,
    QMetaType::Void, QMetaType::QString,   20,
    QMetaType::Void, QMetaType::Int,   22,
    QMetaType::Void, 0x80000000 | 14,   15,
    QMetaType::Void, 0x80000000 | 25,   26,
    QMetaType::Void, 0x80000000 | 28,   29,
    QMetaType::Void, 0x80000000 | 25, 0x80000000 | 28,   26,   29,
    QMetaType::Void, QMetaType::QStringList,   32,
    QMetaType::Void, 0x80000000 | 34,   35,
    QMetaType::Void, 0x80000000 | 37,   38,
    QMetaType::Void, 0x80000000 | 40,   41,
    QMetaType::Void, 0x80000000 | 43,   44,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   46,   47,
    QMetaType::Void, QMetaType::QString, QMetaType::Double,   49,   50,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 34,   49,   35,
    QMetaType::Void, QMetaType::Bool,   53,
    QMetaType::Void, 0x80000000 | 55,   56,
    QMetaType::Void, 0x80000000 | 58,   59,
    QMetaType::Void, 0x80000000 | 61,   62,
    QMetaType::Void, 0x80000000 | 64,   26,
    QMetaType::Void, QMetaType::QJsonObject,   66,
    QMetaType::Void, QMetaType::QJsonObject,   68,
    QMetaType::Void, 0x80000000 | 70,   71,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   73,   66,
    QMetaType::Void, 0x80000000 | 75,   76,
    QMetaType::Void, 0x80000000 | 14,   15,
    QMetaType::Void, QMetaType::QString, QMetaType::QJsonObject,   79,   80,
    QMetaType::Void, 0x80000000 | 82,   83,
    QMetaType::Void, QMetaType::QString,   85,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::Double,   85,   87,   50,
    QMetaType::Void, QMetaType::QString,   85,
    QMetaType::Void, QMetaType::QStringList,   90,
    QMetaType::Void, QMetaType::QJsonObject,   92,

       0        // eod
};

Q_CONSTINIT const QMetaObject fincept::screens::PolymarketScreen::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_ZN7fincept7screens16PolymarketScreenE.offsetsAndSizes,
    qt_meta_data_ZN7fincept7screens16PolymarketScreenE,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_tag_ZN7fincept7screens16PolymarketScreenE_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<PolymarketScreen, std::true_type>,
        // method 'on_view_changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'on_category_changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'on_search_submitted'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'on_sort_changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'on_refresh'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_exchange_changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'on_market_selected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const fincept::services::prediction::PredictionMarket &, std::false_type>,
        // method 'on_event_selected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const fincept::services::prediction::PredictionEvent &, std::false_type>,
        // method 'on_interval_changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'on_outcome_changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_related_market_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const fincept::services::prediction::PredictionMarket &, std::false_type>,
        // method 'on_markets_ready'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QVector<fincept::services::prediction::PredictionMarket> &, std::false_type>,
        // method 'on_events_ready'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QVector<fincept::services::prediction::PredictionEvent> &, std::false_type>,
        // method 'on_search_results_ready'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QVector<fincept::services::prediction::PredictionMarket> &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QVector<fincept::services::prediction::PredictionEvent> &, std::false_type>,
        // method 'on_tags_ready'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QStringList &, std::false_type>,
        // method 'on_order_book_ready'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const fincept::services::prediction::PredictionOrderBook &, std::false_type>,
        // method 'on_price_history_ready'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const fincept::services::prediction::PriceHistory &, std::false_type>,
        // method 'on_trades_ready'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QVector<fincept::services::prediction::PredictionTrade> &, std::false_type>,
        // method 'on_leaderboard_ready'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QVariantList &, std::false_type>,
        // method 'on_adapter_error'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'on_ws_price_updated'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        // method 'on_ws_orderbook_updated'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const fincept::services::prediction::PredictionOrderBook &, std::false_type>,
        // method 'on_ws_connection_changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'on_price_summary_received'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const fincept::services::polymarket::PriceSummary &, std::false_type>,
        // method 'on_top_holders_received'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QVector<fincept::services::polymarket::TopHolder> &, std::false_type>,
        // method 'on_comments_received'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QVector<fincept::services::polymarket::Comment> &, std::false_type>,
        // method 'on_related_markets_received'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QVector<fincept::services::polymarket::Market> &, std::false_type>,
        // method 'on_kalshi_exchange_status'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QJsonObject &, std::false_type>,
        // method 'on_kalshi_exchange_schedule'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QJsonObject &, std::false_type>,
        // method 'on_kalshi_ws_trade'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const fincept::services::prediction::PredictionTrade &, std::false_type>,
        // method 'on_kalshi_market_lifecycle'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'on_kalshi_batch_candles'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QHash<QString,fincept::services::prediction::PriceHistory> &, std::false_type>,
        // method 'on_kalshi_market_detail'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const fincept::services::prediction::PredictionMarket &, std::false_type>,
        // method 'on_kalshi_series_detail'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QJsonObject &, std::false_type>,
        // method 'on_open_orders_ready'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QVector<fincept::services::prediction::OpenOrder> &, std::false_type>,
        // method 'on_order_refresh_requested'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'on_order_amend_requested'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        // method 'on_order_cancel_requested'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'on_orders_cancel_all_requested'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QStringList &, std::false_type>,
        // method 'on_kalshi_single_order'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QJsonObject &, std::false_type>
    >,
    nullptr
} };

void fincept::screens::PolymarketScreen::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<PolymarketScreen *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->on_view_changed((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 1: _t->on_category_changed((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 2: _t->on_search_submitted((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 3: _t->on_sort_changed((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 4: _t->on_refresh(); break;
        case 5: _t->on_exchange_changed((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 6: _t->on_market_selected((*reinterpret_cast< std::add_pointer_t<fincept::services::prediction::PredictionMarket>>(_a[1]))); break;
        case 7: _t->on_event_selected((*reinterpret_cast< std::add_pointer_t<fincept::services::prediction::PredictionEvent>>(_a[1]))); break;
        case 8: _t->on_interval_changed((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 9: _t->on_outcome_changed((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 10: _t->on_related_market_clicked((*reinterpret_cast< std::add_pointer_t<fincept::services::prediction::PredictionMarket>>(_a[1]))); break;
        case 11: _t->on_markets_ready((*reinterpret_cast< std::add_pointer_t<QList<fincept::services::prediction::PredictionMarket>>>(_a[1]))); break;
        case 12: _t->on_events_ready((*reinterpret_cast< std::add_pointer_t<QList<fincept::services::prediction::PredictionEvent>>>(_a[1]))); break;
        case 13: _t->on_search_results_ready((*reinterpret_cast< std::add_pointer_t<QList<fincept::services::prediction::PredictionMarket>>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QList<fincept::services::prediction::PredictionEvent>>>(_a[2]))); break;
        case 14: _t->on_tags_ready((*reinterpret_cast< std::add_pointer_t<QStringList>>(_a[1]))); break;
        case 15: _t->on_order_book_ready((*reinterpret_cast< std::add_pointer_t<fincept::services::prediction::PredictionOrderBook>>(_a[1]))); break;
        case 16: _t->on_price_history_ready((*reinterpret_cast< std::add_pointer_t<fincept::services::prediction::PriceHistory>>(_a[1]))); break;
        case 17: _t->on_trades_ready((*reinterpret_cast< std::add_pointer_t<QList<fincept::services::prediction::PredictionTrade>>>(_a[1]))); break;
        case 18: _t->on_leaderboard_ready((*reinterpret_cast< std::add_pointer_t<QVariantList>>(_a[1]))); break;
        case 19: _t->on_adapter_error((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 20: _t->on_ws_price_updated((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<double>>(_a[2]))); break;
        case 21: _t->on_ws_orderbook_updated((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<fincept::services::prediction::PredictionOrderBook>>(_a[2]))); break;
        case 22: _t->on_ws_connection_changed((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 23: _t->on_price_summary_received((*reinterpret_cast< std::add_pointer_t<fincept::services::polymarket::PriceSummary>>(_a[1]))); break;
        case 24: _t->on_top_holders_received((*reinterpret_cast< std::add_pointer_t<QList<fincept::services::polymarket::TopHolder>>>(_a[1]))); break;
        case 25: _t->on_comments_received((*reinterpret_cast< std::add_pointer_t<QList<fincept::services::polymarket::Comment>>>(_a[1]))); break;
        case 26: _t->on_related_markets_received((*reinterpret_cast< std::add_pointer_t<QList<fincept::services::polymarket::Market>>>(_a[1]))); break;
        case 27: _t->on_kalshi_exchange_status((*reinterpret_cast< std::add_pointer_t<QJsonObject>>(_a[1]))); break;
        case 28: _t->on_kalshi_exchange_schedule((*reinterpret_cast< std::add_pointer_t<QJsonObject>>(_a[1]))); break;
        case 29: _t->on_kalshi_ws_trade((*reinterpret_cast< std::add_pointer_t<fincept::services::prediction::PredictionTrade>>(_a[1]))); break;
        case 30: _t->on_kalshi_market_lifecycle((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 31: _t->on_kalshi_batch_candles((*reinterpret_cast< std::add_pointer_t<QHash<QString,fincept::services::prediction::PriceHistory>>>(_a[1]))); break;
        case 32: _t->on_kalshi_market_detail((*reinterpret_cast< std::add_pointer_t<fincept::services::prediction::PredictionMarket>>(_a[1]))); break;
        case 33: _t->on_kalshi_series_detail((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QJsonObject>>(_a[2]))); break;
        case 34: _t->on_open_orders_ready((*reinterpret_cast< std::add_pointer_t<QList<fincept::services::prediction::OpenOrder>>>(_a[1]))); break;
        case 35: _t->on_order_refresh_requested((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 36: _t->on_order_amend_requested((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<double>>(_a[3]))); break;
        case 37: _t->on_order_cancel_requested((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 38: _t->on_orders_cancel_all_requested((*reinterpret_cast< std::add_pointer_t<QStringList>>(_a[1]))); break;
        case 39: _t->on_kalshi_single_order((*reinterpret_cast< std::add_pointer_t<QJsonObject>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< fincept::services::prediction::PredictionMarket >(); break;
            }
            break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< fincept::services::prediction::PredictionEvent >(); break;
            }
            break;
        case 10:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< fincept::services::prediction::PredictionMarket >(); break;
            }
            break;
        case 11:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QList<fincept::services::prediction::PredictionMarket> >(); break;
            }
            break;
        case 12:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QList<fincept::services::prediction::PredictionEvent> >(); break;
            }
            break;
        case 13:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QList<fincept::services::prediction::PredictionEvent> >(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QList<fincept::services::prediction::PredictionMarket> >(); break;
            }
            break;
        case 15:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< fincept::services::prediction::PredictionOrderBook >(); break;
            }
            break;
        case 16:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< fincept::services::prediction::PriceHistory >(); break;
            }
            break;
        case 17:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QList<fincept::services::prediction::PredictionTrade> >(); break;
            }
            break;
        case 21:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< fincept::services::prediction::PredictionOrderBook >(); break;
            }
            break;
        case 29:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< fincept::services::prediction::PredictionTrade >(); break;
            }
            break;
        case 32:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< fincept::services::prediction::PredictionMarket >(); break;
            }
            break;
        case 34:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QList<fincept::services::prediction::OpenOrder> >(); break;
            }
            break;
        }
    }
}

const QMetaObject *fincept::screens::PolymarketScreen::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *fincept::screens::PolymarketScreen::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ZN7fincept7screens16PolymarketScreenE.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "fincept::screens::IStatefulScreen"))
        return static_cast< fincept::screens::IStatefulScreen*>(this);
    return QWidget::qt_metacast(_clname);
}

int fincept::screens::PolymarketScreen::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 40)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 40;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 40)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 40;
    }
    return _id;
}
QT_WARNING_POP
