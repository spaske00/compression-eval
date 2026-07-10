/****************************************************************************
** Meta object code from reading C++ file 'PolymarketService.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../upstream/fincept-qt/src/services/polymarket/PolymarketService.h"
#include <QtNetwork/QSslError>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'PolymarketService.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN7fincept8services10polymarket17PolymarketServiceE_t {};
} // unnamed namespace


#ifdef QT_MOC_HAS_STRINGDATA
static constexpr auto qt_meta_stringdata_ZN7fincept8services10polymarket17PolymarketServiceE = QtMocHelpers::stringData(
    "fincept::services::polymarket::PolymarketService",
    "markets_ready",
    "",
    "QList<Market>",
    "markets",
    "events_ready",
    "QList<Event>",
    "events",
    "tags_ready",
    "QList<Tag>",
    "tags",
    "market_detail_ready",
    "Market",
    "market",
    "event_detail_ready",
    "Event",
    "event",
    "related_markets_ready",
    "comments_ready",
    "QList<Comment>",
    "comments",
    "teams_ready_list",
    "QList<Team>",
    "teams",
    "search_results_ready",
    "order_book_ready",
    "OrderBook",
    "book",
    "price_history_ready",
    "PriceHistory",
    "history",
    "price_summary_ready",
    "PriceSummary",
    "summary",
    "trades_ready",
    "QList<Trade>",
    "trades",
    "top_holders_ready",
    "QList<TopHolder>",
    "holders",
    "leaderboard_ready",
    "QList<LeaderboardEntry>",
    "entries",
    "activity_ready",
    "QList<Activity>",
    "activities",
    "live_volume_ready",
    "LiveVolume",
    "vol",
    "open_interest_ready",
    "QList<OpenInterest>",
    "oi",
    "request_error",
    "context",
    "message"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA

Q_CONSTINIT static const uint qt_meta_data_ZN7fincept8services10polymarket17PolymarketServiceE[] = {

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
       1,    1,  128,    2, 0x06,    1 /* Public */,
       5,    1,  131,    2, 0x06,    3 /* Public */,
       8,    1,  134,    2, 0x06,    5 /* Public */,
      11,    1,  137,    2, 0x06,    7 /* Public */,
      14,    1,  140,    2, 0x06,    9 /* Public */,
      17,    1,  143,    2, 0x06,   11 /* Public */,
      18,    1,  146,    2, 0x06,   13 /* Public */,
      21,    1,  149,    2, 0x06,   15 /* Public */,
      24,    2,  152,    2, 0x06,   17 /* Public */,
      25,    1,  157,    2, 0x06,   20 /* Public */,
      28,    1,  160,    2, 0x06,   22 /* Public */,
      31,    1,  163,    2, 0x06,   24 /* Public */,
      34,    1,  166,    2, 0x06,   26 /* Public */,
      37,    1,  169,    2, 0x06,   28 /* Public */,
      40,    1,  172,    2, 0x06,   30 /* Public */,
      43,    1,  175,    2, 0x06,   32 /* Public */,
      46,    1,  178,    2, 0x06,   34 /* Public */,
      49,    1,  181,    2, 0x06,   36 /* Public */,
      52,    2,  184,    2, 0x06,   38 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, 0x80000000 | 12,   13,
    QMetaType::Void, 0x80000000 | 15,   16,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 19,   20,
    QMetaType::Void, 0x80000000 | 22,   23,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 6,    4,    7,
    QMetaType::Void, 0x80000000 | 26,   27,
    QMetaType::Void, 0x80000000 | 29,   30,
    QMetaType::Void, 0x80000000 | 32,   33,
    QMetaType::Void, 0x80000000 | 35,   36,
    QMetaType::Void, 0x80000000 | 38,   39,
    QMetaType::Void, 0x80000000 | 41,   42,
    QMetaType::Void, 0x80000000 | 44,   45,
    QMetaType::Void, 0x80000000 | 47,   48,
    QMetaType::Void, 0x80000000 | 50,   51,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   53,   54,

       0        // eod
};

