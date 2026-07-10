/****************************************************************************
** Meta object code from reading C++ file 'aspects.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../upstream/src/libs/utils/aspects.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'aspects.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN5Utils10BaseAspectE_t {};
} // unnamed namespace


#ifdef QT_MOC_HAS_STRINGDATA
static constexpr auto qt_meta_stringdata_ZN5Utils10BaseAspectE = QtMocHelpers::stringData(
    "Utils::BaseAspect",
    "changed",
    "",
    "volatileValueChanged",
    "labelLinkActivated",
    "link",
    "checkedChanged",
    "enabledChanged",
    "readOnlyChanged",
    "visibleChanged",
    "tooltipChanged",
    "tooltip",
    "labelTextChanged",
    "labelPixmapChanged"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA

Q_CONSTINIT static const uint qt_meta_data_ZN5Utils10BaseAspectE[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      10,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   74,    2, 0x06,    1 /* Public */,
       3,    0,   75,    2, 0x06,    2 /* Public */,
       4,    1,   76,    2, 0x06,    3 /* Public */,
       6,    0,   79,    2, 0x06,    5 /* Public */,
       7,    0,   80,    2, 0x06,    6 /* Public */,
       8,    1,   81,    2, 0x06,    7 /* Public */,
       9,    1,   84,    2, 0x06,    9 /* Public */,
      10,    1,   87,    2, 0x06,   11 /* Public */,
      12,    0,   90,    2, 0x06,   13 /* Public */,
      13,    0,   91,    2, 0x06,   14 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::QString,   11,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject Utils::BaseAspect::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_ZN5Utils10BaseAspectE.offsetsAndSizes,
    qt_meta_data_ZN5Utils10BaseAspectE,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_tag_ZN5Utils10BaseAspectE_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<BaseAspect, std::true_type>,
        // method 'changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'volatileValueChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'labelLinkActivated'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'checkedChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'enabledChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'readOnlyChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'visibleChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'tooltipChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'labelTextChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'labelPixmapChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void Utils::BaseAspect::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<BaseAspect *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->changed(); break;
        case 1: _t->volatileValueChanged(); break;
        case 2: _t->labelLinkActivated((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 3: _t->checkedChanged(); break;
        case 4: _t->enabledChanged(); break;
        case 5: _t->readOnlyChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 6: _t->visibleChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 7: _t->tooltipChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 8: _t->labelTextChanged(); break;
        case 9: _t->labelPixmapChanged(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _q_method_type = void (BaseAspect::*)();
            if (_q_method_type _q_method = &BaseAspect::changed; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _q_method_type = void (BaseAspect::*)();
            if (_q_method_type _q_method = &BaseAspect::volatileValueChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _q_method_type = void (BaseAspect::*)(const QString & );
            if (_q_method_type _q_method = &BaseAspect::labelLinkActivated; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _q_method_type = void (BaseAspect::*)();
            if (_q_method_type _q_method = &BaseAspect::checkedChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _q_method_type = void (BaseAspect::*)();
            if (_q_method_type _q_method = &BaseAspect::enabledChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _q_method_type = void (BaseAspect::*)(bool );
            if (_q_method_type _q_method = &BaseAspect::readOnlyChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
        {
            using _q_method_type = void (BaseAspect::*)(bool );
            if (_q_method_type _q_method = &BaseAspect::visibleChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 6;
                return;
            }
        }
        {
            using _q_method_type = void (BaseAspect::*)(const QString & );
            if (_q_method_type _q_method = &BaseAspect::tooltipChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 7;
                return;
            }
        }
        {
            using _q_method_type = void (BaseAspect::*)();
            if (_q_method_type _q_method = &BaseAspect::labelTextChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 8;
                return;
            }
        }
        {
            using _q_method_type = void (BaseAspect::*)();
            if (_q_method_type _q_method = &BaseAspect::labelPixmapChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 9;
                return;
            }
        }
    }
}

const QMetaObject *Utils::BaseAspect::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Utils::BaseAspect::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ZN5Utils10BaseAspectE.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Utils::BaseAspect::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void Utils::BaseAspect::changed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Utils::BaseAspect::volatileValueChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void Utils::BaseAspect::labelLinkActivated(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Utils::BaseAspect::checkedChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void Utils::BaseAspect::enabledChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void Utils::BaseAspect::readOnlyChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void Utils::BaseAspect::visibleChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void Utils::BaseAspect::tooltipChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void Utils::BaseAspect::labelTextChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void Utils::BaseAspect::labelPixmapChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}
namespace {
struct qt_meta_tag_ZN5Utils10BoolAspectE_t {};
} // unnamed namespace


#ifdef QT_MOC_HAS_STRINGDATA
static constexpr auto qt_meta_stringdata_ZN5Utils10BoolAspectE = QtMocHelpers::stringData(
    "Utils::BoolAspect"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA

Q_CONSTINIT static const uint qt_meta_data_ZN5Utils10BoolAspectE[] = {

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

Q_CONSTINIT const QMetaObject Utils::BoolAspect::staticMetaObject = { {
    QMetaObject::SuperData::link<TypedAspect<bool>::staticMetaObject>(),
    qt_meta_stringdata_ZN5Utils10BoolAspectE.offsetsAndSizes,
    qt_meta_data_ZN5Utils10BoolAspectE,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_tag_ZN5Utils10BoolAspectE_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<BoolAspect, std::true_type>
    >,
    nullptr
} };

void Utils::BoolAspect::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<BoolAspect *>(_o);
    (void)_t;
    (void)_c;
    (void)_id;
    (void)_a;
}

const QMetaObject *Utils::BoolAspect::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Utils::BoolAspect::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ZN5Utils10BoolAspectE.stringdata0))
        return static_cast<void*>(this);
    return TypedAspect<bool>::qt_metacast(_clname);
}

int Utils::BoolAspect::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = TypedAspect<bool>::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {
struct qt_meta_tag_ZN5Utils11ColorAspectE_t {};
} // unnamed namespace


#ifdef QT_MOC_HAS_STRINGDATA
static constexpr auto qt_meta_stringdata_ZN5Utils11ColorAspectE = QtMocHelpers::stringData(
    "Utils::ColorAspect"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA

Q_CONSTINIT static const uint qt_meta_data_ZN5Utils11ColorAspectE[] = {

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

Q_CONSTINIT const QMetaObject Utils::ColorAspect::staticMetaObject = { {
    QMetaObject::SuperData::link<TypedAspect<QColor>::staticMetaObject>(),
    qt_meta_stringdata_ZN5Utils11ColorAspectE.offsetsAndSizes,
    qt_meta_data_ZN5Utils11ColorAspectE,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_tag_ZN5Utils11ColorAspectE_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<ColorAspect, std::true_type>
    >,
    nullptr
} };

void Utils::ColorAspect::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<ColorAspect *>(_o);
    (void)_t;
    (void)_c;
    (void)_id;
    (void)_a;
}

const QMetaObject *Utils::ColorAspect::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Utils::ColorAspect::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ZN5Utils11ColorAspectE.stringdata0))
        return static_cast<void*>(this);
    return TypedAspect<QColor>::qt_metacast(_clname);
}

int Utils::ColorAspect::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = TypedAspect<QColor>::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {
struct qt_meta_tag_ZN5Utils16FontFamilyAspectE_t {};
} // unnamed namespace


#ifdef QT_MOC_HAS_STRINGDATA
static constexpr auto qt_meta_stringdata_ZN5Utils16FontFamilyAspectE = QtMocHelpers::stringData(
    "Utils::FontFamilyAspect"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA

Q_CONSTINIT static const uint qt_meta_data_ZN5Utils16FontFamilyAspectE[] = {

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

Q_CONSTINIT const QMetaObject Utils::FontFamilyAspect::staticMetaObject = { {
    QMetaObject::SuperData::link<TypedAspect<QString>::staticMetaObject>(),
    qt_meta_stringdata_ZN5Utils16FontFamilyAspectE.offsetsAndSizes,
    qt_meta_data_ZN5Utils16FontFamilyAspectE,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_tag_ZN5Utils16FontFamilyAspectE_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<FontFamilyAspect, std::true_type>
    >,
    nullptr
} };

void Utils::FontFamilyAspect::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<FontFamilyAspect *>(_o);
    (void)_t;
    (void)_c;
    (void)_id;
    (void)_a;
}

const QMetaObject *Utils::FontFamilyAspect::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Utils::FontFamilyAspect::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ZN5Utils16FontFamilyAspectE.stringdata0))
        return static_cast<void*>(this);
    return TypedAspect<QString>::qt_metacast(_clname);
}

int Utils::FontFamilyAspect::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = TypedAspect<QString>::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {
struct qt_meta_tag_ZN5Utils15SelectionAspectE_t {};
} // unnamed namespace


#ifdef QT_MOC_HAS_STRINGDATA
static constexpr auto qt_meta_stringdata_ZN5Utils15SelectionAspectE = QtMocHelpers::stringData(
    "Utils::SelectionAspect"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA

Q_CONSTINIT static const uint qt_meta_data_ZN5Utils15SelectionAspectE[] = {

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

Q_CONSTINIT const QMetaObject Utils::SelectionAspect::staticMetaObject = { {
    QMetaObject::SuperData::link<TypedAspect<int>::staticMetaObject>(),
    qt_meta_stringdata_ZN5Utils15SelectionAspectE.offsetsAndSizes,
    qt_meta_data_ZN5Utils15SelectionAspectE,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_tag_ZN5Utils15SelectionAspectE_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<SelectionAspect, std::true_type>
    >,
    nullptr
} };

void Utils::SelectionAspect::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<SelectionAspect *>(_o);
    (void)_t;
    (void)_c;
    (void)_id;
    (void)_a;
}

const QMetaObject *Utils::SelectionAspect::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Utils::SelectionAspect::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ZN5Utils15SelectionAspectE.stringdata0))
        return static_cast<void*>(this);
    return TypedAspect<int>::qt_metacast(_clname);
}

