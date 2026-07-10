/****************************************************************************
** Meta object code from reading C++ file 'PredictionExchangeAdapter.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../upstream/fincept-qt/src/services/prediction/PredictionExchangeAdapter.h"
#include <QtCore/qmetatype.h>
#include <QtCore/QList>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'PredictionExchangeAdapter.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN7fincept8services10prediction25PredictionExchangeAdapterE_t {};
} // unnamed namespace


#ifdef QT_MOC_HAS_STRINGDATA
static constexpr auto qt_meta_stringdata_ZN7fincept8services10prediction25PredictionExchangeAdapterE = QtMocHelpers::stringData(
    "fincept::services::prediction::PredictionExchangeAdapter",
    "markets_ready",
    "",
    "QList<fincept::services::prediction::PredictionMarket>",
    "markets",
    "events_ready",
    "QList<fincept::services::prediction::PredictionEvent>",
    "events",
    "search_results_ready",
    "tags_ready",
    "tags",
    "market_detail_ready",
    "fincept::services::prediction::PredictionMarket",
    "market",
    "event_detail_ready",
    "fincept::services::prediction::PredictionEvent",
    "event",
    "order_book_ready",
    "fincept::services::prediction::PredictionOrderBook",
    "book",
    "price_history_ready",
    "fincept::services::prediction::PriceHistory",
    "history",
    "recent_trades_ready",
    "QList<fincept::services::prediction::PredictionTrade>",
    "trades",
    "top_holders_ready",
    "QVariantList",
    "holders",
    "leaderboard_ready",
    "entries",
    "ws_price_updated",
    "asset_id",
    "price",
    "ws_orderbook_updated",
    "ws_connection_changed",
    "connected",
    "credentials_changed",
    "balance_ready",
    "fincept::services::prediction::AccountBalance",
    "balance",
    "positions_ready",
    "QList<fincept::services::prediction::PredictionPosition>",
    "positions",
    "open_orders_ready",
    "QList<fincept::services::prediction::OpenOrder>",
    "orders",
    "order_placed",
    "fincept::services::prediction::OrderResult",
    "result",
    "order_cancelled",
    "order_id",
    "ok",
    "error_message",
    "account_activity_ready",
    "activities",
    "error_occurred",
    "context",
    "message"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA

Q_CONSTINIT static const uint qt_meta_data_ZN7fincept8services10prediction25PredictionExchangeAdapterE[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      22,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      22,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,  146,    2, 0x06,    1 /* Public */,
       5,    1,  149,    2, 0x06,    3 /* Public */,
       8,    2,  152,    2, 0x06,    5 /* Public */,
       9,    1,  157,    2, 0x06,    8 /* Public */,
      11,    1,  160,    2, 0x06,   10 /* Public */,
      14,    1,  163,    2, 0x06,   12 /* Public */,
      17,    1,  166,    2, 0x06,   14 /* Public */,
      20,    1,  169,    2, 0x06,   16 /* Public */,
      23,    1,  172,    2, 0x06,   18 /* Public */,
      26,    1,  175,    2, 0x06,   20 /* Public */,
      29,    1,  178,    2, 0x06,   22 /* Public */,
      31,    2,  181,    2, 0x06,   24 /* Public */,
      34,    2,  186,    2, 0x06,   27 /* Public */,
      35,    1,  191,    2, 0x06,   30 /* Public */,
      37,    0,  194,    2, 0x06,   32 /* Public */,
      38,    1,  195,    2, 0x06,   33 /* Public */,
      41,    1,  198,    2, 0x06,   35 /* Public */,
      44,    1,  201,    2, 0x06,   37 /* Public */,
      47,    1,  204,    2, 0x06,   39 /* Public */,
      50,    3,  207,    2, 0x06,   41 /* Public */,
      54,    1,  214,    2, 0x06,   45 /* Public */,
      56,    2,  217,    2, 0x06,   47 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 6,    4,    7,
    QMetaType::Void, QMetaType::QStringList,   10,
    QMetaType::Void, 0x80000000 | 12,   13,
    QMetaType::Void, 0x80000000 | 15,   16,
    QMetaType::Void, 0x80000000 | 18,   19,
    QMetaType::Void, 0x80000000 | 21,   22,
    QMetaType::Void, 0x80000000 | 24,   25,
    QMetaType::Void, 0x80000000 | 27,   28,
    QMetaType::Void, 0x80000000 | 27,   30,
    QMetaType::Void, QMetaType::QString, QMetaType::Double,   32,   33,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 18,   32,   19,
    QMetaType::Void, QMetaType::Bool,   36,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 39,   40,
    QMetaType::Void, 0x80000000 | 42,   43,
    QMetaType::Void, 0x80000000 | 45,   46,
    QMetaType::Void, 0x80000000 | 48,   49,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool, QMetaType::QString,   51,   52,   53,
    QMetaType::Void, 0x80000000 | 27,   55,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   57,   58,

       0        // eod
};

