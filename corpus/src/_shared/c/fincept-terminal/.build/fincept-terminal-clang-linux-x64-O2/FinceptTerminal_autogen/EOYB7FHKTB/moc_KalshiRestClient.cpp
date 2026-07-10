/****************************************************************************
** Meta object code from reading C++ file 'KalshiRestClient.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../upstream/fincept-qt/src/services/prediction/kalshi/KalshiRestClient.h"
#include <QtCore/qmetatype.h>
#include <QtCore/QList>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'KalshiRestClient.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN7fincept8services10prediction9kalshi_ns16KalshiRestClientE_t {};
} // unnamed namespace


#ifdef QT_MOC_HAS_STRINGDATA
static constexpr auto qt_meta_stringdata_ZN7fincept8services10prediction9kalshi_ns16KalshiRestClientE = QtMocHelpers::stringData(
    "fincept::services::prediction::kalshi_ns::KalshiRestClient",
    "markets_ready",
    "",
    "QList<fincept::services::prediction::PredictionMarket>",
    "markets",
    "next_cursor",
    "market_detail_ready",
    "fincept::services::prediction::PredictionMarket",
    "market",
    "events_ready",
    "QList<fincept::services::prediction::PredictionEvent>",
    "events",
    "event_detail_ready",
    "fincept::services::prediction::PredictionEvent",
    "event",
    "tags_ready",
    "series_tickers",
    "order_book_ready",
    "fincept::services::prediction::PredictionOrderBook",
    "yes_book",
    "no_book",
    "ticker",
    "price_history_ready",
    "fincept::services::prediction::PriceHistory",
    "yes_history",
    "trades_ready",
    "QList<fincept::services::prediction::PredictionTrade>",
    "trades",
    "exchange_status_ready",
    "status",
    "exchange_schedule_ready",
    "schedule",
    "series_detail_ready",
    "series",
    "series_fee_changes_ready",
    "fee_changes",
    "search_tags_ready",
    "tags_by_categories",
    "search_filters_ready",
    "filters",
    "batch_candlesticks_ready",
    "QHash<QString,fincept::services::prediction::PriceHistory>",
    "histories",
    "historical_markets_ready",
    "historical_candlesticks_ready",
    "history",
    "historical_trades_ready",
    "request_error",
    "context",
    "message"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA

Q_CONSTINIT static const uint qt_meta_data_ZN7fincept8services10prediction9kalshi_ns16KalshiRestClientE[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      19,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      19,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    2,  128,    2, 0x06,    1 /* Public */,
       6,    1,  133,    2, 0x06,    4 /* Public */,
       9,    2,  136,    2, 0x06,    6 /* Public */,
      12,    1,  141,    2, 0x06,    9 /* Public */,
      15,    1,  144,    2, 0x06,   11 /* Public */,
      17,    3,  147,    2, 0x06,   13 /* Public */,
      22,    2,  154,    2, 0x06,   17 /* Public */,
      25,    1,  159,    2, 0x06,   20 /* Public */,
      28,    1,  162,    2, 0x06,   22 /* Public */,
      30,    1,  165,    2, 0x06,   24 /* Public */,
      32,    1,  168,    2, 0x06,   26 /* Public */,
      34,    1,  171,    2, 0x06,   28 /* Public */,
      36,    1,  174,    2, 0x06,   30 /* Public */,
      38,    1,  177,    2, 0x06,   32 /* Public */,
      40,    1,  180,    2, 0x06,   34 /* Public */,
      43,    2,  183,    2, 0x06,   36 /* Public */,
      44,    2,  188,    2, 0x06,   39 /* Public */,
      46,    2,  193,    2, 0x06,   42 /* Public */,
      47,    2,  198,    2, 0x06,   45 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::QString,    4,    5,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, 0x80000000 | 10, QMetaType::QString,   11,    5,
    QMetaType::Void, 0x80000000 | 13,   14,
    QMetaType::Void, QMetaType::QStringList,   16,
    QMetaType::Void, 0x80000000 | 18, 0x80000000 | 18, QMetaType::QString,   19,   20,   21,
    QMetaType::Void, 0x80000000 | 23, QMetaType::QString,   24,   21,
    QMetaType::Void, 0x80000000 | 26,   27,
    QMetaType::Void, QMetaType::QJsonObject,   29,
    QMetaType::Void, QMetaType::QJsonObject,   31,
    QMetaType::Void, QMetaType::QJsonObject,   33,
    QMetaType::Void, QMetaType::QJsonArray,   35,
    QMetaType::Void, QMetaType::QJsonObject,   37,
    QMetaType::Void, QMetaType::QJsonObject,   39,
    QMetaType::Void, 0x80000000 | 41,   42,
    QMetaType::Void, 0x80000000 | 3, QMetaType::QString,    4,    5,
    QMetaType::Void, 0x80000000 | 23, QMetaType::QString,   45,   21,
    QMetaType::Void, 0x80000000 | 26, QMetaType::QString,   27,    5,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   48,   49,

       0        // eod
};