int Utils::SelectionAspect::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = TypedAspect<int>::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {
struct qt_meta_tag_ZN5Utils20MultiSelectionAspectE_t {};
} // unnamed namespace


#ifdef QT_MOC_HAS_STRINGDATA
static constexpr auto qt_meta_stringdata_ZN5Utils20MultiSelectionAspectE = QtMocHelpers::stringData(
    "Utils::MultiSelectionAspect"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA

Q_CONSTINIT static const uint qt_meta_data_ZN5Utils20MultiSelectionAspectE[] = {

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

Q_CONSTINIT const QMetaObject Utils::MultiSelectionAspect::staticMetaObject = { {
    QMetaObject::SuperData::link<TypedAspect<QStringList>::staticMetaObject>(),
    qt_meta_stringdata_ZN5Utils20MultiSelectionAspectE.offsetsAndSizes,
    qt_meta_data_ZN5Utils20MultiSelectionAspectE,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_tag_ZN5Utils20MultiSelectionAspectE_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<MultiSelectionAspect, std::true_type>
    >,
    nullptr
} };

void Utils::MultiSelectionAspect::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<MultiSelectionAspect *>(_o);
    (void)_t;
    (void)_c;
    (void)_id;
    (void)_a;
}

const QMetaObject *Utils::MultiSelectionAspect::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Utils::MultiSelectionAspect::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ZN5Utils20MultiSelectionAspectE.stringdata0))
        return static_cast<void*>(this);
    return TypedAspect<QStringList>::qt_metacast(_clname);
}

