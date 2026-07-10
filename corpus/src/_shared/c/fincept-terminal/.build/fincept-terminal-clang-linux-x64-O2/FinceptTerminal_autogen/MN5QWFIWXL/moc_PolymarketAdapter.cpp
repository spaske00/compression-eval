/****************************************************************************
** Meta object code from reading C++ file 'PolymarketAdapter.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../upstream/fincept-qt/src/services/prediction/polymarket/PolymarketAdapter.h"
#include <QtCore/qmetatype.h>
#include <QtCore/QList>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'PolymarketAdapter.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN7fincept8services10prediction13polymarket_ns17PolymarketAdapterE_t {};
} // unnamed namespace


#ifdef QT_MOC_HAS_STRINGDATA
static constexpr auto qt_meta_stringdata_ZN7fincept8services10prediction13polymarket_ns17PolymarketAdapterE = QtMocHelpers::stringData(
    "fincept::services::prediction::polymarket_ns::PolymarketAdapter",
    "on_markets",
    "",
    "QList<fincept::services::polymarket::Market>",
    "markets",
    "on_events",
    "QList<fincept::services::polymarket::Event>",
    "events",
    "on_tags",
    "QList<fincept::services::polymarket::Tag>",
    "tags",
    "on_market_detail",
    "fincept::services::polymarket::Market",
    "market",
    "on_event_detail",
    "fincept::services::polymarket::Event",
    "event",
    "on_order_book",
    "fincept::services::polymarket::OrderBook",
    "book",
    "on_price_history",
    "fincept::services::polymarket::PriceHistory",
    "history",
    "on_trades",
    "QList<fincept::services::polymarket::Trade>",
    "trades",
    "on_service_error",
    "ctx",
    "msg",
    "on_ws_price",
    "asset_id",
    "price",
    "on_ws_orderbook",
    "on_ws_status",
    "connected"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA

Q_CONSTINIT static const uint qt_meta_data_ZN7fincept8services10prediction13polymarket_ns17PolymarketAdapterE[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   86,    2, 0x08,    1 /* Private */,
       5,    1,   89,    2, 0x08,    3 /* Private */,
       8,    1,   92,    2, 0x08,    5 /* Private */,
      11,    1,   95,    2, 0x08,    7 /* Private */,
      14,    1,   98,    2, 0x08,    9 /* Private */,
      17,    1,  101,    2, 0x08,   11 /* Private */,
      20,    1,  104,    2, 0x08,   13 /* Private */,
      23,    1,  107,    2, 0x08,   15 /* Private */,
      26,    2,  110,    2, 0x08,   17 /* Private */,
      29,    2,  115,    2, 0x08,   20 /* Private */,
      32,    2,  120,    2, 0x08,   23 /* Private */,
      33,    1,  125,    2, 0x08,   26 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, 0x80000000 | 12,   13,
    QMetaType::Void, 0x80000000 | 15,   16,
    QMetaType::Void, 0x80000000 | 18,   19,
    QMetaType::Void, 0x80000000 | 21,   22,
    QMetaType::Void, 0x80000000 | 24,   25,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   27,   28,
    QMetaType::Void, QMetaType::QString, QMetaType::Double,   30,   31,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 18,   30,   19,
    QMetaType::Void, QMetaType::Bool,   34,

       0        // eod
};

Q_CONSTINIT const QMetaObject fincept::services::prediction::polymarket_ns::PolymarketAdapter::staticMetaObject = { {
    QMetaObject::SuperData::link<fincept::services::prediction::PredictionExchangeAdapter::staticMetaObject>(),
    qt_meta_stringdata_ZN7fincept8services10prediction13polymarket_ns17PolymarketAdapterE.offsetsAndSizes,
    qt_meta_data_ZN7fincept8services10prediction13polymarket_ns17PolymarketAdapterE,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_tag_ZN7fincept8services10prediction13polymarket_ns17PolymarketAdapterE_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<PolymarketAdapter, std::true_type>,
        // method 'on_markets'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QVector<fincept::services::polymarket::Market> &, std::false_type>,
        // method 'on_events'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QVector<fincept::services::polymarket::Event> &, std::false_type>,
        // method 'on_tags'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QVector<fincept::services::polymarket::Tag> &, std::false_type>,
        // method 'on_market_detail'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const fincept::services::polymarket::Market &, std::false_type>,
        // method 'on_event_detail'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const fincept::services::polymarket::Event &, std::false_type>,
        // method 'on_order_book'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const fincept::services::polymarket::OrderBook &, std::false_type>,
        // method 'on_price_history'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const fincept::services::polymarket::PriceHistory &, std::false_type>,
        // method 'on_trades'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QVector<fincept::services::polymarket::Trade> &, std::false_type>,
        // method 'on_service_error'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'on_ws_price'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        // method 'on_ws_orderbook'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const fincept::services::polymarket::OrderBook &, std::false_type>,
        // method 'on_ws_status'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>
    >,
    nullptr
} };

void fincept::services::prediction::polymarket_ns::PolymarketAdapter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<PolymarketAdapter *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->on_markets((*reinterpret_cast< std::add_pointer_t<QList<fincept::services::polymarket::Market>>>(_a[1]))); break;
        case 1: _t->on_events((*reinterpret_cast< std::add_pointer_t<QList<fincept::services::polymarket::Event>>>(_a[1]))); break;
        case 2: _t->on_tags((*reinterpret_cast< std::add_pointer_t<QList<fincept::services::polymarket::Tag>>>(_a[1]))); break;
        case 3: _t->on_market_detail((*reinterpret_cast< std::add_pointer_t<fincept::services::polymarket::Market>>(_a[1]))); break;
        case 4: _t->on_event_detail((*reinterpret_cast< std::add_pointer_t<fincept::services::polymarket::Event>>(_a[1]))); break;
        case 5: _t->on_order_book((*reinterpret_cast< std::add_pointer_t<fincept::services::polymarket::OrderBook>>(_a[1]))); break;
        case 6: _t->on_price_history((*reinterpret_cast< std::add_pointer_t<fincept::services::polymarket::PriceHistory>>(_a[1]))); break;
        case 7: _t->on_trades((*reinterpret_cast< std::add_pointer_t<QList<fincept::services::polymarket::Trade>>>(_a[1]))); break;
        case 8: _t->on_service_error((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 9: _t->on_ws_price((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<double>>(_a[2]))); break;
        case 10: _t->on_ws_orderbook((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<fincept::services::polymarket::OrderBook>>(_a[2]))); break;
        case 11: _t->on_ws_status((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< fincept::services::polymarket::OrderBook >(); break;
            }
            break;
        case 10:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< fincept::services::polymarket::OrderBook >(); break;
            }
            break;
        }
    }
}

const QMetaObject *fincept::services::prediction::polymarket_ns::PolymarketAdapter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *fincept::services::prediction::polymarket_ns::PolymarketAdapter::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ZN7fincept8services10prediction13polymarket_ns17PolymarketAdapterE.stringdata0))
        return static_cast<void*>(this);
    return fincept::services::prediction::PredictionExchangeAdapter::qt_metacast(_clname);
}

int fincept::services::prediction::polymarket_ns::PolymarketAdapter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_WARNING_POP
