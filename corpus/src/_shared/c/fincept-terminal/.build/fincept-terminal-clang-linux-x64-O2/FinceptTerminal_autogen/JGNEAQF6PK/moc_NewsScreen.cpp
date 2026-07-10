/****************************************************************************
** Meta object code from reading C++ file 'NewsScreen.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../upstream/fincept-qt/src/screens/news/NewsScreen.h"
#include <QtNetwork/QSslError>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'NewsScreen.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN7fincept7screens10NewsScreenE_t {};
} // unnamed namespace


#ifdef QT_MOC_HAS_STRINGDATA
static constexpr auto qt_meta_stringdata_ZN7fincept7screens10NewsScreenE = QtMocHelpers::stringData(
    "fincept::screens::NewsScreen",
    "on_category_changed",
    "",
    "category",
    "on_time_range_changed",
    "range",
    "on_sort_changed",
    "sort",
    "on_view_mode_changed",
    "mode",
    "on_search_changed",
    "query",
    "on_refresh",
    "on_article_clicked",
    "services::NewsArticle",
    "article",
    "on_cluster_clicked",
    "services::NewsCluster",
    "cluster",
    "on_near_bottom",
    "on_sidebar_category_clicked",
    "on_sidebar_article_clicked",
    "on_monitor_added",
    "label",
    "keywords",
    "on_monitor_toggled",
    "id",
    "on_monitor_deleted",
    "on_analyze_requested",
    "url",
    "on_related_clicked",
    "on_drawer_toggle",
    "on_detail_closed",
    "on_manage_sources"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA

Q_CONSTINIT static const uint qt_meta_data_ZN7fincept7screens10NewsScreenE[] = {

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
       4,    1,  131,    2, 0x08,    3 /* Private */,
       6,    1,  134,    2, 0x08,    5 /* Private */,
       8,    1,  137,    2, 0x08,    7 /* Private */,
      10,    1,  140,    2, 0x08,    9 /* Private */,
      12,    0,  143,    2, 0x08,   11 /* Private */,
      13,    1,  144,    2, 0x08,   12 /* Private */,
      16,    1,  147,    2, 0x08,   14 /* Private */,
      19,    0,  150,    2, 0x08,   16 /* Private */,
      20,    1,  151,    2, 0x08,   17 /* Private */,
      21,    1,  154,    2, 0x08,   19 /* Private */,
      22,    2,  157,    2, 0x08,   21 /* Private */,
      25,    1,  162,    2, 0x08,   24 /* Private */,
      27,    1,  165,    2, 0x08,   26 /* Private */,
      28,    1,  168,    2, 0x08,   28 /* Private */,
      30,    1,  171,    2, 0x08,   30 /* Private */,
      31,    0,  174,    2, 0x08,   32 /* Private */,
      32,    0,  175,    2, 0x08,   33 /* Private */,
      33,    0,  176,    2, 0x08,   34 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void, QMetaType::QString,   11,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 14,   15,
    QMetaType::Void, 0x80000000 | 17,   18,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, 0x80000000 | 14,   15,
    QMetaType::Void, QMetaType::QString, QMetaType::QStringList,   23,   24,
    QMetaType::Void, QMetaType::QString,   26,
    QMetaType::Void, QMetaType::QString,   26,
    QMetaType::Void, QMetaType::QString,   29,
    QMetaType::Void, 0x80000000 | 14,   15,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject fincept::screens::NewsScreen::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_ZN7fincept7screens10NewsScreenE.offsetsAndSizes,
    qt_meta_data_ZN7fincept7screens10NewsScreenE,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_tag_ZN7fincept7screens10NewsScreenE_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<NewsScreen, std::true_type>,
        // method 'on_category_changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'on_time_range_changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'on_sort_changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'on_view_mode_changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'on_search_changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'on_refresh'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_article_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const services::NewsArticle &, std::false_type>,
        // method 'on_cluster_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const services::NewsCluster &, std::false_type>,
        // method 'on_near_bottom'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_sidebar_category_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'on_sidebar_article_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const services::NewsArticle &, std::false_type>,
        // method 'on_monitor_added'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QStringList &, std::false_type>,
        // method 'on_monitor_toggled'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'on_monitor_deleted'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'on_analyze_requested'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'on_related_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const services::NewsArticle &, std::false_type>,
        // method 'on_drawer_toggle'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_detail_closed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_manage_sources'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void fincept::screens::NewsScreen::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<NewsScreen *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->on_category_changed((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 1: _t->on_time_range_changed((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 2: _t->on_sort_changed((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 3: _t->on_view_mode_changed((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 4: _t->on_search_changed((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 5: _t->on_refresh(); break;
        case 6: _t->on_article_clicked((*reinterpret_cast< std::add_pointer_t<services::NewsArticle>>(_a[1]))); break;
        case 7: _t->on_cluster_clicked((*reinterpret_cast< std::add_pointer_t<services::NewsCluster>>(_a[1]))); break;
        case 8: _t->on_near_bottom(); break;
        case 9: _t->on_sidebar_category_clicked((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 10: _t->on_sidebar_article_clicked((*reinterpret_cast< std::add_pointer_t<services::NewsArticle>>(_a[1]))); break;
        case 11: _t->on_monitor_added((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QStringList>>(_a[2]))); break;
        case 12: _t->on_monitor_toggled((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 13: _t->on_monitor_deleted((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 14: _t->on_analyze_requested((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 15: _t->on_related_clicked((*reinterpret_cast< std::add_pointer_t<services::NewsArticle>>(_a[1]))); break;
        case 16: _t->on_drawer_toggle(); break;
        case 17: _t->on_detail_closed(); break;
        case 18: _t->on_manage_sources(); break;
        default: ;
        }
    }
}

const QMetaObject *fincept::screens::NewsScreen::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *fincept::screens::NewsScreen::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ZN7fincept7screens10NewsScreenE.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "IStatefulScreen"))
        return static_cast< IStatefulScreen*>(this);
    if (!strcmp(_clname, "IGroupLinked"))
        return static_cast< IGroupLinked*>(this);
    if (!strcmp(_clname, "in.fincept.IGroupLinked/1.0"))
        return static_cast< fincept::IGroupLinked*>(this);
    return QWidget::qt_metacast(_clname);
}

int fincept::screens::NewsScreen::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