int Utils::MultiSelectionAspect::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = TypedAspect<QStringList>::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {
struct qt_meta_tag_ZN5Utils12StringAspectE_t {};
} // unnamed namespace


#ifdef QT_MOC_HAS_STRINGDATA
static constexpr auto qt_meta_stringdata_ZN5Utils12StringAspectE = QtMocHelpers::stringData(
    "Utils::StringAspect",
    "validChanged",
    "",
    "validState",
    "elideModeChanged",
    "Qt::TextElideMode",
    "elideMode",
    "historyCompleterKeyChanged",
    "Key",
    "historyCompleterKey",
    "acceptRichTextChanged",
    "acceptRichText",
    "validationFunctionChanged",
    "FancyLineEdit::ValidationFunction",
    "validator",
    "placeholderTextChanged",
    "placeholderText",
    "rightSideIconClicked"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA

Q_CONSTINIT static const uint qt_meta_data_ZN5Utils12StringAspectE[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   56,    2, 0x06,    1 /* Public */,
       4,    1,   59,    2, 0x06,    3 /* Public */,
       7,    1,   62,    2, 0x06,    5 /* Public */,
      10,    1,   65,    2, 0x06,    7 /* Public */,
      12,    1,   68,    2, 0x06,    9 /* Public */,
      15,    1,   71,    2, 0x06,   11 /* Public */,
      17,    0,   74,    2, 0x06,   13 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, QMetaType::Bool,   11,
    QMetaType::Void, 0x80000000 | 13,   14,
    QMetaType::Void, QMetaType::QString,   16,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject Utils::StringAspect::staticMetaObject = { {
    QMetaObject::SuperData::link<TypedAspect<QString>::staticMetaObject>(),
    qt_meta_stringdata_ZN5Utils12StringAspectE.offsetsAndSizes,
    qt_meta_data_ZN5Utils12StringAspectE,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_tag_ZN5Utils12StringAspectE_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<StringAspect, std::true_type>,
        // method 'validChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'elideModeChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<Qt::TextElideMode, std::false_type>,
        // method 'historyCompleterKeyChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const Key &, std::false_type>,
        // method 'acceptRichTextChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'validationFunctionChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const FancyLineEdit::ValidationFunction &, std::false_type>,
        // method 'placeholderTextChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'rightSideIconClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void Utils::StringAspect::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<StringAspect *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->validChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 1: _t->elideModeChanged((*reinterpret_cast< std::add_pointer_t<Qt::TextElideMode>>(_a[1]))); break;
        case 2: _t->historyCompleterKeyChanged((*reinterpret_cast< std::add_pointer_t<Key>>(_a[1]))); break;
        case 3: _t->acceptRichTextChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 4: _t->validationFunctionChanged((*reinterpret_cast< std::add_pointer_t<FancyLineEdit::ValidationFunction>>(_a[1]))); break;
        case 5: _t->placeholderTextChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 6: _t->rightSideIconClicked(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _q_method_type = void (StringAspect::*)(bool );
            if (_q_method_type _q_method = &StringAspect::validChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _q_method_type = void (StringAspect::*)(Qt::TextElideMode );
            if (_q_method_type _q_method = &StringAspect::elideModeChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _q_method_type = void (StringAspect::*)(const Key & );
            if (_q_method_type _q_method = &StringAspect::historyCompleterKeyChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _q_method_type = void (StringAspect::*)(bool );
            if (_q_method_type _q_method = &StringAspect::acceptRichTextChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _q_method_type = void (StringAspect::*)(const FancyLineEdit::ValidationFunction & );
            if (_q_method_type _q_method = &StringAspect::validationFunctionChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _q_method_type = void (StringAspect::*)(const QString & );
            if (_q_method_type _q_method = &StringAspect::placeholderTextChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
        {
            using _q_method_type = void (StringAspect::*)();
            if (_q_method_type _q_method = &StringAspect::rightSideIconClicked; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 6;
                return;
            }
        }
    }
}

const QMetaObject *Utils::StringAspect::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Utils::StringAspect::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ZN5Utils12StringAspectE.stringdata0))
        return static_cast<void*>(this);
    return TypedAspect<QString>::qt_metacast(_clname);
}

int Utils::StringAspect::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = TypedAspect<QString>::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void Utils::StringAspect::validChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Utils::StringAspect::elideModeChanged(Qt::TextElideMode _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Utils::StringAspect::historyCompleterKeyChanged(const Key & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Utils::StringAspect::acceptRichTextChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void Utils::StringAspect::validationFunctionChanged(const FancyLineEdit::ValidationFunction & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void Utils::StringAspect::placeholderTextChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void Utils::StringAspect::rightSideIconClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}
namespace {
struct qt_meta_tag_ZN5Utils15ByteArrayAspectE_t {};
} // unnamed namespace


#ifdef QT_MOC_HAS_STRINGDATA
static constexpr auto qt_meta_stringdata_ZN5Utils15ByteArrayAspectE = QtMocHelpers::stringData(
    "Utils::ByteArrayAspect"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA

Q_CONSTINIT static const uint qt_meta_data_ZN5Utils15ByteArrayAspectE[] = {

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

Q_CONSTINIT const QMetaObject Utils::ByteArrayAspect::staticMetaObject = { {
    QMetaObject::SuperData::link<TypedAspect<QByteArray>::staticMetaObject>(),
    qt_meta_stringdata_ZN5Utils15ByteArrayAspectE.offsetsAndSizes,
    qt_meta_data_ZN5Utils15ByteArrayAspectE,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_tag_ZN5Utils15ByteArrayAspectE_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<ByteArrayAspect, std::true_type>
    >,
    nullptr
} };

void Utils::ByteArrayAspect::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<ByteArrayAspect *>(_o);
    (void)_t;
    (void)_c;
    (void)_id;
    (void)_a;
}

const QMetaObject *Utils::ByteArrayAspect::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Utils::ByteArrayAspect::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ZN5Utils15ByteArrayAspectE.stringdata0))
        return static_cast<void*>(this);
    return TypedAspect<QByteArray>::qt_metacast(_clname);
}

int Utils::ByteArrayAspect::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = TypedAspect<QByteArray>::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {
struct qt_meta_tag_ZN5Utils14FilePathAspectE_t {};
} // unnamed namespace


#ifdef QT_MOC_HAS_STRINGDATA
static constexpr auto qt_meta_stringdata_ZN5Utils14FilePathAspectE = QtMocHelpers::stringData(
    "Utils::FilePathAspect",
    "validChanged",
    "",
    "validState"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA

Q_CONSTINIT static const uint qt_meta_data_ZN5Utils14FilePathAspectE[] = {

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
    QMetaType::Void, QMetaType::Bool,    3,

       0        // eod
};

Q_CONSTINIT const QMetaObject Utils::FilePathAspect::staticMetaObject = { {
    QMetaObject::SuperData::link<TypedAspect<QString>::staticMetaObject>(),
    qt_meta_stringdata_ZN5Utils14FilePathAspectE.offsetsAndSizes,
    qt_meta_data_ZN5Utils14FilePathAspectE,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_tag_ZN5Utils14FilePathAspectE_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<FilePathAspect, std::true_type>,
        // method 'validChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>
    >,
    nullptr
} };

void Utils::FilePathAspect::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<FilePathAspect *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->validChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _q_method_type = void (FilePathAspect::*)(bool );
            if (_q_method_type _q_method = &FilePathAspect::validChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject *Utils::FilePathAspect::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Utils::FilePathAspect::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ZN5Utils14FilePathAspectE.stringdata0))
        return static_cast<void*>(this);
    return TypedAspect<QString>::qt_metacast(_clname);
}

int Utils::FilePathAspect::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = TypedAspect<QString>::qt_metacall(_c, _id, _a);
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
void Utils::FilePathAspect::validChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
namespace {
struct qt_meta_tag_ZN5Utils13IntegerAspectE_t {};
} // unnamed namespace


#ifdef QT_MOC_HAS_STRINGDATA
static constexpr auto qt_meta_stringdata_ZN5Utils13IntegerAspectE = QtMocHelpers::stringData(
    "Utils::IntegerAspect"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA

Q_CONSTINIT static const uint qt_meta_data_ZN5Utils13IntegerAspectE[] = {

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

Q_CONSTINIT const QMetaObject Utils::IntegerAspect::staticMetaObject = { {
    QMetaObject::SuperData::link<TypedAspect<qint64>::staticMetaObject>(),
    qt_meta_stringdata_ZN5Utils13IntegerAspectE.offsetsAndSizes,
    qt_meta_data_ZN5Utils13IntegerAspectE,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_tag_ZN5Utils13IntegerAspectE_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<IntegerAspect, std::true_type>
    >,
    nullptr
} };

void Utils::IntegerAspect::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<IntegerAspect *>(_o);
    (void)_t;
    (void)_c;
    (void)_id;
    (void)_a;
}

const QMetaObject *Utils::IntegerAspect::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Utils::IntegerAspect::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ZN5Utils13IntegerAspectE.stringdata0))
        return static_cast<void*>(this);
    return TypedAspect<qint64>::qt_metacast(_clname);
}

int Utils::IntegerAspect::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = TypedAspect<qint64>::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {
struct qt_meta_tag_ZN5Utils12DoubleAspectE_t {};
} // unnamed namespace


#ifdef QT_MOC_HAS_STRINGDATA
static constexpr auto qt_meta_stringdata_ZN5Utils12DoubleAspectE = QtMocHelpers::stringData(
    "Utils::DoubleAspect"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA

Q_CONSTINIT static const uint qt_meta_data_ZN5Utils12DoubleAspectE[] = {

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

Q_CONSTINIT const QMetaObject Utils::DoubleAspect::staticMetaObject = { {
    QMetaObject::SuperData::link<TypedAspect<double>::staticMetaObject>(),
    qt_meta_stringdata_ZN5Utils12DoubleAspectE.offsetsAndSizes,
    qt_meta_data_ZN5Utils12DoubleAspectE,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_tag_ZN5Utils12DoubleAspectE_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<DoubleAspect, std::true_type>
    >,
    nullptr
} };

void Utils::DoubleAspect::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<DoubleAspect *>(_o);
    (void)_t;
    (void)_c;
    (void)_id;
    (void)_a;
}

const QMetaObject *Utils::DoubleAspect::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Utils::DoubleAspect::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ZN5Utils12DoubleAspectE.stringdata0))
        return static_cast<void*>(this);
    return TypedAspect<double>::qt_metacast(_clname);
}

int Utils::DoubleAspect::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = TypedAspect<double>::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {
struct qt_meta_tag_ZN5Utils14TriStateAspectE_t {};
} // unnamed namespace


#ifdef QT_MOC_HAS_STRINGDATA
static constexpr auto qt_meta_stringdata_ZN5Utils14TriStateAspectE = QtMocHelpers::stringData(
    "Utils::TriStateAspect"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA

Q_CONSTINIT static const uint qt_meta_data_ZN5Utils14TriStateAspectE[] = {

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

Q_CONSTINIT const QMetaObject Utils::TriStateAspect::staticMetaObject = { {
    QMetaObject::SuperData::link<SelectionAspect::staticMetaObject>(),
    qt_meta_stringdata_ZN5Utils14TriStateAspectE.offsetsAndSizes,
    qt_meta_data_ZN5Utils14TriStateAspectE,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_tag_ZN5Utils14TriStateAspectE_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<TriStateAspect, std::true_type>
    >,
    nullptr
} };

void Utils::TriStateAspect::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<TriStateAspect *>(_o);
    (void)_t;
    (void)_c;
    (void)_id;
    (void)_a;
}

const QMetaObject *Utils::TriStateAspect::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Utils::TriStateAspect::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ZN5Utils14TriStateAspectE.stringdata0))
        return static_cast<void*>(this);
    return SelectionAspect::qt_metacast(_clname);
}