Q_CONSTINIT const QMetaObject fincept::services::prediction::PredictionExchangeAdapter::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_ZN7fincept8services10prediction25PredictionExchangeAdapterE.offsetsAndSizes,
    qt_meta_data_ZN7fincept8services10prediction25PredictionExchangeAdapterE,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_tag_ZN7fincept8services10prediction25PredictionExchangeAdapterE_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<PredictionExchangeAdapter, std::true_type>,
        // method 'markets_ready'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QVector<fincept::services::prediction::PredictionMarket> &, std::false_type>,
        // method 'events_ready'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QVector<fincept::services::prediction::PredictionEvent> &, std::false_type>,
        // method 'search_results_ready'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QVector<fincept::services::prediction::PredictionMarket> &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QVector<fincept::services::prediction::PredictionEvent> &, std::false_type>,
        // method 'tags_ready'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QStringList &, std::false_type>,
        // method 'market_detail_ready'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const fincept::services::prediction::PredictionMarket &, std::false_type>,
        // method 'event_detail_ready'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const fincept::services::prediction::PredictionEvent &, std::false_type>,
        // method 'order_book_ready'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const fincept::services::prediction::PredictionOrderBook &, std::false_type>,
        // method 'price_history_ready'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const fincept::services::prediction::PriceHistory &, std::false_type>,
        // method 'recent_trades_ready'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QVector<fincept::services::prediction::PredictionTrade> &, std::false_type>,
        // method 'top_holders_ready'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QVariantList &, std::false_type>,
        // method 'leaderboard_ready'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QVariantList &, std::false_type>,
        // method 'ws_price_updated'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        // method 'ws_orderbook_updated'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const fincept::services::prediction::PredictionOrderBook &, std::false_type>,
        // method 'ws_connection_changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'credentials_changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'balance_ready'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const fincept::services::prediction::AccountBalance &, std::false_type>,
        // method 'positions_ready'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QVector<fincept::services::prediction::PredictionPosition> &, std::false_type>,
        // method 'open_orders_ready'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QVector<fincept::services::prediction::OpenOrder> &, std::false_type>,
        // method 'order_placed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const fincept::services::prediction::OrderResult &, std::false_type>,
        // method 'order_cancelled'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'account_activity_ready'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QVariantList &, std::false_type>,
        // method 'error_occurred'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>
    >,
    nullptr
} };