Q_CONSTINIT const QMetaObject fincept::services::polymarket::PolymarketService::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_ZN7fincept8services10polymarket17PolymarketServiceE.offsetsAndSizes,
    qt_meta_data_ZN7fincept8services10polymarket17PolymarketServiceE,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_tag_ZN7fincept8services10polymarket17PolymarketServiceE_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<PolymarketService, std::true_type>,
        // method 'markets_ready'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QVector<Market> &, std::false_type>,
        // method 'events_ready'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QVector<Event> &, std::false_type>,
        // method 'tags_ready'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QVector<Tag> &, std::false_type>,
        // method 'market_detail_ready'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const Market &, std::false_type>,
        // method 'event_detail_ready'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const Event &, std::false_type>,
        // method 'related_markets_ready'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QVector<Market> &, std::false_type>,
        // method 'comments_ready'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QVector<Comment> &, std::false_type>,
        // method 'teams_ready_list'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QVector<Team> &, std::false_type>,
        // method 'search_results_ready'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QVector<Market> &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QVector<Event> &, std::false_type>,
        // method 'order_book_ready'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const OrderBook &, std::false_type>,
        // method 'price_history_ready'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const PriceHistory &, std::false_type>,
        // method 'price_summary_ready'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const PriceSummary &, std::false_type>,
        // method 'trades_ready'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QVector<Trade> &, std::false_type>,
        // method 'top_holders_ready'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QVector<TopHolder> &, std::false_type>,
        // method 'leaderboard_ready'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QVector<LeaderboardEntry> &, std::false_type>,
        // method 'activity_ready'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QVector<Activity> &, std::false_type>,
        // method 'live_volume_ready'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const LiveVolume &, std::false_type>,
        // method 'open_interest_ready'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QVector<OpenInterest> &, std::false_type>,
        // method 'request_error'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>
    >,
    nullptr
} };