int Utils::TriStateAspect::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = SelectionAspect::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {
struct qt_meta_tag_ZN5Utils16StringListAspectE_t {};
} // unnamed namespace


#ifdef QT_MOC_HAS_STRINGDATA
static constexpr auto qt_meta_stringdata_ZN5Utils16StringListAspectE = QtMocHelpers::stringData(
    "Utils::StringListAspect"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA

Q_CONSTINIT static const uint qt_meta_data_ZN5Utils16StringListAspectE[] = {

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

Q_CONSTINIT const QMetaObject Utils::StringListAspect::staticMetaObject = { {
    QMetaObject::SuperData::link<TypedAspect<QStringList>::staticMetaObject>(),
    qt_meta_stringdata_ZN5Utils16StringListAspectE.offsetsAndSizes,
    qt_meta_data_ZN5Utils16StringListAspectE,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_tag_ZN5Utils16StringListAspectE_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<StringListAspect, std::true_type>
    >,
    nullptr
} };

void Utils::StringListAspect::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<StringListAspect *>(_o);
    (void)_t;
    (void)_c;
    (void)_id;
    (void)_a;
}

const QMetaObject *Utils::StringListAspect::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Utils::StringListAspect::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ZN5Utils16StringListAspectE.stringdata0))
        return static_cast<void*>(this);
    return TypedAspect<QStringList>::qt_metacast(_clname);
}

