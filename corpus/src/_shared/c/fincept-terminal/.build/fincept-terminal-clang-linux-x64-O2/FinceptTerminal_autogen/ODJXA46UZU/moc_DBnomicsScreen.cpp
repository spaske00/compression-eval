/****************************************************************************
** Meta object code from reading C++ file 'DBnomicsScreen.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../upstream/fincept-qt/src/screens/dbnomics/DBnomicsScreen.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DBnomicsScreen.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN7fincept7screens14DBnomicsScreenE_t {};
} // unnamed namespace


#ifdef QT_MOC_HAS_STRINGDATA
static constexpr auto qt_meta_stringdata_ZN7fincept7screens14DBnomicsScreenE = QtMocHelpers::stringData(
    "fincept::screens::DBnomicsScreen",
    "on_providers_loaded",
    "",
    "QList<services::DbnProvider>",
    "providers",
    "on_datasets_loaded",
    "QList<services::DbnDataset>",
    "datasets",
    "services::DbnPagination",
    "page",
    "append",
    "on_series_loaded",
    "QList<services::DbnSeriesInfo>",
    "series",
    "on_observations_loaded",
    "services::DbnDataPoint",
    "data",
    "on_search_results_loaded",
    "QList<services::DbnSearchResult>",
    "results",
    "on_service_error",
    "context",
    "message",
    "on_fetch_clicked",
    "on_refresh_clicked",
    "on_export_csv",
    "on_provider_selected",
    "code",
    "on_dataset_selected",
    "on_series_selected",
    "prov",
    "ds",
    "on_chart_type_changed",
    "index",
    "on_add_to_single_view",
    "on_clear_all",
    "on_add_slot",
    "on_add_to_slot",
    "slot_index",
    "on_remove_from_slot",
    "series_id",
    "on_remove_slot"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA

Q_CONSTINIT static const uint qt_meta_data_ZN7fincept7screens14DBnomicsScreenE[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      19,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,  128,    2, 0x08,    1 /* Private */,
       5,    3,  131,    2, 0x08,    3 /* Private */,
      11,    3,  138,    2, 0x08,    7 /* Private */,
      14,    1,  145,    2, 0x08,   11 /* Private */,
      17,    3,  148,    2, 0x08,   13 /* Private */,
      20,    2,  155,    2, 0x08,   17 /* Private */,
      23,    0,  160,    2, 0x08,   20 /* Private */,
      24,    0,  161,    2, 0x08,   21 /* Private */,
      25,    0,  162,    2, 0x08,   22 /* Private */,
      26,    1,  163,    2, 0x08,   23 /* Private */,
      28,    1,  166,    2, 0x08,   25 /* Private */,
      29,    3,  169,    2, 0x08,   27 /* Private */,
      32,    1,  176,    2, 0x08,   31 /* Private */,
      34,    0,  179,    2, 0x08,   33 /* Private */,
      35,    0,  180,    2, 0x08,   34 /* Private */,
      36,    0,  181,    2, 0x08,   35 /* Private */,
      37,    1,  182,    2, 0x08,   36 /* Private */,
      39,    2,  185,    2, 0x08,   38 /* Private */,
      41,    1,  190,    2, 0x08,   41 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6, 0x80000000 | 8, QMetaType::Bool,    7,    9,   10,
    QMetaType::Void, 0x80000000 | 12, 0x80000000 | 8, QMetaType::Bool,   13,    9,   10,
    QMetaType::Void, 0x80000000 | 15,   16,
    QMetaType::Void, 0x80000000 | 18, 0x80000000 | 8, QMetaType::Bool,   19,    9,   10,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   21,   22,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   27,
    QMetaType::Void, QMetaType::QString,   27,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString,   30,   31,   27,
    QMetaType::Void, QMetaType::Int,   33,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   38,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,   38,   40,
    QMetaType::Void, QMetaType::Int,   38,

       0        // eod
};

Q_CONSTINIT const QMetaObject fincept::screens::DBnomicsScreen::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_ZN7fincept7screens14DBnomicsScreenE.offsetsAndSizes,
    qt_meta_data_ZN7fincept7screens14DBnomicsScreenE,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_tag_ZN7fincept7screens14DBnomicsScreenE_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<DBnomicsScreen, std::true_type>,
        // method 'on_providers_loaded'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QVector<services::DbnProvider> &, std::false_type>,
        // method 'on_datasets_loaded'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QVector<services::DbnDataset> &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const services::DbnPagination &, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'on_series_loaded'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QVector<services::DbnSeriesInfo> &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const services::DbnPagination &, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'on_observations_loaded'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const services::DbnDataPoint &, std::false_type>,
        // method 'on_search_results_loaded'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QVector<services::DbnSearchResult> &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const services::DbnPagination &, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'on_service_error'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'on_fetch_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_refresh_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_export_csv'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_provider_selected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'on_dataset_selected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'on_series_selected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'on_chart_type_changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_add_to_single_view'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_clear_all'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_add_slot'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_add_to_slot'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_remove_from_slot'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'on_remove_slot'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>
    >,
    nullptr
} };

void fincept::screens::DBnomicsScreen::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<DBnomicsScreen *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->on_providers_loaded((*reinterpret_cast< std::add_pointer_t<QList<services::DbnProvider>>>(_a[1]))); break;
        case 1: _t->on_datasets_loaded((*reinterpret_cast< std::add_pointer_t<QList<services::DbnDataset>>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<services::DbnPagination>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[3]))); break;
        case 2: _t->on_series_loaded((*reinterpret_cast< std::add_pointer_t<QList<services::DbnSeriesInfo>>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<services::DbnPagination>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[3]))); break;
        case 3: _t->on_observations_loaded((*reinterpret_cast< std::add_pointer_t<services::DbnDataPoint>>(_a[1]))); break;
        case 4: _t->on_search_results_loaded((*reinterpret_cast< std::add_pointer_t<QList<services::DbnSearchResult>>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<services::DbnPagination>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[3]))); break;
        case 5: _t->on_service_error((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 6: _t->on_fetch_clicked(); break;
        case 7: _t->on_refresh_clicked(); break;
        case 8: _t->on_export_csv(); break;
        case 9: _t->on_provider_selected((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 10: _t->on_dataset_selected((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 11: _t->on_series_selected((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3]))); break;
        case 12: _t->on_chart_type_changed((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 13: _t->on_add_to_single_view(); break;
        case 14: _t->on_clear_all(); break;
        case 15: _t->on_add_slot(); break;
        case 16: _t->on_add_to_slot((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 17: _t->on_remove_from_slot((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 18: _t->on_remove_slot((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *fincept::screens::DBnomicsScreen::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *fincept::screens::DBnomicsScreen::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ZN7fincept7screens14DBnomicsScreenE.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "IStatefulScreen"))
        return static_cast< IStatefulScreen*>(this);
    return QWidget::qt_metacast(_clname);
}

int fincept::screens::DBnomicsScreen::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
