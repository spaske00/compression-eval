/****************************************************************************
** Meta object code from reading C++ file 'AccountDataStream.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../upstream/fincept-qt/src/trading/AccountDataStream.h"
#include <QtCore/qmetatype.h>
#include <QtCore/QList>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AccountDataStream.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN7fincept7trading17AccountDataStreamE_t {};
} // unnamed namespace


#ifdef QT_MOC_HAS_STRINGDATA
static constexpr auto qt_meta_stringdata_ZN7fincept7trading17AccountDataStreamE = QtMocHelpers::stringData(
    "fincept::trading::AccountDataStream",
    "quote_updated",
    "",
    "account_id",
    "symbol",
    "BrokerQuote",
    "quote",
    "watchlist_updated",
    "QList<BrokerQuote>",
    "quotes",
    "positions_updated",
    "QList<BrokerPosition>",
    "positions",
    "holdings_updated",
    "QList<BrokerHolding>",
    "holdings",
    "orders_updated",
    "QList<BrokerOrderInfo>",
    "orders",
    "funds_updated",
    "BrokerFunds",
    "funds",
    "candles_fetched",
    "QList<BrokerCandle>",
    "candles",
    "orderbook_fetched",
    "QList<std::pair<double,double>>",
    "bids",
    "asks",
    "spread",
    "spread_pct",
    "QList<int>",
    "bid_orders",
    "ask_orders",
    "time_sales_fetched",
    "QList<BrokerTrade>",
    "trades",
    "latest_trade_fetched",
    "BrokerTrade",
    "trade",
    "calendar_fetched",
    "QList<MarketCalendarDay>",
    "days",
    "clock_fetched",
    "MarketClock",
    "clock",
    "connection_state_changed",
    "ConnectionState",
    "state",
    "token_expired"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA

Q_CONSTINIT static const uint qt_meta_data_ZN7fincept7trading17AccountDataStreamE[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      14,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    3,   98,    2, 0x06,    1 /* Public */,
       7,    2,  105,    2, 0x06,    5 /* Public */,
      10,    2,  110,    2, 0x06,    8 /* Public */,
      13,    2,  115,    2, 0x06,   11 /* Public */,
      16,    2,  120,    2, 0x06,   14 /* Public */,
      19,    2,  125,    2, 0x06,   17 /* Public */,
      22,    2,  130,    2, 0x06,   20 /* Public */,
      25,    7,  135,    2, 0x06,   23 /* Public */,
      34,    2,  150,    2, 0x06,   31 /* Public */,
      37,    2,  155,    2, 0x06,   34 /* Public */,
      40,    2,  160,    2, 0x06,   37 /* Public */,
      43,    2,  165,    2, 0x06,   40 /* Public */,
      46,    2,  170,    2, 0x06,   43 /* Public */,
      49,    1,  175,    2, 0x06,   46 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString, 0x80000000 | 5,    3,    4,    6,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 8,    3,    9,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 11,    3,   12,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 14,    3,   15,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 17,    3,   18,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 20,    3,   21,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 23,    3,   24,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 26, 0x80000000 | 26, QMetaType::Double, QMetaType::Double, 0x80000000 | 31, 0x80000000 | 31,    3,   27,   28,   29,   30,   32,   33,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 35,    3,   36,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 38,    3,   39,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 41,    3,   42,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 44,    3,   45,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 47,    3,   48,
    QMetaType::Void, QMetaType::QString,    3,

       0        // eod
};