int Utils::StringListAspect::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = TypedAspect<QStringList>::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {
struct qt_meta_tag_ZN5Utils18FilePathListAspectE_t {};
} // unnamed namespace


#ifdef QT_MOC_HAS_STRINGDATA
static constexpr auto qt_meta_stringdata_ZN5Utils18FilePathListAspectE = QtMocHelpers::stringData(
    "Utils::FilePathListAspect",
    "placeHolderTextChanged",
    "",
    "placeHolderText"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA

Q_CONSTINIT static const uint qt_meta_data_ZN5Utils18FilePathListAspectE[] = {

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
    QMetaType::Void, QMetaType::QString,    3,

       0        // eod
};

Q_CONSTINIT const QMetaObject Utils::FilePathListAspect::staticMetaObject = { {
    QMetaObject::SuperData::link<TypedAspect<QStringList>::staticMetaObject>(),
    qt_meta_stringdata_ZN5Utils18FilePathListAspectE.offsetsAndSizes,
    qt_meta_data_ZN5Utils18FilePathListAspectE,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_tag_ZN5Utils18FilePathListAspectE_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<FilePathListAspect, std::true_type>,
        // method 'placeHolderTextChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>
    >,
    nullptr
} };

void Utils::FilePathListAspect::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<FilePathListAspect *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->placeHolderTextChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _q_method_type = void (FilePathListAspect::*)(const QString & );
            if (_q_method_type _q_method = &FilePathListAspect::placeHolderTextChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject *Utils::FilePathListAspect::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Utils::FilePathListAspect::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ZN5Utils18FilePathListAspectE.stringdata0))
        return static_cast<void*>(this);
    return TypedAspect<QStringList>::qt_metacast(_clname);
}

