/****************************************************************************
** Meta object code from reading C++ file 'EquityResearchService.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../upstream/fincept-qt/src/services/equity/EquityResearchService.h"
#include <QtCore/qmetatype.h>
#include <QtCore/QList>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'EquityResearchService.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN7fincept8services6equity21EquityResearchServiceE_t {};
} // unnamed namespace


#ifdef QT_MOC_HAS_STRINGDATA
static constexpr auto qt_meta_stringdata_ZN7fincept8services6equity21EquityResearchServiceE = QtMocHelpers::stringData(
    "fincept::services::equity::EquityResearchService",
    "search_results_loaded",
    "",
    "QList<fincept::services::equity::SearchResult>",
    "results",
    "quote_loaded",
    "fincept::services::equity::QuoteData",
    "quote",
    "info_loaded",
    "fincept::services::equity::StockInfo",
    "info",
    "historical_loaded",
    "symbol",
    "QList<fincept::services::equity::Candle>",
    "candles",
    "financials_loaded",
    "fincept::services::equity::FinancialsData",
    "data",
    "technicals_loaded",
    "fincept::services::equity::TechnicalsData",
    "peers_loaded",
    "QList<fincept::services::equity::PeerData>",
    "peers",
    "news_loaded",
    "QList<fincept::services::equity::NewsArticle>",
    "articles",
    "error_occurred",
    "context",
    "message"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA

Q_CONSTINIT static const uint qt_meta_data_ZN7fincept8services6equity21EquityResearchServiceE[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       9,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   68,    2, 0x06,    1 /* Public */,
       5,    1,   71,    2, 0x06,    3 /* Public */,
       8,    1,   74,    2, 0x06,    5 /* Public */,
      11,    2,   77,    2, 0x06,    7 /* Public */,
      15,    1,   82,    2, 0x06,   10 /* Public */,
      18,    1,   85,    2, 0x06,   12 /* Public */,
      20,    1,   88,    2, 0x06,   14 /* Public */,
      23,    2,   91,    2, 0x06,   16 /* Public */,
      26,    2,   96,    2, 0x06,   19 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 13,   12,   14,
    QMetaType::Void, 0x80000000 | 16,   17,
    QMetaType::Void, 0x80000000 | 19,   17,
    QMetaType::Void, 0x80000000 | 21,   22,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 24,   12,   25,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   27,   28,

       0        // eod
};

Q_CONSTINIT const QMetaObject fincept::services::equity::EquityResearchService::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_ZN7fincept8services6equity21EquityResearchServiceE.offsetsAndSizes,
    qt_meta_data_ZN7fincept8services6equity21EquityResearchServiceE,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_tag_ZN7fincept8services6equity21EquityResearchServiceE_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<EquityResearchService, std::true_type>,
        // method 'search_results_loaded'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QVector<fincept::services::equity::SearchResult>, std::false_type>,
        // method 'quote_loaded'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<fincept::services::equity::QuoteData, std::false_type>,
        // method 'info_loaded'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<fincept::services::equity::StockInfo, std::false_type>,
        // method 'historical_loaded'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<QVector<fincept::services::equity::Candle>, std::false_type>,
        // method 'financials_loaded'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<fincept::services::equity::FinancialsData, std::false_type>,
        // method 'technicals_loaded'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<fincept::services::equity::TechnicalsData, std::false_type>,
        // method 'peers_loaded'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QVector<fincept::services::equity::PeerData>, std::false_type>,
        // method 'news_loaded'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<QVector<fincept::services::equity::NewsArticle>, std::false_type>,
        // method 'error_occurred'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>
    >,
    nullptr
} };

