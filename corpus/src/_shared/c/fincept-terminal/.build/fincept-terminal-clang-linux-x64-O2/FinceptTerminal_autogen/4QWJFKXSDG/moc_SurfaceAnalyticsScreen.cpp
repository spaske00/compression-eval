/****************************************************************************
** Meta object code from reading C++ file 'SurfaceAnalyticsScreen.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../upstream/fincept-qt/src/screens/surface_analytics/SurfaceAnalyticsScreen.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SurfaceAnalyticsScreen.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN7fincept7surface22SurfaceAnalyticsScreenE_t {};
} // unnamed namespace


#ifdef QT_MOC_HAS_STRINGDATA
static constexpr auto qt_meta_stringdata_ZN7fincept7surface22SurfaceAnalyticsScreenE = QtMocHelpers::stringData(
    "fincept::surface::SurfaceAnalyticsScreen",
    "on_category_clicked",
    "",
    "index",
    "on_surface_clicked",
    "cat",
    "surf_index",
    "on_view_3d",
    "on_view_table",
    "on_view_line",
    "on_import_csv",
    "on_refresh",
    "on_controls_changed",
    "on_control_symbol_changed",
    "sym",
    "on_fetch_requested",
    "on_vol_surface_received",
    "fincept::DatabentoVolSurfaceResult",
    "r",
    "on_ohlcv_received",
    "fincept::DatabentoOhlcvResult",
    "on_futures_received",
    "fincept::DatabentoFuturesResult",
    "on_surface_received",
    "fincept::DatabentoSurfaceResult",
    "on_db_fetch_started",
    "desc",
    "on_db_fetch_failed",
    "err",
    "on_db_connection_tested",
    "ok",
    "msg",
    "on_db_raw_response",
    "cmd",
    "raw_stdout"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA

Q_CONSTINIT static const uint qt_meta_data_ZN7fincept7surface22SurfaceAnalyticsScreenE[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      18,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,  122,    2, 0x08,    1 /* Private */,
       4,    2,  125,    2, 0x08,    3 /* Private */,
       7,    0,  130,    2, 0x08,    6 /* Private */,
       8,    0,  131,    2, 0x08,    7 /* Private */,
       9,    0,  132,    2, 0x08,    8 /* Private */,
      10,    0,  133,    2, 0x08,    9 /* Private */,
      11,    0,  134,    2, 0x08,   10 /* Private */,
      12,    0,  135,    2, 0x08,   11 /* Private */,
      13,    1,  136,    2, 0x08,   12 /* Private */,
      15,    0,  139,    2, 0x08,   14 /* Private */,
      16,    1,  140,    2, 0x08,   15 /* Private */,
      19,    1,  143,    2, 0x08,   17 /* Private */,
      21,    1,  146,    2, 0x08,   19 /* Private */,
      23,    1,  149,    2, 0x08,   21 /* Private */,
      25,    1,  152,    2, 0x08,   23 /* Private */,
      27,    1,  155,    2, 0x08,   25 /* Private */,
      29,    2,  158,    2, 0x08,   27 /* Private */,
      32,    2,  163,    2, 0x08,   30 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    5,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   14,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 17,   18,
    QMetaType::Void, 0x80000000 | 20,   18,
    QMetaType::Void, 0x80000000 | 22,   18,
    QMetaType::Void, 0x80000000 | 24,   18,
    QMetaType::Void, QMetaType::QString,   26,
    QMetaType::Void, QMetaType::QString,   28,
    QMetaType::Void, QMetaType::Bool, QMetaType::QString,   30,   31,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   33,   34,

       0        // eod
};

Q_CONSTINIT const QMetaObject fincept::surface::SurfaceAnalyticsScreen::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_ZN7fincept7surface22SurfaceAnalyticsScreenE.offsetsAndSizes,
    qt_meta_data_ZN7fincept7surface22SurfaceAnalyticsScreenE,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_tag_ZN7fincept7surface22SurfaceAnalyticsScreenE_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<SurfaceAnalyticsScreen, std::true_type>,
        // method 'on_category_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_surface_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_view_3d'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_view_table'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_view_line'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_import_csv'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_refresh'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_controls_changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_control_symbol_changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'on_fetch_requested'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_vol_surface_received'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const fincept::DatabentoVolSurfaceResult &, std::false_type>,
        // method 'on_ohlcv_received'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const fincept::DatabentoOhlcvResult &, std::false_type>,
        // method 'on_futures_received'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const fincept::DatabentoFuturesResult &, std::false_type>,
        // method 'on_surface_received'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const fincept::DatabentoSurfaceResult &, std::false_type>,
        // method 'on_db_fetch_started'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'on_db_fetch_failed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'on_db_connection_tested'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'on_db_raw_response'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>
    >,
    nullptr
} };

void fincept::surface::SurfaceAnalyticsScreen::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<SurfaceAnalyticsScreen *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->on_category_clicked((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 1: _t->on_surface_clicked((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 2: _t->on_view_3d(); break;
        case 3: _t->on_view_table(); break;
        case 4: _t->on_view_line(); break;
        case 5: _t->on_import_csv(); break;
        case 6: _t->on_refresh(); break;
        case 7: _t->on_controls_changed(); break;
        case 8: _t->on_control_symbol_changed((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 9: _t->on_fetch_requested(); break;
        case 10: _t->on_vol_surface_received((*reinterpret_cast< std::add_pointer_t<fincept::DatabentoVolSurfaceResult>>(_a[1]))); break;
        case 11: _t->on_ohlcv_received((*reinterpret_cast< std::add_pointer_t<fincept::DatabentoOhlcvResult>>(_a[1]))); break;
        case 12: _t->on_futures_received((*reinterpret_cast< std::add_pointer_t<fincept::DatabentoFuturesResult>>(_a[1]))); break;
        case 13: _t->on_surface_received((*reinterpret_cast< std::add_pointer_t<fincept::DatabentoSurfaceResult>>(_a[1]))); break;
        case 14: _t->on_db_fetch_started((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 15: _t->on_db_fetch_failed((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 16: _t->on_db_connection_tested((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 17: _t->on_db_raw_response((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObject *fincept::surface::SurfaceAnalyticsScreen::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *fincept::surface::SurfaceAnalyticsScreen::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ZN7fincept7surface22SurfaceAnalyticsScreenE.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "fincept::screens::IStatefulScreen"))
        return static_cast< fincept::screens::IStatefulScreen*>(this);
    if (!strcmp(_clname, "fincept::IGroupLinked"))
        return static_cast< fincept::IGroupLinked*>(this);
    if (!strcmp(_clname, "in.fincept.IGroupLinked/1.0"))
        return static_cast< fincept::IGroupLinked*>(this);
    return QWidget::qt_metacast(_clname);
}

int fincept::surface::SurfaceAnalyticsScreen::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 18)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 18;
    }
    return _id;
}
QT_WARNING_POP