int Utils::FilePathListAspect::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = TypedAspect<QStringList>::qt_metacall(_c, _id, _a);
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
void Utils::FilePathListAspect::placeHolderTextChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
namespace {
struct qt_meta_tag_ZN5Utils14IntegersAspectE_t {};
} // unnamed namespace


#ifdef QT_MOC_HAS_STRINGDATA
static constexpr auto qt_meta_stringdata_ZN5Utils14IntegersAspectE = QtMocHelpers::stringData(
    "Utils::IntegersAspect"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA

Q_CONSTINIT static const uint qt_meta_data_ZN5Utils14IntegersAspectE[] = {

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

Q_CONSTINIT const QMetaObject Utils::IntegersAspect::staticMetaObject = { {
    QMetaObject::SuperData::link<TypedAspect<QList<int>>::staticMetaObject>(),
    qt_meta_stringdata_ZN5Utils14IntegersAspectE.offsetsAndSizes,
    qt_meta_data_ZN5Utils14IntegersAspectE,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_tag_ZN5Utils14IntegersAspectE_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<IntegersAspect, std::true_type>
    >,
    nullptr
} };

void Utils::IntegersAspect::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<IntegersAspect *>(_o);
    (void)_t;
    (void)_c;
    (void)_id;
    (void)_a;
}

const QMetaObject *Utils::IntegersAspect::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Utils::IntegersAspect::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ZN5Utils14IntegersAspectE.stringdata0))
        return static_cast<void*>(this);
    return TypedAspect<QList<int>>::qt_metacast(_clname);
}

int Utils::IntegersAspect::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = TypedAspect<QList<int>>::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {
struct qt_meta_tag_ZN5Utils8IdAspectE_t {};
} // unnamed namespace