void fincept::services::equity::EquityResearchService::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<EquityResearchService *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->search_results_loaded((*reinterpret_cast< std::add_pointer_t<QList<fincept::services::equity::SearchResult>>>(_a[1]))); break;
        case 1: _t->quote_loaded((*reinterpret_cast< std::add_pointer_t<fincept::services::equity::QuoteData>>(_a[1]))); break;
        case 2: _t->info_loaded((*reinterpret_cast< std::add_pointer_t<fincept::services::equity::StockInfo>>(_a[1]))); break;
        case 3: _t->historical_loaded((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QList<fincept::services::equity::Candle>>>(_a[2]))); break;
        case 4: _t->financials_loaded((*reinterpret_cast< std::add_pointer_t<fincept::services::equity::FinancialsData>>(_a[1]))); break;
        case 5: _t->technicals_loaded((*reinterpret_cast< std::add_pointer_t<fincept::services::equity::TechnicalsData>>(_a[1]))); break;
        case 6: _t->peers_loaded((*reinterpret_cast< std::add_pointer_t<QList<fincept::services::equity::PeerData>>>(_a[1]))); break;
        case 7: _t->news_loaded((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QList<fincept::services::equity::NewsArticle>>>(_a[2]))); break;
        case 8: _t->error_occurred((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _q_method_type = void (EquityResearchService::*)(QVector<fincept::services::equity::SearchResult> );
            if (_q_method_type _q_method = &EquityResearchService::search_results_loaded; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _q_method_type = void (EquityResearchService::*)(fincept::services::equity::QuoteData );
            if (_q_method_type _q_method = &EquityResearchService::quote_loaded; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _q_method_type = void (EquityResearchService::*)(fincept::services::equity::StockInfo );
            if (_q_method_type _q_method = &EquityResearchService::info_loaded; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _q_method_type = void (EquityResearchService::*)(QString , QVector<fincept::services::equity::Candle> );
            if (_q_method_type _q_method = &EquityResearchService::historical_loaded; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _q_method_type = void (EquityResearchService::*)(fincept::services::equity::FinancialsData );
            if (_q_method_type _q_method = &EquityResearchService::financials_loaded; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _q_method_type = void (EquityResearchService::*)(fincept::services::equity::TechnicalsData );
            if (_q_method_type _q_method = &EquityResearchService::technicals_loaded; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
        {
            using _q_method_type = void (EquityResearchService::*)(QVector<fincept::services::equity::PeerData> );
            if (_q_method_type _q_method = &EquityResearchService::peers_loaded; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 6;
                return;
            }
        }
        {
            using _q_method_type = void (EquityResearchService::*)(QString , QVector<fincept::services::equity::NewsArticle> );
            if (_q_method_type _q_method = &EquityResearchService::news_loaded; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 7;
                return;
            }
        }
        {
            using _q_method_type = void (EquityResearchService::*)(QString , QString );
            if (_q_method_type _q_method = &EquityResearchService::error_occurred; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 8;
                return;
            }
        }
    }
}

const QMetaObject *fincept::services::equity::EquityResearchService::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *fincept::services::equity::EquityResearchService::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ZN7fincept8services6equity21EquityResearchServiceE.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int fincept::services::equity::EquityResearchService::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void fincept::services::equity::EquityResearchService::search_results_loaded(QVector<fincept::services::equity::SearchResult> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void fincept::services::equity::EquityResearchService::quote_loaded(fincept::services::equity::QuoteData _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void fincept::services::equity::EquityResearchService::info_loaded(fincept::services::equity::StockInfo _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void fincept::services::equity::EquityResearchService::historical_loaded(QString _t1, QVector<fincept::services::equity::Candle> _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void fincept::services::equity::EquityResearchService::financials_loaded(fincept::services::equity::FinancialsData _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void fincept::services::equity::EquityResearchService::technicals_loaded(fincept::services::equity::TechnicalsData _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void fincept::services::equity::EquityResearchService::peers_loaded(QVector<fincept::services::equity::PeerData> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void fincept::services::equity::EquityResearchService::news_loaded(QString _t1, QVector<fincept::services::equity::NewsArticle> _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void fincept::services::equity::EquityResearchService::error_occurred(QString _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}
QT_WARNING_POP