Q_CONSTINIT const QMetaObject fincept::services::prediction::kalshi_ns::KalshiRestClient::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_ZN7fincept8services10prediction9kalshi_ns16KalshiRestClientE.offsetsAndSizes,
    qt_meta_data_ZN7fincept8services10prediction9kalshi_ns16KalshiRestClientE,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_tag_ZN7fincept8services10prediction9kalshi_ns16KalshiRestClientE_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<KalshiRestClient, std::true_type>,
        // method 'markets_ready'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QVector<fincept::services::prediction::PredictionMarket> &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'market_detail_ready'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const fincept::services::prediction::PredictionMarket &, std::false_type>,
        // method 'events_ready'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QVector<fincept::services::prediction::PredictionEvent> &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'event_detail_ready'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const fincept::services::prediction::PredictionEvent &, std::false_type>,
        // method 'tags_ready'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QStringList &, std::false_type>,
        // method 'order_book_ready'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const fincept::services::prediction::PredictionOrderBook &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const fincept::services::prediction::PredictionOrderBook &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'price_history_ready'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const fincept::services::prediction::PriceHistory &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'trades_ready'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QVector<fincept::services::prediction::PredictionTrade> &, std::false_type>,
        // method 'exchange_status_ready'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QJsonObject &, std::false_type>,
        // method 'exchange_schedule_ready'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QJsonObject &, std::false_type>,
        // method 'series_detail_ready'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QJsonObject &, std::false_type>,
        // method 'series_fee_changes_ready'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QJsonArray &, std::false_type>,
        // method 'search_tags_ready'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QJsonObject &, std::false_type>,
        // method 'search_filters_ready'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QJsonObject &, std::false_type>,
        // method 'batch_candlesticks_ready'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QHash<QString,fincept::services::prediction::PriceHistory> &, std::false_type>,
        // method 'historical_markets_ready'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QVector<fincept::services::prediction::PredictionMarket> &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'historical_candlesticks_ready'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const fincept::services::prediction::PriceHistory &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'historical_trades_ready'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QVector<fincept::services::prediction::PredictionTrade> &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'request_error'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>
    >,
    nullptr
} };