#ifdef QT_MOC_HAS_STRINGDATA
static constexpr auto qt_meta_stringdata_ZN5Utils8IdAspectE = QtMocHelpers::stringData(
    "Utils::IdAspect"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA

Q_CONSTINIT static const uint qt_meta_data_ZN5Utils8IdAspectE[] = {

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

Q_CONSTINIT const QMetaObject Utils::IdAspect::staticMetaObject = { {
    QMetaObject::SuperData::link<TypedAspect<Id>::staticMetaObject>(),
    qt_meta_stringdata_ZN5Utils8IdAspectE.offsetsAndSizes,
    qt_meta_data_ZN5Utils8IdAspectE,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_tag_ZN5Utils8IdAspectE_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<IdAspect, std::true_type>
    >,
    nullptr
} };

void Utils::IdAspect::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<IdAspect *>(_o);
    (void)_t;
    (void)_c;
    (void)_id;
    (void)_a;
}

const QMetaObject *Utils::IdAspect::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Utils::IdAspect::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ZN5Utils8IdAspectE.stringdata0))
        return static_cast<void*>(this);
    return TypedAspect<Id>::qt_metacast(_clname);
}

int Utils::IdAspect::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = TypedAspect<Id>::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {
struct qt_meta_tag_ZN5Utils11TextDisplayE_t {};
} // unnamed namespace