Q_CONSTINIT const QMetaObject fincept::trading::AccountDataStream::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_ZN7fincept7trading17AccountDataStreamE.offsetsAndSizes,
    qt_meta_data_ZN7fincept7trading17AccountDataStreamE,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_tag_ZN7fincept7trading17AccountDataStreamE_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<AccountDataStream, std::true_type>,
        // method 'quote_updated'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const BrokerQuote &, std::false_type>,
        // method 'watchlist_updated'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QVector<BrokerQuote> &, std::false_type>,
        // method 'positions_updated'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QVector<BrokerPosition> &, std::false_type>,
        // method 'holdings_updated'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QVector<BrokerHolding> &, std::false_type>,
        // method 'orders_updated'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QVector<BrokerOrderInfo> &, std::false_type>,
        // method 'funds_updated'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const BrokerFunds &, std::false_type>,
        // method 'candles_fetched'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QVector<BrokerCandle> &, std::false_type>,
        // method 'orderbook_fetched'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QVector<QPair<double,double>> &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QVector<QPair<double,double>> &, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QVector<int> &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QVector<int> &, std::false_type>,
        // method 'time_sales_fetched'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QVector<BrokerTrade> &, std::false_type>,
        // method 'latest_trade_fetched'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const BrokerTrade &, std::false_type>,
        // method 'calendar_fetched'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QVector<MarketCalendarDay> &, std::false_type>,
        // method 'clock_fetched'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const MarketClock &, std::false_type>,
        // method 'connection_state_changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<ConnectionState, std::false_type>,
        // method 'token_expired'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>
    >,
    nullptr
} };

