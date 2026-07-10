/****************************************************************************
** Meta object code from reading C++ file 'PortfolioService.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../upstream/fincept-qt/src/services/portfolio/PortfolioService.h"
#include <QtCore/qmetatype.h>
#include <QtCore/QList>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'PortfolioService.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN7fincept8services16PortfolioServiceE_t {};
} // unnamed namespace


#ifdef QT_MOC_HAS_STRINGDATA
static constexpr auto qt_meta_stringdata_ZN7fincept8services16PortfolioServiceE = QtMocHelpers::stringData(
    "fincept::services::PortfolioService",
    "portfolios_loaded",
    "",
    "QList<portfolio::Portfolio>",
    "portfolios",
    "portfolio_created",
    "portfolio::Portfolio",
    "portfolio",
    "portfolio_deleted",
    "id",
    "summary_loaded",
    "portfolio::PortfolioSummary",
    "summary",
    "summary_error",
    "portfolio_id",
    "error",
    "transactions_loaded",
    "QList<portfolio::Transaction>",
    "transactions",
    "metrics_computed",
    "portfolio::ComputedMetrics",
    "metrics",
    "snapshots_loaded",
    "QList<portfolio::PortfolioSnapshot>",
    "snapshots",
    "asset_added",
    "asset_sold",
    "export_complete",
    "file_path",
    "import_complete",
    "portfolio::ImportResult",
    "result",
    "correlation_computed",
    "QHash<QString,double>",
    "matrix",
    "spy_history_loaded",
    "dates",
    "QList<double>",
    "closes",
    "benchmark_history_loaded",
    "symbol",
    "risk_free_rate_loaded",
    "rate",
    "history_backfilled",
    "point_count"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA

Q_CONSTINIT static const uint qt_meta_data_ZN7fincept8services16PortfolioServiceE[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      17,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,  116,    2, 0x06,    1 /* Public */,
       5,    1,  119,    2, 0x06,    3 /* Public */,
       8,    1,  122,    2, 0x06,    5 /* Public */,
      10,    1,  125,    2, 0x06,    7 /* Public */,
      13,    2,  128,    2, 0x06,    9 /* Public */,
      16,    1,  133,    2, 0x06,   12 /* Public */,
      19,    1,  136,    2, 0x06,   14 /* Public */,
      22,    2,  139,    2, 0x06,   16 /* Public */,
      25,    1,  144,    2, 0x06,   19 /* Public */,
      26,    1,  147,    2, 0x06,   21 /* Public */,
      27,    1,  150,    2, 0x06,   23 /* Public */,
      29,    1,  153,    2, 0x06,   25 /* Public */,
      32,    1,  156,    2, 0x06,   27 /* Public */,
      35,    2,  159,    2, 0x06,   29 /* Public */,
      39,    3,  164,    2, 0x06,   32 /* Public */,
      41,    1,  171,    2, 0x06,   36 /* Public */,
      43,    2,  174,    2, 0x06,   38 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   14,   15,
    QMetaType::Void, 0x80000000 | 17,   18,
    QMetaType::Void, 0x80000000 | 20,   21,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 23,   14,   24,
    QMetaType::Void, QMetaType::QString,   14,
    QMetaType::Void, QMetaType::QString,   14,
    QMetaType::Void, QMetaType::QString,   28,
    QMetaType::Void, 0x80000000 | 30,   31,
    QMetaType::Void, 0x80000000 | 33,   34,
    QMetaType::Void, QMetaType::QStringList, 0x80000000 | 37,   36,   38,
    QMetaType::Void, QMetaType::QString, QMetaType::QStringList, 0x80000000 | 37,   40,   36,   38,
    QMetaType::Void, QMetaType::Double,   42,
    QMetaType::Void, QMetaType::QString, QMetaType::Int,   14,   44,

       0        // eod
};