#ifdef QT_MOC_HAS_STRINGDATA
static constexpr auto qt_meta_stringdata_ZN5Utils11TextDisplayE = QtMocHelpers::stringData(
    "Utils::TextDisplay",
    "linkActivated",
    "",
    "link"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA

Q_CONSTINIT static const uint qt_meta_data_ZN5Utils11TextDisplayE[] = {

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
    QMetaType::Void, QMetaType::QString,    3,

       0        // eod
};

Q_CONSTINIT const QMetaObject Utils::TextDisplay::staticMetaObject = { {
    QMetaObject::SuperData::link<BaseAspect::staticMetaObject>(),
    qt_meta_stringdata_ZN5Utils11TextDisplayE.offsetsAndSizes,
    qt_meta_data_ZN5Utils11TextDisplayE,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_tag_ZN5Utils11TextDisplayE_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<TextDisplay, std::true_type>,
        // method 'linkActivated'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>
    >,
    nullptr
} };

void Utils::TextDisplay::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<TextDisplay *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->linkActivated((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _q_method_type = void (TextDisplay::*)(const QString & );
            if (_q_method_type _q_method = &TextDisplay::linkActivated; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject *Utils::TextDisplay::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Utils::TextDisplay::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ZN5Utils11TextDisplayE.stringdata0))
        return static_cast<void*>(this);
    return BaseAspect::qt_metacast(_clname);
}

int Utils::TextDisplay::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = BaseAspect::qt_metacall(_c, _id, _a);
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
void Utils::TextDisplay::linkActivated(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
namespace {
struct qt_meta_tag_ZN5Utils15AspectContainerE_t {};
} // unnamed namespace


#ifdef QT_MOC_HAS_STRINGDATA
static constexpr auto qt_meta_stringdata_ZN5Utils15AspectContainerE = QtMocHelpers::stringData(
    "Utils::AspectContainer",
    "applied",
    "",
    "fromMapFinished",
    "subAspectChanged",
    "BaseAspect*",
    "aspect"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA

Q_CONSTINIT static const uint qt_meta_data_ZN5Utils15AspectContainerE[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   32,    2, 0x06,    1 /* Public */,
       3,    0,   33,    2, 0x06,    2 /* Public */,
       4,    1,   34,    2, 0x06,    3 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    6,

       0        // eod
};

Q_CONSTINIT const QMetaObject Utils::AspectContainer::staticMetaObject = { {
    QMetaObject::SuperData::link<BaseAspect::staticMetaObject>(),
    qt_meta_stringdata_ZN5Utils15AspectContainerE.offsetsAndSizes,
    qt_meta_data_ZN5Utils15AspectContainerE,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_tag_ZN5Utils15AspectContainerE_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<AspectContainer, std::true_type>,
        // method 'applied'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'fromMapFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'subAspectChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<BaseAspect *, std::false_type>
    >,
    nullptr
} };

void Utils::AspectContainer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<AspectContainer *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->applied(); break;
        case 1: _t->fromMapFinished(); break;
        case 2: _t->subAspectChanged((*reinterpret_cast< std::add_pointer_t<BaseAspect*>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< BaseAspect* >(); break;
            }
            break;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _q_method_type = void (AspectContainer::*)();
            if (_q_method_type _q_method = &AspectContainer::applied; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _q_method_type = void (AspectContainer::*)();
            if (_q_method_type _q_method = &AspectContainer::fromMapFinished; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _q_method_type = void (AspectContainer::*)(BaseAspect * );
            if (_q_method_type _q_method = &AspectContainer::subAspectChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject *Utils::AspectContainer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Utils::AspectContainer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ZN5Utils15AspectContainerE.stringdata0))
        return static_cast<void*>(this);
    return BaseAspect::qt_metacast(_clname);
}

int Utils::AspectContainer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = BaseAspect::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void Utils::AspectContainer::applied()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Utils::AspectContainer::fromMapFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void Utils::AspectContainer::subAspectChanged(BaseAspect * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
namespace {
struct qt_meta_tag_ZN5Utils13UndoSignallerE_t {};
} // unnamed namespace


#ifdef QT_MOC_HAS_STRINGDATA
static constexpr auto qt_meta_stringdata_ZN5Utils13UndoSignallerE = QtMocHelpers::stringData(
    "Utils::UndoSignaller",
    "changed",
    ""
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA

Q_CONSTINIT static const uint qt_meta_data_ZN5Utils13UndoSignallerE[] = {

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
       1,    0,   20,    2, 0x06,    1 /* Public */,

 // signals: parameters
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject Utils::UndoSignaller::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_ZN5Utils13UndoSignallerE.offsetsAndSizes,
    qt_meta_data_ZN5Utils13UndoSignallerE,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_tag_ZN5Utils13UndoSignallerE_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<UndoSignaller, std::true_type>,
        // method 'changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void Utils::UndoSignaller::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<UndoSignaller *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->changed(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _q_method_type = void (UndoSignaller::*)();
            if (_q_method_type _q_method = &UndoSignaller::changed; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject *Utils::UndoSignaller::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Utils::UndoSignaller::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ZN5Utils13UndoSignallerE.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Utils::UndoSignaller::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void Utils::UndoSignaller::changed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
namespace {
struct qt_meta_tag_ZN5Utils21StringSelectionAspectE_t {};
} // unnamed namespace


#ifdef QT_MOC_HAS_STRINGDATA
static constexpr auto qt_meta_stringdata_ZN5Utils21StringSelectionAspectE = QtMocHelpers::stringData(
    "Utils::StringSelectionAspect",
    "refillRequested",
    "",
    "modelChange",
    "isChanging"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA

Q_CONSTINIT static const uint qt_meta_data_ZN5Utils21StringSelectionAspectE[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   26,    2, 0x06,    1 /* Public */,
       3,    1,   27,    2, 0x06,    2 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    4,

       0        // eod
};

Q_CONSTINIT const QMetaObject Utils::StringSelectionAspect::staticMetaObject = { {
    QMetaObject::SuperData::link<Utils::TypedAspect<QString>::staticMetaObject>(),
    qt_meta_stringdata_ZN5Utils21StringSelectionAspectE.offsetsAndSizes,
    qt_meta_data_ZN5Utils21StringSelectionAspectE,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_tag_ZN5Utils21StringSelectionAspectE_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<StringSelectionAspect, std::true_type>,
        // method 'refillRequested'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'modelChange'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>
    >,
    nullptr
} };

void Utils::StringSelectionAspect::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<StringSelectionAspect *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->refillRequested(); break;
        case 1: _t->modelChange((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _q_method_type = void (StringSelectionAspect::*)();
            if (_q_method_type _q_method = &StringSelectionAspect::refillRequested; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _q_method_type = void (StringSelectionAspect::*)(bool );
            if (_q_method_type _q_method = &StringSelectionAspect::modelChange; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject *Utils::StringSelectionAspect::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Utils::StringSelectionAspect::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ZN5Utils21StringSelectionAspectE.stringdata0))
        return static_cast<void*>(this);
    return Utils::TypedAspect<QString>::qt_metacast(_clname);
}

int Utils::StringSelectionAspect::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Utils::TypedAspect<QString>::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void Utils::StringSelectionAspect::refillRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Utils::StringSelectionAspect::modelChange(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
namespace {
struct qt_meta_tag_ZN5Utils10FontAspectE_t {};
} // unnamed namespace


#ifdef QT_MOC_HAS_STRINGDATA
static constexpr auto qt_meta_stringdata_ZN5Utils10FontAspectE = QtMocHelpers::stringData(
    "Utils::FontAspect"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA

Q_CONSTINIT static const uint qt_meta_data_ZN5Utils10FontAspectE[] = {

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

Q_CONSTINIT const QMetaObject Utils::FontAspect::staticMetaObject = { {
    QMetaObject::SuperData::link<AspectContainer::staticMetaObject>(),
    qt_meta_stringdata_ZN5Utils10FontAspectE.offsetsAndSizes,
    qt_meta_data_ZN5Utils10FontAspectE,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_tag_ZN5Utils10FontAspectE_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<FontAspect, std::true_type>
    >,
    nullptr
} };

void Utils::FontAspect::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<FontAspect *>(_o);
    (void)_t;
    (void)_c;
    (void)_id;
    (void)_a;
}

const QMetaObject *Utils::FontAspect::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Utils::FontAspect::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ZN5Utils10FontAspectE.stringdata0))
        return static_cast<void*>(this);
    return AspectContainer::qt_metacast(_clname);
}

int Utils::FontAspect::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AspectContainer::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