void fincept::services::prediction::PredictionExchangeAdapter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<PredictionExchangeAdapter *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->markets_ready((*reinterpret_cast< std::add_pointer_t<QList<fincept::services::prediction::PredictionMarket>>>(_a[1]))); break;
        case 1: _t->events_ready((*reinterpret_cast< std::add_pointer_t<QList<fincept::services::prediction::PredictionEvent>>>(_a[1]))); break;
        case 2: _t->search_results_ready((*reinterpret_cast< std::add_pointer_t<QList<fincept::services::prediction::PredictionMarket>>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QList<fincept::services::prediction::PredictionEvent>>>(_a[2]))); break;
        case 3: _t->tags_ready((*reinterpret_cast< std::add_pointer_t<QStringList>>(_a[1]))); break;
        case 4: _t->market_detail_ready((*reinterpret_cast< std::add_pointer_t<fincept::services::prediction::PredictionMarket>>(_a[1]))); break;
        case 5: _t->event_detail_ready((*reinterpret_cast< std::add_pointer_t<fincept::services::prediction::PredictionEvent>>(_a[1]))); break;
        case 6: _t->order_book_ready((*reinterpret_cast< std::add_pointer_t<fincept::services::prediction::PredictionOrderBook>>(_a[1]))); break;
        case 7: _t->price_history_ready((*reinterpret_cast< std::add_pointer_t<fincept::services::prediction::PriceHistory>>(_a[1]))); break;
        case 8: _t->recent_trades_ready((*reinterpret_cast< std::add_pointer_t<QList<fincept::services::prediction::PredictionTrade>>>(_a[1]))); break;
        case 9: _t->top_holders_ready((*reinterpret_cast< std::add_pointer_t<QVariantList>>(_a[1]))); break;
        case 10: _t->leaderboard_ready((*reinterpret_cast< std::add_pointer_t<QVariantList>>(_a[1]))); break;
        case 11: _t->ws_price_updated((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<double>>(_a[2]))); break;
        case 12: _t->ws_orderbook_updated((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<fincept::services::prediction::PredictionOrderBook>>(_a[2]))); break;
        case 13: _t->ws_connection_changed((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 14: _t->credentials_changed(); break;
        case 15: _t->balance_ready((*reinterpret_cast< std::add_pointer_t<fincept::services::prediction::AccountBalance>>(_a[1]))); break;
        case 16: _t->positions_ready((*reinterpret_cast< std::add_pointer_t<QList<fincept::services::prediction::PredictionPosition>>>(_a[1]))); break;
        case 17: _t->open_orders_ready((*reinterpret_cast< std::add_pointer_t<QList<fincept::services::prediction::OpenOrder>>>(_a[1]))); break;
        case 18: _t->order_placed((*reinterpret_cast< std::add_pointer_t<fincept::services::prediction::OrderResult>>(_a[1]))); break;
        case 19: _t->order_cancelled((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3]))); break;
        case 20: _t->account_activity_ready((*reinterpret_cast< std::add_pointer_t<QVariantList>>(_a[1]))); break;
        case 21: _t->error_occurred((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QList<fincept::services::prediction::PredictionMarket> >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QList<fincept::services::prediction::PredictionEvent> >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QList<fincept::services::prediction::PredictionEvent> >(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QList<fincept::services::prediction::PredictionMarket> >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< fincept::services::prediction::PredictionMarket >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< fincept::services::prediction::PredictionEvent >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< fincept::services::prediction::PredictionOrderBook >(); break;
            }
            break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< fincept::services::prediction::PriceHistory >(); break;
            }
            break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QList<fincept::services::prediction::PredictionTrade> >(); break;
            }
            break;
        case 12:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< fincept::services::prediction::PredictionOrderBook >(); break;
            }
            break;
        case 15:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< fincept::services::prediction::AccountBalance >(); break;
            }
            break;
        case 16:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QList<fincept::services::prediction::PredictionPosition> >(); break;
            }
            break;
        case 17:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QList<fincept::services::prediction::OpenOrder> >(); break;
            }
            break;
        case 18:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< fincept::services::prediction::OrderResult >(); break;
            }
            break;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _q_method_type = void (PredictionExchangeAdapter::*)(const QVector<fincept::services::prediction::PredictionMarket> & );
            if (_q_method_type _q_method = &PredictionExchangeAdapter::markets_ready; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _q_method_type = void (PredictionExchangeAdapter::*)(const QVector<fincept::services::prediction::PredictionEvent> & );
            if (_q_method_type _q_method = &PredictionExchangeAdapter::events_ready; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _q_method_type = void (PredictionExchangeAdapter::*)(const QVector<fincept::services::prediction::PredictionMarket> & , const QVector<fincept::services::prediction::PredictionEvent> & );
            if (_q_method_type _q_method = &PredictionExchangeAdapter::search_results_ready; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _q_method_type = void (PredictionExchangeAdapter::*)(const QStringList & );
            if (_q_method_type _q_method = &PredictionExchangeAdapter::tags_ready; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _q_method_type = void (PredictionExchangeAdapter::*)(const fincept::services::prediction::PredictionMarket & );
            if (_q_method_type _q_method = &PredictionExchangeAdapter::market_detail_ready; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _q_method_type = void (PredictionExchangeAdapter::*)(const fincept::services::prediction::PredictionEvent & );
            if (_q_method_type _q_method = &PredictionExchangeAdapter::event_detail_ready; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
        {
            using _q_method_type = void (PredictionExchangeAdapter::*)(const fincept::services::prediction::PredictionOrderBook & );
            if (_q_method_type _q_method = &PredictionExchangeAdapter::order_book_ready; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 6;
                return;
            }
        }
        {
            using _q_method_type = void (PredictionExchangeAdapter::*)(const fincept::services::prediction::PriceHistory & );
            if (_q_method_type _q_method = &PredictionExchangeAdapter::price_history_ready; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 7;
                return;
            }
        }
        {
            using _q_method_type = void (PredictionExchangeAdapter::*)(const QVector<fincept::services::prediction::PredictionTrade> & );
            if (_q_method_type _q_method = &PredictionExchangeAdapter::recent_trades_ready; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 8;
                return;
            }
        }
        {
            using _q_method_type = void (PredictionExchangeAdapter::*)(const QVariantList & );
            if (_q_method_type _q_method = &PredictionExchangeAdapter::top_holders_ready; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 9;
                return;
            }
        }
        {
            using _q_method_type = void (PredictionExchangeAdapter::*)(const QVariantList & );
            if (_q_method_type _q_method = &PredictionExchangeAdapter::leaderboard_ready; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 10;
                return;
            }
        }
        {
            using _q_method_type = void (PredictionExchangeAdapter::*)(const QString & , double );
            if (_q_method_type _q_method = &PredictionExchangeAdapter::ws_price_updated; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 11;
                return;
            }
        }
        {
            using _q_method_type = void (PredictionExchangeAdapter::*)(const QString & , const fincept::services::prediction::PredictionOrderBook & );
            if (_q_method_type _q_method = &PredictionExchangeAdapter::ws_orderbook_updated; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 12;
                return;
            }
        }
        {
            using _q_method_type = void (PredictionExchangeAdapter::*)(bool );
            if (_q_method_type _q_method = &PredictionExchangeAdapter::ws_connection_changed; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 13;
                return;
            }
        }
        {
            using _q_method_type = void (PredictionExchangeAdapter::*)();
            if (_q_method_type _q_method = &PredictionExchangeAdapter::credentials_changed; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 14;
                return;
            }
        }
        {
            using _q_method_type = void (PredictionExchangeAdapter::*)(const fincept::services::prediction::AccountBalance & );
            if (_q_method_type _q_method = &PredictionExchangeAdapter::balance_ready; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 15;
                return;
            }
        }
        {
            using _q_method_type = void (PredictionExchangeAdapter::*)(const QVector<fincept::services::prediction::PredictionPosition> & );
            if (_q_method_type _q_method = &PredictionExchangeAdapter::positions_ready; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 16;
                return;
            }
        }
        {
            using _q_method_type = void (PredictionExchangeAdapter::*)(const QVector<fincept::services::prediction::OpenOrder> & );
            if (_q_method_type _q_method = &PredictionExchangeAdapter::open_orders_ready; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 17;
                return;
            }
        }
        {
            using _q_method_type = void (PredictionExchangeAdapter::*)(const fincept::services::prediction::OrderResult & );
            if (_q_method_type _q_method = &PredictionExchangeAdapter::order_placed; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 18;
                return;
            }
        }
        {
            using _q_method_type = void (PredictionExchangeAdapter::*)(const QString & , bool , const QString & );
            if (_q_method_type _q_method = &PredictionExchangeAdapter::order_cancelled; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 19;
                return;
            }
        }
        {
            using _q_method_type = void (PredictionExchangeAdapter::*)(const QVariantList & );
            if (_q_method_type _q_method = &PredictionExchangeAdapter::account_activity_ready; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 20;
                return;
            }
        }
        {
            using _q_method_type = void (PredictionExchangeAdapter::*)(const QString & , const QString & );
            if (_q_method_type _q_method = &PredictionExchangeAdapter::error_occurred; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 21;
                return;
            }
        }
    }
}

const QMetaObject *fincept::services::prediction::PredictionExchangeAdapter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *fincept::services::prediction::PredictionExchangeAdapter::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ZN7fincept8services10prediction25PredictionExchangeAdapterE.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int fincept::services::prediction::PredictionExchangeAdapter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 22)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 22;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 22)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 22;
    }
    return _id;
}

