/****************************************************************************
** Meta object code from reading C++ file 'KalshiAdapter.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../upstream/fincept-qt/src/services/prediction/kalshi/KalshiAdapter.h"
#include <QtCore/qmetatype.h>
#include <QtCore/QList>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'KalshiAdapter.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN7fincept8services10prediction9kalshi_ns13KalshiAdapterE_t {};
} // unnamed namespace


#ifdef QT_MOC_HAS_STRINGDATA
static constexpr auto qt_meta_stringdata_ZN7fincept8services10prediction9kalshi_ns13KalshiAdapterE = QtMocHelpers::stringData(
    "fincept::services::prediction::kalshi_ns::KalshiAdapter",
    "ws_trade_received",
    "",
    "fincept::services::prediction::PredictionTrade",
    "trade",
    "ws_market_lifecycle_changed",
    "ticker",
    "status",
    "exchange_status_ready",
    "exchange_schedule_ready",
    "schedule",
    "batch_candles_ready",
    "QHash<QString,fincept::services::prediction::PriceHistory>",
    "histories",
    "series_detail_ready",
    "series_ticker",
    "series",
    "historical_markets_ready",
    "QList<fincept::services::prediction::PredictionMarket>",
    "markets",
    "next_cursor",
    "historical_candles_ready",
    "fincept::services::prediction::PriceHistory",
    "history",
    "historical_trades_ready",
    "QList<fincept::services::prediction::PredictionTrade>",
    "trades",
    "order_amended",
    "order_id",
    "ok",
    "error",
    "single_order_ready",
    "order",
    "orders_batch_cancelled",
    "order_ids"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA

Q_CONSTINIT static const uint qt_meta_data_ZN7fincept8services10prediction9kalshi_ns13KalshiAdapterE[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      12,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   86,    2, 0x06,    1 /* Public */,
       5,    2,   89,    2, 0x06,    3 /* Public */,
       8,    1,   94,    2, 0x06,    6 /* Public */,
       9,    1,   97,    2, 0x06,    8 /* Public */,
      11,    1,  100,    2, 0x06,   10 /* Public */,
      14,    2,  103,    2, 0x06,   12 /* Public */,
      17,    2,  108,    2, 0x06,   15 /* Public */,
      21,    2,  113,    2, 0x06,   18 /* Public */,
      24,    2,  118,    2, 0x06,   21 /* Public */,
      27,    3,  123,    2, 0x06,   24 /* Public */,
      31,    1,  130,    2, 0x06,   28 /* Public */,
      33,    3,  133,    2, 0x06,   30 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    6,    7,
    QMetaType::Void, QMetaType::QJsonObject,    7,
    QMetaType::Void, QMetaType::QJsonObject,   10,
    QMetaType::Void, 0x80000000 | 12,   13,
    QMetaType::Void, QMetaType::QString, QMetaType::QJsonObject,   15,   16,
    QMetaType::Void, 0x80000000 | 18, QMetaType::QString,   19,   20,
    QMetaType::Void, 0x80000000 | 22, QMetaType::QString,   23,    6,
    QMetaType::Void, 0x80000000 | 25, QMetaType::QString,   26,   20,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool, QMetaType::QString,   28,   29,   30,
    QMetaType::Void, QMetaType::QJsonObject,   32,
    QMetaType::Void, QMetaType::QStringList, QMetaType::Bool, QMetaType::QString,   34,   29,   30,

       0        // eod
};

Q_CONSTINIT const QMetaObject fincept::services::prediction::kalshi_ns::KalshiAdapter::staticMetaObject = { {
    QMetaObject::SuperData::link<fincept::services::prediction::PredictionExchangeAdapter::staticMetaObject>(),
    qt_meta_stringdata_ZN7fincept8services10prediction9kalshi_ns13KalshiAdapterE.offsetsAndSizes,
    qt_meta_data_ZN7fincept8services10prediction9kalshi_ns13KalshiAdapterE,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_tag_ZN7fincept8services10prediction9kalshi_ns13KalshiAdapterE_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<KalshiAdapter, std::true_type>,
        // method 'ws_trade_received'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const fincept::services::prediction::PredictionTrade &, std::false_type>,
        // method 'ws_market_lifecycle_changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'exchange_status_ready'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QJsonObject &, std::false_type>,
        // method 'exchange_schedule_ready'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QJsonObject &, std::false_type>,
        // method 'batch_candles_ready'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QHash<QString,fincept::services::prediction::PriceHistory> &, std::false_type>,
        // method 'series_detail_ready'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QJsonObject &, std::false_type>,
        // method 'historical_markets_ready'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QVector<fincept::services::prediction::PredictionMarket> &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'historical_candles_ready'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const fincept::services::prediction::PriceHistory &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'historical_trades_ready'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QVector<fincept::services::prediction::PredictionTrade> &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'order_amended'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'single_order_ready'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QJsonObject &, std::false_type>,
        // method 'orders_batch_cancelled'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QStringList &, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>
    >,
    nullptr
} };

