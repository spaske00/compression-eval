/****************************************************************************
** Meta object code from reading C++ file 'DBnomicsService.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../upstream/fincept-qt/src/services/dbnomics/DBnomicsService.h"
#include <QtCore/qmetatype.h>
#include <QtCore/QList>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DBnomicsService.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN7fincept8services15DBnomicsServiceE_t {};
} // unnamed namespace


#ifdef QT_MOC_HAS_STRINGDATA
static constexpr auto qt_meta_stringdata_ZN7fincept8services15DBnomicsServiceE = QtMocHelpers::stringData(
    "fincept::services::DBnomicsService",
    "providers_loaded",
    "",
    "QList<DbnProvider>",
    "providers",
    "datasets_loaded",
    "QList<DbnDataset>",
    "datasets",
    "DbnPagination",
    "page",
    "append",
    "series_loaded",
    "QList<DbnSeriesInfo>",
    "series",
    "observations_loaded",
    "DbnDataPoint",
    "data",
    "search_results_loaded",
    "QList<DbnSearchResult>",
    "results",
    "error_occurred",
    "context",
    "message"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA

Q_CONSTINIT static const uint qt_meta_data_ZN7fincept8services15DBnomicsServiceE[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   50,    2, 0x06,    1 /* Public */,
       5,    3,   53,    2, 0x06,    3 /* Public */,
      11,    3,   60,    2, 0x06,    7 /* Public */,
      14,    1,   67,    2, 0x06,   11 /* Public */,
      17,    3,   70,    2, 0x06,   13 /* Public */,
      20,    2,   77,    2, 0x06,   17 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6, 0x80000000 | 8, QMetaType::Bool,    7,    9,   10,
    QMetaType::Void, 0x80000000 | 12, 0x80000000 | 8, QMetaType::Bool,   13,    9,   10,
    QMetaType::Void, 0x80000000 | 15,   16,
    QMetaType::Void, 0x80000000 | 18, 0x80000000 | 8, QMetaType::Bool,   19,    9,   10,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   21,   22,

       0        // eod
};

Q_CONSTINIT const QMetaObject fincept::services::DBnomicsService::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_ZN7fincept8services15DBnomicsServiceE.offsetsAndSizes,
    qt_meta_data_ZN7fincept8services15DBnomicsServiceE,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_tag_ZN7fincept8services15DBnomicsServiceE_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<DBnomicsService, std::true_type>,
        // method 'providers_loaded'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QVector<DbnProvider>, std::false_type>,
        // method 'datasets_loaded'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QVector<DbnDataset>, std::false_type>,
        QtPrivate::TypeAndForceComplete<DbnPagination, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'series_loaded'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QVector<DbnSeriesInfo>, std::false_type>,
        QtPrivate::TypeAndForceComplete<DbnPagination, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'observations_loaded'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<DbnDataPoint, std::false_type>,
        // method 'search_results_loaded'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QVector<DbnSearchResult>, std::false_type>,
        QtPrivate::TypeAndForceComplete<DbnPagination, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'error_occurred'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>
    >,
    nullptr
} };

void fincept::services::DBnomicsService::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<DBnomicsService *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->providers_loaded((*reinterpret_cast< std::add_pointer_t<QList<DbnProvider>>>(_a[1]))); break;
        case 1: _t->datasets_loaded((*reinterpret_cast< std::add_pointer_t<QList<DbnDataset>>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<DbnPagination>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[3]))); break;
        case 2: _t->series_loaded((*reinterpret_cast< std::add_pointer_t<QList<DbnSeriesInfo>>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<DbnPagination>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[3]))); break;
        case 3: _t->observations_loaded((*reinterpret_cast< std::add_pointer_t<DbnDataPoint>>(_a[1]))); break;
        case 4: _t->search_results_loaded((*reinterpret_cast< std::add_pointer_t<QList<DbnSearchResult>>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<DbnPagination>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[3]))); break;
        case 5: _t->error_occurred((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _q_method_type = void (DBnomicsService::*)(QVector<DbnProvider> );
            if (_q_method_type _q_method = &DBnomicsService::providers_loaded; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _q_method_type = void (DBnomicsService::*)(QVector<DbnDataset> , DbnPagination , bool );
            if (_q_method_type _q_method = &DBnomicsService::datasets_loaded; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _q_method_type = void (DBnomicsService::*)(QVector<DbnSeriesInfo> , DbnPagination , bool );
            if (_q_method_type _q_method = &DBnomicsService::series_loaded; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _q_method_type = void (DBnomicsService::*)(DbnDataPoint );
            if (_q_method_type _q_method = &DBnomicsService::observations_loaded; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _q_method_type = void (DBnomicsService::*)(QVector<DbnSearchResult> , DbnPagination , bool );
            if (_q_method_type _q_method = &DBnomicsService::search_results_loaded; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _q_method_type = void (DBnomicsService::*)(const QString & , const QString & );
            if (_q_method_type _q_method = &DBnomicsService::error_occurred; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
    }
}

const QMetaObject *fincept::services::DBnomicsService::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *fincept::services::DBnomicsService::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ZN7fincept8services15DBnomicsServiceE.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "fincept::datahub::Producer"))
        return static_cast< fincept::datahub::Producer*>(this);
    return QObject::qt_metacast(_clname);
}

int fincept::services::DBnomicsService::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void fincept::services::DBnomicsService::providers_loaded(QVector<DbnProvider> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void fincept::services::DBnomicsService::datasets_loaded(QVector<DbnDataset> _t1, DbnPagination _t2, bool _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void fincept::services::DBnomicsService::series_loaded(QVector<DbnSeriesInfo> _t1, DbnPagination _t2, bool _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void fincept::services::DBnomicsService::observations_loaded(DbnDataPoint _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void fincept::services::DBnomicsService::search_results_loaded(QVector<DbnSearchResult> _t1, DbnPagination _t2, bool _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void fincept::services::DBnomicsService::error_occurred(const QString & _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_WARNING_POP