void fincept::trading::AccountDataStream::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<AccountDataStream *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->quote_updated((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<BrokerQuote>>(_a[3]))); break;
        case 1: _t->watchlist_updated((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QList<BrokerQuote>>>(_a[2]))); break;
        case 2: _t->positions_updated((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QList<BrokerPosition>>>(_a[2]))); break;
        case 3: _t->holdings_updated((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QList<BrokerHolding>>>(_a[2]))); break;
        case 4: _t->orders_updated((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QList<BrokerOrderInfo>>>(_a[2]))); break;
        case 5: _t->funds_updated((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<BrokerFunds>>(_a[2]))); break;
        case 6: _t->candles_fetched((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QList<BrokerCandle>>>(_a[2]))); break;
        case 7: _t->orderbook_fetched((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QList<std::pair<double,double>>>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QList<std::pair<double,double>>>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<double>>(_a[4])),(*reinterpret_cast< std::add_pointer_t<double>>(_a[5])),(*reinterpret_cast< std::add_pointer_t<QList<int>>>(_a[6])),(*reinterpret_cast< std::add_pointer_t<QList<int>>>(_a[7]))); break;
        case 8: _t->time_sales_fetched((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QList<BrokerTrade>>>(_a[2]))); break;
        case 9: _t->latest_trade_fetched((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<BrokerTrade>>(_a[2]))); break;
        case 10: _t->calendar_fetched((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QList<MarketCalendarDay>>>(_a[2]))); break;
        case 11: _t->clock_fetched((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<MarketClock>>(_a[2]))); break;
        case 12: _t->connection_state_changed((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<ConnectionState>>(_a[2]))); break;
        case 13: _t->token_expired((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 6:
            case 5:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QList<int> >(); break;
            }
            break;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _q_method_type = void (AccountDataStream::*)(const QString & , const QString & , const BrokerQuote & );
            if (_q_method_type _q_method = &AccountDataStream::quote_updated; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _q_method_type = void (AccountDataStream::*)(const QString & , const QVector<BrokerQuote> & );
            if (_q_method_type _q_method = &AccountDataStream::watchlist_updated; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _q_method_type = void (AccountDataStream::*)(const QString & , const QVector<BrokerPosition> & );
            if (_q_method_type _q_method = &AccountDataStream::positions_updated; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _q_method_type = void (AccountDataStream::*)(const QString & , const QVector<BrokerHolding> & );
            if (_q_method_type _q_method = &AccountDataStream::holdings_updated; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _q_method_type = void (AccountDataStream::*)(const QString & , const QVector<BrokerOrderInfo> & );
            if (_q_method_type _q_method = &AccountDataStream::orders_updated; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _q_method_type = void (AccountDataStream::*)(const QString & , const BrokerFunds & );
            if (_q_method_type _q_method = &AccountDataStream::funds_updated; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
        {
            using _q_method_type = void (AccountDataStream::*)(const QString & , const QVector<BrokerCandle> & );
            if (_q_method_type _q_method = &AccountDataStream::candles_fetched; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 6;
                return;
            }
        }
        {
            using _q_method_type = void (AccountDataStream::*)(const QString & , const QVector<QPair<double,double>> & , const QVector<QPair<double,double>> & , double , double , const QVector<int> & , const QVector<int> & );
            if (_q_method_type _q_method = &AccountDataStream::orderbook_fetched; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 7;
                return;
            }
        }
        {
            using _q_method_type = void (AccountDataStream::*)(const QString & , const QVector<BrokerTrade> & );
            if (_q_method_type _q_method = &AccountDataStream::time_sales_fetched; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 8;
                return;
            }
        }
        {
            using _q_method_type = void (AccountDataStream::*)(const QString & , const BrokerTrade & );
            if (_q_method_type _q_method = &AccountDataStream::latest_trade_fetched; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 9;
                return;
            }
        }
        {
            using _q_method_type = void (AccountDataStream::*)(const QString & , const QVector<MarketCalendarDay> & );
            if (_q_method_type _q_method = &AccountDataStream::calendar_fetched; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 10;
                return;
            }
        }
        {
            using _q_method_type = void (AccountDataStream::*)(const QString & , const MarketClock & );
            if (_q_method_type _q_method = &AccountDataStream::clock_fetched; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 11;
                return;
            }
        }
        {
            using _q_method_type = void (AccountDataStream::*)(const QString & , ConnectionState );
            if (_q_method_type _q_method = &AccountDataStream::connection_state_changed; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 12;
                return;
            }
        }
        {
            using _q_method_type = void (AccountDataStream::*)(const QString & );
            if (_q_method_type _q_method = &AccountDataStream::token_expired; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 13;
                return;
            }
        }
    }
}

const QMetaObject *fincept::trading::AccountDataStream::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *fincept::trading::AccountDataStream::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ZN7fincept7trading17AccountDataStreamE.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int fincept::trading::AccountDataStream::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    }
    return _id;
}

// SIGNAL 0
void fincept::trading::AccountDataStream::quote_updated(const QString & _t1, const QString & _t2, const BrokerQuote & _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void fincept::trading::AccountDataStream::watchlist_updated(const QString & _t1, const QVector<BrokerQuote> & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void fincept::trading::AccountDataStream::positions_updated(const QString & _t1, const QVector<BrokerPosition> & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void fincept::trading::AccountDataStream::holdings_updated(const QString & _t1, const QVector<BrokerHolding> & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void fincept::trading::AccountDataStream::orders_updated(const QString & _t1, const QVector<BrokerOrderInfo> & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void fincept::trading::AccountDataStream::funds_updated(const QString & _t1, const BrokerFunds & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void fincept::trading::AccountDataStream::candles_fetched(const QString & _t1, const QVector<BrokerCandle> & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void fincept::trading::AccountDataStream::orderbook_fetched(const QString & _t1, const QVector<QPair<double,double>> & _t2, const QVector<QPair<double,double>> & _t3, double _t4, double _t5, const QVector<int> & _t6, const QVector<int> & _t7)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t5))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t6))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t7))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void fincept::trading::AccountDataStream::time_sales_fetched(const QString & _t1, const QVector<BrokerTrade> & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void fincept::trading::AccountDataStream::latest_trade_fetched(const QString & _t1, const BrokerTrade & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void fincept::trading::AccountDataStream::calendar_fetched(const QString & _t1, const QVector<MarketCalendarDay> & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void fincept::trading::AccountDataStream::clock_fetched(const QString & _t1, const MarketClock & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void fincept::trading::AccountDataStream::connection_state_changed(const QString & _t1, ConnectionState _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void fincept::trading::AccountDataStream::token_expired(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}
QT_WARNING_POP