void fincept::services::prediction::kalshi_ns::KalshiAdapter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<KalshiAdapter *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->ws_trade_received((*reinterpret_cast< std::add_pointer_t<fincept::services::prediction::PredictionTrade>>(_a[1]))); break;
        case 1: _t->ws_market_lifecycle_changed((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 2: _t->exchange_status_ready((*reinterpret_cast< std::add_pointer_t<QJsonObject>>(_a[1]))); break;
        case 3: _t->exchange_schedule_ready((*reinterpret_cast< std::add_pointer_t<QJsonObject>>(_a[1]))); break;
        case 4: _t->batch_candles_ready((*reinterpret_cast< std::add_pointer_t<QHash<QString,fincept::services::prediction::PriceHistory>>>(_a[1]))); break;
        case 5: _t->series_detail_ready((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QJsonObject>>(_a[2]))); break;
        case 6: _t->historical_markets_ready((*reinterpret_cast< std::add_pointer_t<QList<fincept::services::prediction::PredictionMarket>>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 7: _t->historical_candles_ready((*reinterpret_cast< std::add_pointer_t<fincept::services::prediction::PriceHistory>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 8: _t->historical_trades_ready((*reinterpret_cast< std::add_pointer_t<QList<fincept::services::prediction::PredictionTrade>>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 9: _t->order_amended((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3]))); break;
        case 10: _t->single_order_ready((*reinterpret_cast< std::add_pointer_t<QJsonObject>>(_a[1]))); break;
        case 11: _t->orders_batch_cancelled((*reinterpret_cast< std::add_pointer_t<QStringList>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3]))); break;
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
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< fincept::services::prediction::PredictionTrade >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QList<fincept::services::prediction::PredictionMarket> >(); break;
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
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _q_method_type = void (KalshiAdapter::*)(const fincept::services::prediction::PredictionTrade & );
            if (_q_method_type _q_method = &KalshiAdapter::ws_trade_received; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _q_method_type = void (KalshiAdapter::*)(const QString & , const QString & );
            if (_q_method_type _q_method = &KalshiAdapter::ws_market_lifecycle_changed; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _q_method_type = void (KalshiAdapter::*)(const QJsonObject & );
            if (_q_method_type _q_method = &KalshiAdapter::exchange_status_ready; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _q_method_type = void (KalshiAdapter::*)(const QJsonObject & );
            if (_q_method_type _q_method = &KalshiAdapter::exchange_schedule_ready; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _q_method_type = void (KalshiAdapter::*)(const QHash<QString,fincept::services::prediction::PriceHistory> & );
            if (_q_method_type _q_method = &KalshiAdapter::batch_candles_ready; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _q_method_type = void (KalshiAdapter::*)(const QString & , const QJsonObject & );
            if (_q_method_type _q_method = &KalshiAdapter::series_detail_ready; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
        {
            using _q_method_type = void (KalshiAdapter::*)(const QVector<fincept::services::prediction::PredictionMarket> & , const QString & );
            if (_q_method_type _q_method = &KalshiAdapter::historical_markets_ready; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 6;
                return;
            }
        }
        {
            using _q_method_type = void (KalshiAdapter::*)(const fincept::services::prediction::PriceHistory & , const QString & );
            if (_q_method_type _q_method = &KalshiAdapter::historical_candles_ready; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 7;
                return;
            }
        }
        {
            using _q_method_type = void (KalshiAdapter::*)(const QVector<fincept::services::prediction::PredictionTrade> & , const QString & );
            if (_q_method_type _q_method = &KalshiAdapter::historical_trades_ready; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 8;
                return;
            }
        }
        {
            using _q_method_type = void (KalshiAdapter::*)(const QString & , bool , const QString & );
            if (_q_method_type _q_method = &KalshiAdapter::order_amended; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 9;
                return;
            }
        }
        {
            using _q_method_type = void (KalshiAdapter::*)(const QJsonObject & );
            if (_q_method_type _q_method = &KalshiAdapter::single_order_ready; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 10;
                return;
            }
        }
        {
            using _q_method_type = void (KalshiAdapter::*)(const QStringList & , bool , const QString & );
            if (_q_method_type _q_method = &KalshiAdapter::orders_batch_cancelled; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 11;
                return;
            }
        }
    }
}

const QMetaObject *fincept::services::prediction::kalshi_ns::KalshiAdapter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *fincept::services::prediction::kalshi_ns::KalshiAdapter::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ZN7fincept8services10prediction9kalshi_ns13KalshiAdapterE.stringdata0))
        return static_cast<void*>(this);
    return fincept::services::prediction::PredictionExchangeAdapter::qt_metacast(_clname);
}

int fincept::services::prediction::kalshi_ns::KalshiAdapter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = fincept::services::prediction::PredictionExchangeAdapter::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void fincept::services::prediction::kalshi_ns::KalshiAdapter::ws_trade_received(const fincept::services::prediction::PredictionTrade & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void fincept::services::prediction::kalshi_ns::KalshiAdapter::ws_market_lifecycle_changed(const QString & _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void fincept::services::prediction::kalshi_ns::KalshiAdapter::exchange_status_ready(const QJsonObject & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void fincept::services::prediction::kalshi_ns::KalshiAdapter::exchange_schedule_ready(const QJsonObject & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void fincept::services::prediction::kalshi_ns::KalshiAdapter::batch_candles_ready(const QHash<QString,fincept::services::prediction::PriceHistory> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void fincept::services::prediction::kalshi_ns::KalshiAdapter::series_detail_ready(const QString & _t1, const QJsonObject & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void fincept::services::prediction::kalshi_ns::KalshiAdapter::historical_markets_ready(const QVector<fincept::services::prediction::PredictionMarket> & _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void fincept::services::prediction::kalshi_ns::KalshiAdapter::historical_candles_ready(const fincept::services::prediction::PriceHistory & _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void fincept::services::prediction::kalshi_ns::KalshiAdapter::historical_trades_ready(const QVector<fincept::services::prediction::PredictionTrade> & _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void fincept::services::prediction::kalshi_ns::KalshiAdapter::order_amended(const QString & _t1, bool _t2, const QString & _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void fincept::services::prediction::kalshi_ns::KalshiAdapter::single_order_ready(const QJsonObject & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void fincept::services::prediction::kalshi_ns::KalshiAdapter::orders_batch_cancelled(const QStringList & _t1, bool _t2, const QString & _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}
QT_WARNING_POP
