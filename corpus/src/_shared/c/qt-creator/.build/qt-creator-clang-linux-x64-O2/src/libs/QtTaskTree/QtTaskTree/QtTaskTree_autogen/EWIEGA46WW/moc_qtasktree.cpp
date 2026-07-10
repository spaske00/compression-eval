/****************************************************************************
** Meta object code from reading C++ file 'qtasktree.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../../upstream/src/libs/QtTaskTree/QtTaskTree/qtasktree.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qtasktree.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN10QtTaskTree14QTaskInterfaceE_t {};
} // unnamed namespace


#ifdef QT_MOC_HAS_STRINGDATA
static constexpr auto qt_meta_stringdata_ZN10QtTaskTree14QTaskInterfaceE = QtMocHelpers::stringData(
    "QtTaskTree::QTaskInterface",
    "done",
    "",
    "QtTaskTree::DoneResult",
    "result"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA

Q_CONSTINIT static const uint qt_meta_data_ZN10QtTaskTree14QTaskInterfaceE[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   20,    2, 0x06,    1 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

       0        // eod
};

Q_CONSTINIT const QMetaObject QtTaskTree::QTaskInterface::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_ZN10QtTaskTree14QTaskInterfaceE.offsetsAndSizes,
    qt_meta_data_ZN10QtTaskTree14QTaskInterfaceE,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_tag_ZN10QtTaskTree14QTaskInterfaceE_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QTaskInterface, std::true_type>,
        // method 'done'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QtTaskTree::DoneResult, std::false_type>
    >,
    nullptr
} };

void QtTaskTree::QTaskInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<QTaskInterface *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->done((*reinterpret_cast< std::add_pointer_t<QtTaskTree::DoneResult>>(_a[1])), QPrivateSignal()); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _q_method_type = void (QTaskInterface::*)(QtTaskTree::DoneResult , QPrivateSignal);
            if (_q_method_type _q_method = &QTaskInterface::done; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject *QtTaskTree::QTaskInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtTaskTree::QTaskInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ZN10QtTaskTree14QTaskInterfaceE.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QtTaskTree::QTaskInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void QtTaskTree::QTaskInterface::done(QtTaskTree::DoneResult _t1, QPrivateSignal _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
namespace {
struct qt_meta_tag_ZN10QtTaskTree9QTaskTreeE_t {};
} // unnamed namespace


#ifdef QT_MOC_HAS_STRINGDATA
static constexpr auto qt_meta_stringdata_ZN10QtTaskTree9QTaskTreeE = QtMocHelpers::stringData(
    "QtTaskTree::QTaskTree",
    "started",
    "",
    "done",
    "QtTaskTree::DoneWith",
    "result",
    "asyncCountChanged",
    "qsizetype",
    "count",
    "progressValueChanged",
    "value"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA

Q_CONSTINIT static const uint qt_meta_data_ZN10QtTaskTree9QTaskTreeE[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   38,    2, 0x06,    1 /* Public */,
       3,    1,   39,    2, 0x06,    2 /* Public */,
       6,    1,   42,    2, 0x06,    4 /* Public */,
       9,    1,   45,    2, 0x06,    6 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, 0x80000000 | 7,   10,

       0        // eod
};

Q_CONSTINIT const QMetaObject QtTaskTree::QTaskTree::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_ZN10QtTaskTree9QTaskTreeE.offsetsAndSizes,
    qt_meta_data_ZN10QtTaskTree9QTaskTreeE,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_tag_ZN10QtTaskTree9QTaskTreeE_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QTaskTree, std::true_type>,
        // method 'started'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'done'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QtTaskTree::DoneWith, std::false_type>,
        // method 'asyncCountChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<qsizetype, std::false_type>,
        // method 'progressValueChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<qsizetype, std::false_type>
    >,
    nullptr
} };