Q_CONSTINIT const QMetaObject fincept::services::PortfolioService::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_ZN7fincept8services16PortfolioServiceE.offsetsAndSizes,
    qt_meta_data_ZN7fincept8services16PortfolioServiceE,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_tag_ZN7fincept8services16PortfolioServiceE_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<PortfolioService, std::true_type>,
        // method 'portfolios_loaded'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QVector<portfolio::Portfolio>, std::false_type>,
        // method 'portfolio_created'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<portfolio::Portfolio, std::false_type>,
        // method 'portfolio_deleted'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'summary_loaded'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<portfolio::PortfolioSummary, std::false_type>,
        // method 'summary_error'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'transactions_loaded'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QVector<portfolio::Transaction>, std::false_type>,
        // method 'metrics_computed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<portfolio::ComputedMetrics, std::false_type>,
        // method 'snapshots_loaded'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<QVector<portfolio::PortfolioSnapshot>, std::false_type>,
        // method 'asset_added'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'asset_sold'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'export_complete'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'import_complete'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<portfolio::ImportResult, std::false_type>,
        // method 'correlation_computed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QHash<QString,double>, std::false_type>,
        // method 'spy_history_loaded'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QStringList, std::false_type>,
        QtPrivate::TypeAndForceComplete<QVector<double>, std::false_type>,
        // method 'benchmark_history_loaded'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<QStringList, std::false_type>,
        QtPrivate::TypeAndForceComplete<QVector<double>, std::false_type>,
        // method 'risk_free_rate_loaded'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        // method 'history_backfilled'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>
    >,
    nullptr
} };