// SIGNAL 0
void fincept::services::prediction::PredictionExchangeAdapter::markets_ready(const QVector<fincept::services::prediction::PredictionMarket> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void fincept::services::prediction::PredictionExchangeAdapter::events_ready(const QVector<fincept::services::prediction::PredictionEvent> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void fincept::services::prediction::PredictionExchangeAdapter::search_results_ready(const QVector<fincept::services::prediction::PredictionMarket> & _t1, const QVector<fincept::services::prediction::PredictionEvent> & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void fincept::services::prediction::PredictionExchangeAdapter::tags_ready(const QStringList & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void fincept::services::prediction::PredictionExchangeAdapter::market_detail_ready(const fincept::services::prediction::PredictionMarket & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void fincept::services::prediction::PredictionExchangeAdapter::event_detail_ready(const fincept::services::prediction::PredictionEvent & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void fincept::services::prediction::PredictionExchangeAdapter::order_book_ready(const fincept::services::prediction::PredictionOrderBook & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void fincept::services::prediction::PredictionExchangeAdapter::price_history_ready(const fincept::services::prediction::PriceHistory & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void fincept::services::prediction::PredictionExchangeAdapter::recent_trades_ready(const QVector<fincept::services::prediction::PredictionTrade> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void fincept::services::prediction::PredictionExchangeAdapter::top_holders_ready(const QVariantList & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void fincept::services::prediction::PredictionExchangeAdapter::leaderboard_ready(const QVariantList & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void fincept::services::prediction::PredictionExchangeAdapter::ws_price_updated(const QString & _t1, double _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void fincept::services::prediction::PredictionExchangeAdapter::ws_orderbook_updated(const QString & _t1, const fincept::services::prediction::PredictionOrderBook & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void fincept::services::prediction::PredictionExchangeAdapter::ws_connection_changed(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void fincept::services::prediction::PredictionExchangeAdapter::credentials_changed()
{
    QMetaObject::activate(this, &staticMetaObject, 14, nullptr);
}

// SIGNAL 15
void fincept::services::prediction::PredictionExchangeAdapter::balance_ready(const fincept::services::prediction::AccountBalance & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}

// SIGNAL 16
void fincept::services::prediction::PredictionExchangeAdapter::positions_ready(const QVector<fincept::services::prediction::PredictionPosition> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}

// SIGNAL 17
void fincept::services::prediction::PredictionExchangeAdapter::open_orders_ready(const QVector<fincept::services::prediction::OpenOrder> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 17, _a);
}

// SIGNAL 18
void fincept::services::prediction::PredictionExchangeAdapter::order_placed(const fincept::services::prediction::OrderResult & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 18, _a);
}

// SIGNAL 19
void fincept::services::prediction::PredictionExchangeAdapter::order_cancelled(const QString & _t1, bool _t2, const QString & _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 19, _a);
}

// SIGNAL 20
void fincept::services::prediction::PredictionExchangeAdapter::account_activity_ready(const QVariantList & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 20, _a);
}

// SIGNAL 21
void fincept::services::prediction::PredictionExchangeAdapter::error_occurred(const QString & _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 21, _a);
}
QT_WARNING_POP
