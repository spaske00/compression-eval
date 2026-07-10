/****************************************************************************
** Meta object code from reading C++ file 'PortfolioCloudAdapter.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../upstream/fincept-qt/src/services/cloud/PortfolioCloudAdapter.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'PortfolioCloudAdapter.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN7fincept8services5cloud21PortfolioCloudAdapterE_t {};
} // unnamed namespace


#ifdef QT_MOC_HAS_STRINGDATA
static constexpr auto qt_meta_stringdata_ZN7fincept8services5cloud21PortfolioCloudAdapterE = QtMocHelpers::stringData(
    "fincept::services::cloud::PortfolioCloudAdapter"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA

Q_CONSTINIT static const uint qt_meta_data_ZN7fincept8services5cloud21PortfolioCloudAdapterE[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

Q_CONSTINIT const QMetaObject fincept::services::cloud::PortfolioCloudAdapter::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_ZN7fincept8services5cloud21PortfolioCloudAdapterE.offsetsAndSizes,
    qt_meta_data_ZN7fincept8services5cloud21PortfolioCloudAdapterE,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_tag_ZN7fincept8services5cloud21PortfolioCloudAdapterE_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<PortfolioCloudAdapter, std::true_type>
    >,
    nullptr
} };

void fincept::services::cloud::PortfolioCloudAdapter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<PortfolioCloudAdapter *>(_o);
    (void)_t;
    (void)_c;
    (void)_id;
    (void)_a;
}

const QMetaObject *fincept::services::cloud::PortfolioCloudAdapter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *fincept::services::cloud::PortfolioCloudAdapter::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ZN7fincept8services5cloud21PortfolioCloudAdapterE.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "CloudDomainAdapter"))
        return static_cast< CloudDomainAdapter*>(this);
    return QObject::qt_metacast(_clname);
}

int fincept::services::cloud::PortfolioCloudAdapter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