void fincept::services::PortfolioService::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<PortfolioService *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->portfolios_loaded((*reinterpret_cast< std::add_pointer_t<QList<portfolio::Portfolio>>>(_a[1]))); break;
        case 1: _t->portfolio_created((*reinterpret_cast< std::add_pointer_t<portfolio::Portfolio>>(_a[1]))); break;
        case 2: _t->portfolio_deleted((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 3: _t->summary_loaded((*reinterpret_cast< std::add_pointer_t<portfolio::PortfolioSummary>>(_a[1]))); break;
        case 4: _t->summary_error((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 5: _t->transactions_loaded((*reinterpret_cast< std::add_pointer_t<QList<portfolio::Transaction>>>(_a[1]))); break;
        case 6: _t->metrics_computed((*reinterpret_cast< std::add_pointer_t<portfolio::ComputedMetrics>>(_a[1]))); break;
        case 7: _t->snapshots_loaded((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QList<portfolio::PortfolioSnapshot>>>(_a[2]))); break;
        case 8: _t->asset_added((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 9: _t->asset_sold((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 10: _t->export_complete((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 11: _t->import_complete((*reinterpret_cast< std::add_pointer_t<portfolio::ImportResult>>(_a[1]))); break;
        case 12: _t->correlation_computed((*reinterpret_cast< std::add_pointer_t<QHash<QString,double>>>(_a[1]))); break;
        case 13: _t->spy_history_loaded((*reinterpret_cast< std::add_pointer_t<QStringList>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QList<double>>>(_a[2]))); break;
        case 14: _t->benchmark_history_loaded((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QStringList>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QList<double>>>(_a[3]))); break;
        case 15: _t->risk_free_rate_loaded((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 16: _t->history_backfilled((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 13:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QList<double> >(); break;
            }
            break;
        case 14:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 2:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QList<double> >(); break;
            }
            break;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _q_method_type = void (PortfolioService::*)(QVector<portfolio::Portfolio> );
            if (_q_method_type _q_method = &PortfolioService::portfolios_loaded; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _q_method_type = void (PortfolioService::*)(portfolio::Portfolio );
            if (_q_method_type _q_method = &PortfolioService::portfolio_created; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _q_method_type = void (PortfolioService::*)(QString );
            if (_q_method_type _q_method = &PortfolioService::portfolio_deleted; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _q_method_type = void (PortfolioService::*)(portfolio::PortfolioSummary );
            if (_q_method_type _q_method = &PortfolioService::summary_loaded; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _q_method_type = void (PortfolioService::*)(QString , QString );
            if (_q_method_type _q_method = &PortfolioService::summary_error; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _q_method_type = void (PortfolioService::*)(QVector<portfolio::Transaction> );
            if (_q_method_type _q_method = &PortfolioService::transactions_loaded; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
        {
            using _q_method_type = void (PortfolioService::*)(portfolio::ComputedMetrics );
            if (_q_method_type _q_method = &PortfolioService::metrics_computed; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 6;
                return;
            }
        }
        {
            using _q_method_type = void (PortfolioService::*)(QString , QVector<portfolio::PortfolioSnapshot> );
            if (_q_method_type _q_method = &PortfolioService::snapshots_loaded; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 7;
                return;
            }
        }
        {
            using _q_method_type = void (PortfolioService::*)(QString );
            if (_q_method_type _q_method = &PortfolioService::asset_added; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 8;
                return;
            }
        }
        {
            using _q_method_type = void (PortfolioService::*)(QString );
            if (_q_method_type _q_method = &PortfolioService::asset_sold; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 9;
                return;
            }
        }
        {
            using _q_method_type = void (PortfolioService::*)(QString );
            if (_q_method_type _q_method = &PortfolioService::export_complete; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 10;
                return;
            }
        }
        {
            using _q_method_type = void (PortfolioService::*)(portfolio::ImportResult );
            if (_q_method_type _q_method = &PortfolioService::import_complete; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 11;
                return;
            }
        }
        {
            using _q_method_type = void (PortfolioService::*)(QHash<QString,double> );
            if (_q_method_type _q_method = &PortfolioService::correlation_computed; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 12;
                return;
            }
        }
        {
            using _q_method_type = void (PortfolioService::*)(QStringList , QVector<double> );
            if (_q_method_type _q_method = &PortfolioService::spy_history_loaded; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 13;
                return;
            }
        }
        {
            using _q_method_type = void (PortfolioService::*)(QString , QStringList , QVector<double> );
            if (_q_method_type _q_method = &PortfolioService::benchmark_history_loaded; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 14;
                return;
            }
        }
        {
            using _q_method_type = void (PortfolioService::*)(double );
            if (_q_method_type _q_method = &PortfolioService::risk_free_rate_loaded; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 15;
                return;
            }
        }
        {
            using _q_method_type = void (PortfolioService::*)(QString , int );
            if (_q_method_type _q_method = &PortfolioService::history_backfilled; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 16;
                return;
            }
        }
    }
}

const QMetaObject *fincept::services::PortfolioService::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *fincept::services::PortfolioService::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ZN7fincept8services16PortfolioServiceE.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int fincept::services::PortfolioService::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    }
    return _id;
}

// SIGNAL 0
void fincept::services::PortfolioService::portfolios_loaded(QVector<portfolio::Portfolio> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void fincept::services::PortfolioService::portfolio_created(portfolio::Portfolio _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void fincept::services::PortfolioService::portfolio_deleted(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void fincept::services::PortfolioService::summary_loaded(portfolio::PortfolioSummary _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void fincept::services::PortfolioService::summary_error(QString _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void fincept::services::PortfolioService::transactions_loaded(QVector<portfolio::Transaction> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void fincept::services::PortfolioService::metrics_computed(portfolio::ComputedMetrics _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void fincept::services::PortfolioService::snapshots_loaded(QString _t1, QVector<portfolio::PortfolioSnapshot> _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void fincept::services::PortfolioService::asset_added(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void fincept::services::PortfolioService::asset_sold(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void fincept::services::PortfolioService::export_complete(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void fincept::services::PortfolioService::import_complete(portfolio::ImportResult _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void fincept::services::PortfolioService::correlation_computed(QHash<QString,double> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void fincept::services::PortfolioService::spy_history_loaded(QStringList _t1, QVector<double> _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void fincept::services::PortfolioService::benchmark_history_loaded(QString _t1, QStringList _t2, QVector<double> _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void fincept::services::PortfolioService::risk_free_rate_loaded(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}

// SIGNAL 16
void fincept::services::PortfolioService::history_backfilled(QString _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}
QT_WARNING_POP