void fincept::services::polymarket::PolymarketService::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<PolymarketService *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->markets_ready((*reinterpret_cast< std::add_pointer_t<QList<Market>>>(_a[1]))); break;
        case 1: _t->events_ready((*reinterpret_cast< std::add_pointer_t<QList<Event>>>(_a[1]))); break;
        case 2: _t->tags_ready((*reinterpret_cast< std::add_pointer_t<QList<Tag>>>(_a[1]))); break;
        case 3: _t->market_detail_ready((*reinterpret_cast< std::add_pointer_t<Market>>(_a[1]))); break;
        case 4: _t->event_detail_ready((*reinterpret_cast< std::add_pointer_t<Event>>(_a[1]))); break;
        case 5: _t->related_markets_ready((*reinterpret_cast< std::add_pointer_t<QList<Market>>>(_a[1]))); break;
        case 6: _t->comments_ready((*reinterpret_cast< std::add_pointer_t<QList<Comment>>>(_a[1]))); break;
        case 7: _t->teams_ready_list((*reinterpret_cast< std::add_pointer_t<QList<Team>>>(_a[1]))); break;
        case 8: _t->search_results_ready((*reinterpret_cast< std::add_pointer_t<QList<Market>>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QList<Event>>>(_a[2]))); break;
        case 9: _t->order_book_ready((*reinterpret_cast< std::add_pointer_t<OrderBook>>(_a[1]))); break;
        case 10: _t->price_history_ready((*reinterpret_cast< std::add_pointer_t<PriceHistory>>(_a[1]))); break;
        case 11: _t->price_summary_ready((*reinterpret_cast< std::add_pointer_t<PriceSummary>>(_a[1]))); break;
        case 12: _t->trades_ready((*reinterpret_cast< std::add_pointer_t<QList<Trade>>>(_a[1]))); break;
        case 13: _t->top_holders_ready((*reinterpret_cast< std::add_pointer_t<QList<TopHolder>>>(_a[1]))); break;
        case 14: _t->leaderboard_ready((*reinterpret_cast< std::add_pointer_t<QList<LeaderboardEntry>>>(_a[1]))); break;
        case 15: _t->activity_ready((*reinterpret_cast< std::add_pointer_t<QList<Activity>>>(_a[1]))); break;
        case 16: _t->live_volume_ready((*reinterpret_cast< std::add_pointer_t<LiveVolume>>(_a[1]))); break;
        case 17: _t->open_interest_ready((*reinterpret_cast< std::add_pointer_t<QList<OpenInterest>>>(_a[1]))); break;
        case 18: _t->request_error((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _q_method_type = void (PolymarketService::*)(const QVector<Market> & );
            if (_q_method_type _q_method = &PolymarketService::markets_ready; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _q_method_type = void (PolymarketService::*)(const QVector<Event> & );
            if (_q_method_type _q_method = &PolymarketService::events_ready; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _q_method_type = void (PolymarketService::*)(const QVector<Tag> & );
            if (_q_method_type _q_method = &PolymarketService::tags_ready; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _q_method_type = void (PolymarketService::*)(const Market & );
            if (_q_method_type _q_method = &PolymarketService::market_detail_ready; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _q_method_type = void (PolymarketService::*)(const Event & );
            if (_q_method_type _q_method = &PolymarketService::event_detail_ready; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _q_method_type = void (PolymarketService::*)(const QVector<Market> & );
            if (_q_method_type _q_method = &PolymarketService::related_markets_ready; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
        {
            using _q_method_type = void (PolymarketService::*)(const QVector<Comment> & );
            if (_q_method_type _q_method = &PolymarketService::comments_ready; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 6;
                return;
            }
        }
        {
            using _q_method_type = void (PolymarketService::*)(const QVector<Team> & );
            if (_q_method_type _q_method = &PolymarketService::teams_ready_list; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 7;
                return;
            }
        }
        {
            using _q_method_type = void (PolymarketService::*)(const QVector<Market> & , const QVector<Event> & );
            if (_q_method_type _q_method = &PolymarketService::search_results_ready; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 8;
                return;
            }
        }
        {
            using _q_method_type = void (PolymarketService::*)(const OrderBook & );
            if (_q_method_type _q_method = &PolymarketService::order_book_ready; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 9;
                return;
            }
        }
        {
            using _q_method_type = void (PolymarketService::*)(const PriceHistory & );
            if (_q_method_type _q_method = &PolymarketService::price_history_ready; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 10;
                return;
            }
        }
        {
            using _q_method_type = void (PolymarketService::*)(const PriceSummary & );
            if (_q_method_type _q_method = &PolymarketService::price_summary_ready; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 11;
                return;
            }
        }
        {
            using _q_method_type = void (PolymarketService::*)(const QVector<Trade> & );
            if (_q_method_type _q_method = &PolymarketService::trades_ready; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 12;
                return;
            }
        }
        {
            using _q_method_type = void (PolymarketService::*)(const QVector<TopHolder> & );
            if (_q_method_type _q_method = &PolymarketService::top_holders_ready; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 13;
                return;
            }
        }
        {
            using _q_method_type = void (PolymarketService::*)(const QVector<LeaderboardEntry> & );
            if (_q_method_type _q_method = &PolymarketService::leaderboard_ready; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 14;
                return;
            }
        }
        {
            using _q_method_type = void (PolymarketService::*)(const QVector<Activity> & );
            if (_q_method_type _q_method = &PolymarketService::activity_ready; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 15;
                return;
            }
        }
        {
            using _q_method_type = void (PolymarketService::*)(const LiveVolume & );
            if (_q_method_type _q_method = &PolymarketService::live_volume_ready; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 16;
                return;
            }
        }
        {
            using _q_method_type = void (PolymarketService::*)(const QVector<OpenInterest> & );
            if (_q_method_type _q_method = &PolymarketService::open_interest_ready; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 17;
                return;
            }
        }
        {
            using _q_method_type = void (PolymarketService::*)(const QString & , const QString & );
            if (_q_method_type _q_method = &PolymarketService::request_error; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 18;
                return;
            }
        }
    }
}

const QMetaObject *fincept::services::polymarket::PolymarketService::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *fincept::services::polymarket::PolymarketService::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ZN7fincept8services10polymarket17PolymarketServiceE.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int fincept::services::polymarket::PolymarketService::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 19;
    }
    return _id;
}

// SIGNAL 0
void fincept::services::polymarket::PolymarketService::markets_ready(const QVector<Market> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void fincept::services::polymarket::PolymarketService::events_ready(const QVector<Event> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void fincept::services::polymarket::PolymarketService::tags_ready(const QVector<Tag> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void fincept::services::polymarket::PolymarketService::market_detail_ready(const Market & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void fincept::services::polymarket::PolymarketService::event_detail_ready(const Event & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void fincept::services::polymarket::PolymarketService::related_markets_ready(const QVector<Market> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void fincept::services::polymarket::PolymarketService::comments_ready(const QVector<Comment> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void fincept::services::polymarket::PolymarketService::teams_ready_list(const QVector<Team> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void fincept::services::polymarket::PolymarketService::search_results_ready(const QVector<Market> & _t1, const QVector<Event> & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void fincept::services::polymarket::PolymarketService::order_book_ready(const OrderBook & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void fincept::services::polymarket::PolymarketService::price_history_ready(const PriceHistory & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void fincept::services::polymarket::PolymarketService::price_summary_ready(const PriceSummary & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void fincept::services::polymarket::PolymarketService::trades_ready(const QVector<Trade> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void fincept::services::polymarket::PolymarketService::top_holders_ready(const QVector<TopHolder> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void fincept::services::polymarket::PolymarketService::leaderboard_ready(const QVector<LeaderboardEntry> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void fincept::services::polymarket::PolymarketService::activity_ready(const QVector<Activity> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}

// SIGNAL 16
void fincept::services::polymarket::PolymarketService::live_volume_ready(const LiveVolume & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}

// SIGNAL 17
void fincept::services::polymarket::PolymarketService::open_interest_ready(const QVector<OpenInterest> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 17, _a);
}

// SIGNAL 18
void fincept::services::polymarket::PolymarketService::request_error(const QString & _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 18, _a);
}
QT_WARNING_POP