void fincept::services::prediction::kalshi_ns::KalshiRestClient::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<KalshiRestClient *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->markets_ready((*reinterpret_cast< std::add_pointer_t<QList<fincept::services::prediction::PredictionMarket>>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 1: _t->market_detail_ready((*reinterpret_cast< std::add_pointer_t<fincept::services::prediction::PredictionMarket>>(_a[1]))); break;
        case 2: _t->events_ready((*reinterpret_cast< std::add_pointer_t<QList<fincept::services::prediction::PredictionEvent>>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 3: _t->event_detail_ready((*reinterpret_cast< std::add_pointer_t<fincept::services::prediction::PredictionEvent>>(_a[1]))); break;
        case 4: _t->tags_ready((*reinterpret_cast< std::add_pointer_t<QStringList>>(_a[1]))); break;
        case 5: _t->order_book_ready((*reinterpret_cast< std::add_pointer_t<fincept::services::prediction::PredictionOrderBook>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<fincept::services::prediction::PredictionOrderBook>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3]))); break;
        case 6: _t->price_history_ready((*reinterpret_cast< std::add_pointer_t<fincept::services::prediction::PriceHistory>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 7: _t->trades_ready((*reinterpret_cast< std::add_pointer_t<QList<fincept::services::prediction::PredictionTrade>>>(_a[1]))); break;
        case 8: _t->exchange_status_ready((*reinterpret_cast< std::add_pointer_t<QJsonObject>>(_a[1]))); break;
        case 9: _t->exchange_schedule_ready((*reinterpret_cast< std::add_pointer_t<QJsonObject>>(_a[1]))); break;
        case 10: _t->series_detail_ready((*reinterpret_cast< std::add_pointer_t<QJsonObject>>(_a[1]))); break;
        case 11: _t->series_fee_changes_ready((*reinterpret_cast< std::add_pointer_t<QJsonArray>>(_a[1]))); break;
        case 12: _t->search_tags_ready((*reinterpret_cast< std::add_pointer_t<QJsonObject>>(_a[1]))); break;
        case 13: _t->search_filters_ready((*reinterpret_cast< std::add_pointer_t<QJsonObject>>(_a[1]))); break;
        case 14: _t->batch_candlesticks_ready((*reinterpret_cast< std::add_pointer_t<QHash<QString,fincept::services::prediction::PriceHistory>>>(_a[1]))); break;
        case 15: _t->historical_markets_ready((*reinterpret_cast< std::add_pointer_t<QList<fincept::services::prediction::PredictionMarket>>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 16: _t->historical_candlesticks_ready((*reinterpret_cast< std::add_pointer_t<fincept::services::prediction::PriceHistory>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 17: _t->historical_trades_ready((*reinterpret_cast< std::add_pointer_t<QList<fincept::services::prediction::PredictionTrade>>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 18: _t->request_error((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
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
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< fincept::services::prediction::PredictionMarket >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QList<fincept::services::prediction::PredictionEvent> >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< fincept::services::prediction::PredictionEvent >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< fincept::services::prediction::PredictionOrderBook >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< fincept::services::prediction::PriceHistory >(); break;
            }
            break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QList<fincept::services::prediction::PredictionTrade> >(); break;
            }
            break;
        case 15:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QList<fincept::services::prediction::PredictionMarket> >(); break;
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
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _q_method_type = void (KalshiRestClient::*)(const QVector<fincept::services::prediction::PredictionMarket> & , const QString & );
            if (_q_method_type _q_method = &KalshiRestClient::markets_ready; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _q_method_type = void (KalshiRestClient::*)(const fincept::services::prediction::PredictionMarket & );
            if (_q_method_type _q_method = &KalshiRestClient::market_detail_ready; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _q_method_type = void (KalshiRestClient::*)(const QVector<fincept::services::prediction::PredictionEvent> & , const QString & );
            if (_q_method_type _q_method = &KalshiRestClient::events_ready; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _q_method_type = void (KalshiRestClient::*)(const fincept::services::prediction::PredictionEvent & );
            if (_q_method_type _q_method = &KalshiRestClient::event_detail_ready; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _q_method_type = void (KalshiRestClient::*)(const QStringList & );
            if (_q_method_type _q_method = &KalshiRestClient::tags_ready; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _q_method_type = void (KalshiRestClient::*)(const fincept::services::prediction::PredictionOrderBook & , const fincept::services::prediction::PredictionOrderBook & , const QString & );
            if (_q_method_type _q_method = &KalshiRestClient::order_book_ready; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
        {
            using _q_method_type = void (KalshiRestClient::*)(const fincept::services::prediction::PriceHistory & , const QString & );
            if (_q_method_type _q_method = &KalshiRestClient::price_history_ready; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 6;
                return;
            }
        }
        {
            using _q_method_type = void (KalshiRestClient::*)(const QVector<fincept::services::prediction::PredictionTrade> & );
            if (_q_method_type _q_method = &KalshiRestClient::trades_ready; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 7;
                return;
            }
        }
        {
            using _q_method_type = void (KalshiRestClient::*)(const QJsonObject & );
            if (_q_method_type _q_method = &KalshiRestClient::exchange_status_ready; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 8;
                return;
            }
        }
        {
            using _q_method_type = void (KalshiRestClient::*)(const QJsonObject & );
            if (_q_method_type _q_method = &KalshiRestClient::exchange_schedule_ready; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 9;
                return;
            }
        }
        {
            using _q_method_type = void (KalshiRestClient::*)(const QJsonObject & );
            if (_q_method_type _q_method = &KalshiRestClient::series_detail_ready; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 10;
                return;
            }
        }
        {
            using _q_method_type = void (KalshiRestClient::*)(const QJsonArray & );
            if (_q_method_type _q_method = &KalshiRestClient::series_fee_changes_ready; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 11;
                return;
            }
        }
        {
            using _q_method_type = void (KalshiRestClient::*)(const QJsonObject & );
            if (_q_method_type _q_method = &KalshiRestClient::search_tags_ready; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 12;
                return;
            }
        }
        {
            using _q_method_type = void (KalshiRestClient::*)(const QJsonObject & );
            if (_q_method_type _q_method = &KalshiRestClient::search_filters_ready; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 13;
                return;
            }
        }
        {
            using _q_method_type = void (KalshiRestClient::*)(const QHash<QString,fincept::services::prediction::PriceHistory> & );
            if (_q_method_type _q_method = &KalshiRestClient::batch_candlesticks_ready; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 14;
                return;
            }
        }
        {
            using _q_method_type = void (KalshiRestClient::*)(const QVector<fincept::services::prediction::PredictionMarket> & , const QString & );
            if (_q_method_type _q_method = &KalshiRestClient::historical_markets_ready; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 15;
                return;
            }
        }
        {
            using _q_method_type = void (KalshiRestClient::*)(const fincept::services::prediction::PriceHistory & , const QString & );
            if (_q_method_type _q_method = &KalshiRestClient::historical_candlesticks_ready; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 16;
                return;
            }
        }
        {
            using _q_method_type = void (KalshiRestClient::*)(const QVector<fincept::services::prediction::PredictionTrade> & , const QString & );
            if (_q_method_type _q_method = &KalshiRestClient::historical_trades_ready; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 17;
                return;
            }
        }
        {
            using _q_method_type = void (KalshiRestClient::*)(const QString & , const QString & );
            if (_q_method_type _q_method = &KalshiRestClient::request_error; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 18;
                return;
            }
        }
    }
}

const QMetaObject *fincept::services::prediction::kalshi_ns::KalshiRestClient::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *fincept::services::prediction::kalshi_ns::KalshiRestClient::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ZN7fincept8services10prediction9kalshi_ns16KalshiRestClientE.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int fincept::services::prediction::kalshi_ns::KalshiRestClient::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 19)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 19;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 19)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 19;
    }
    return _id;
}

// SIGNAL 0
void fincept::services::prediction::kalshi_ns::KalshiRestClient::markets_ready(const QVector<fincept::services::prediction::PredictionMarket> & _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void fincept::services::prediction::kalshi_ns::KalshiRestClient::market_detail_ready(const fincept::services::prediction::PredictionMarket & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void fincept::services::prediction::kalshi_ns::KalshiRestClient::events_ready(const QVector<fincept::services::prediction::PredictionEvent> & _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void fincept::services::prediction::kalshi_ns::KalshiRestClient::event_detail_ready(const fincept::services::prediction::PredictionEvent & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void fincept::services::prediction::kalshi_ns::KalshiRestClient::tags_ready(const QStringList & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void fincept::services::prediction::kalshi_ns::KalshiRestClient::order_book_ready(const fincept::services::prediction::PredictionOrderBook & _t1, const fincept::services::prediction::PredictionOrderBook & _t2, const QString & _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void fincept::services::prediction::kalshi_ns::KalshiRestClient::price_history_ready(const fincept::services::prediction::PriceHistory & _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void fincept::services::prediction::kalshi_ns::KalshiRestClient::trades_ready(const QVector<fincept::services::prediction::PredictionTrade> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void fincept::services::prediction::kalshi_ns::KalshiRestClient::exchange_status_ready(const QJsonObject & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void fincept::services::prediction::kalshi_ns::KalshiRestClient::exchange_schedule_ready(const QJsonObject & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void fincept::services::prediction::kalshi_ns::KalshiRestClient::series_detail_ready(const QJsonObject & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void fincept::services::prediction::kalshi_ns::KalshiRestClient::series_fee_changes_ready(const QJsonArray & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void fincept::services::prediction::kalshi_ns::KalshiRestClient::search_tags_ready(const QJsonObject & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void fincept::services::prediction::kalshi_ns::KalshiRestClient::search_filters_ready(const QJsonObject & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void fincept::services::prediction::kalshi_ns::KalshiRestClient::batch_candlesticks_ready(const QHash<QString,fincept::services::prediction::PriceHistory> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void fincept::services::prediction::kalshi_ns::KalshiRestClient::historical_markets_ready(const QVector<fincept::services::prediction::PredictionMarket> & _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}

// SIGNAL 16
void fincept::services::prediction::kalshi_ns::KalshiRestClient::historical_candlesticks_ready(const fincept::services::prediction::PriceHistory & _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}

// SIGNAL 17
void fincept::services::prediction::kalshi_ns::KalshiRestClient::historical_trades_ready(const QVector<fincept::services::prediction::PredictionTrade> & _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 17, _a);
}

// SIGNAL 18
void fincept::services::prediction::kalshi_ns::KalshiRestClient::request_error(const QString & _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 18, _a);
}
QT_WARNING_POP