void QtTaskTree::QTaskTree::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<QTaskTree *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->started(); break;
        case 1: _t->done((*reinterpret_cast< std::add_pointer_t<QtTaskTree::DoneWith>>(_a[1]))); break;
        case 2: _t->asyncCountChanged((*reinterpret_cast< std::add_pointer_t<qsizetype>>(_a[1]))); break;
        case 3: _t->progressValueChanged((*reinterpret_cast< std::add_pointer_t<qsizetype>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _q_method_type = void (QTaskTree::*)();
            if (_q_method_type _q_method = &QTaskTree::started; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _q_method_type = void (QTaskTree::*)(QtTaskTree::DoneWith );
            if (_q_method_type _q_method = &QTaskTree::done; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _q_method_type = void (QTaskTree::*)(qsizetype );
            if (_q_method_type _q_method = &QTaskTree::asyncCountChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _q_method_type = void (QTaskTree::*)(qsizetype );
            if (_q_method_type _q_method = &QTaskTree::progressValueChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
    }
}

const QMetaObject *QtTaskTree::QTaskTree::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtTaskTree::QTaskTree::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ZN10QtTaskTree9QTaskTreeE.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QtTaskTree::QTaskTree::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void QtTaskTree::QTaskTree::started()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QtTaskTree::QTaskTree::done(QtTaskTree::DoneWith _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QtTaskTree::QTaskTree::asyncCountChanged(qsizetype _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QtTaskTree::QTaskTree::progressValueChanged(qsizetype _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
namespace {
struct qt_meta_tag_ZN10QtTaskTreeE_t {};
} // unnamed namespace


#ifdef QT_MOC_HAS_STRINGDATA
static constexpr auto qt_meta_stringdata_ZN10QtTaskTreeE = QtMocHelpers::stringData(
    "QtTaskTree",
    "WorkflowPolicy",
    "StopOnError",
    "ContinueOnError",
    "StopOnSuccess",
    "ContinueOnSuccess",
    "StopOnSuccessOrError",
    "FinishAllAndSuccess",
    "FinishAllAndError",
    "SetupResult",
    "Continue",
    "StopWithSuccess",
    "StopWithError",
    "DoneResult",
    "Success",
    "Error",
    "DoneWith",
    "Cancel",
    "CallDone",
    "CallDoneFlag",
    "Never",
    "OnSuccess",
    "OnError",
    "OnCancel",
    "Always"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA

Q_CONSTINIT static const uint qt_meta_data_ZN10QtTaskTreeE[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       5,   14, // enums/sets
       0,    0, // constructors
       4,       // flags
       0,       // signalCount

 // enums: name, alias, flags, count, data
       1,    1, 0x2,    7,   39,
       9,    9, 0x2,    3,   53,
      13,   13, 0x2,    2,   59,
      16,   16, 0x2,    3,   63,
      18,   19, 0x3,    5,   69,

 // enum data: key, value
       2, uint(QtTaskTree::WorkflowPolicy::StopOnError),
       3, uint(QtTaskTree::WorkflowPolicy::ContinueOnError),
       4, uint(QtTaskTree::WorkflowPolicy::StopOnSuccess),
       5, uint(QtTaskTree::WorkflowPolicy::ContinueOnSuccess),
       6, uint(QtTaskTree::WorkflowPolicy::StopOnSuccessOrError),
       7, uint(QtTaskTree::WorkflowPolicy::FinishAllAndSuccess),
       8, uint(QtTaskTree::WorkflowPolicy::FinishAllAndError),
      10, uint(QtTaskTree::SetupResult::Continue),
      11, uint(QtTaskTree::SetupResult::StopWithSuccess),
      12, uint(QtTaskTree::SetupResult::StopWithError),
      14, uint(QtTaskTree::DoneResult::Success),
      15, uint(QtTaskTree::DoneResult::Error),
      14, uint(QtTaskTree::DoneWith::Success),
      15, uint(QtTaskTree::DoneWith::Error),
      17, uint(QtTaskTree::DoneWith::Cancel),
      20, uint(QtTaskTree::CallDoneFlag::Never),
      21, uint(QtTaskTree::CallDoneFlag::OnSuccess),
      22, uint(QtTaskTree::CallDoneFlag::OnError),
      23, uint(QtTaskTree::CallDoneFlag::OnCancel),
      24, uint(QtTaskTree::CallDoneFlag::Always),

       0        // eod
};

Q_CONSTINIT const QMetaObject QtTaskTree::staticMetaObject = { {
    nullptr,
    qt_meta_stringdata_ZN10QtTaskTreeE.offsetsAndSizes,
    qt_meta_data_ZN10QtTaskTreeE,
    nullptr,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_tag_ZN10QtTaskTreeE_t,
        // enum 'WorkflowPolicy'
        QtPrivate::TypeAndForceComplete<QtTaskTree::WorkflowPolicy, std::true_type>,
        // enum 'SetupResult'
        QtPrivate::TypeAndForceComplete<QtTaskTree::SetupResult, std::true_type>,
        // enum 'DoneResult'
        QtPrivate::TypeAndForceComplete<QtTaskTree::DoneResult, std::true_type>,
        // enum 'DoneWith'
        QtPrivate::TypeAndForceComplete<QtTaskTree::DoneWith, std::true_type>,
        // enum 'CallDone'
        QtPrivate::TypeAndForceComplete<QtTaskTree::CallDone, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<void, std::true_type>
    >,
    nullptr
} };

QT_WARNING_POP
