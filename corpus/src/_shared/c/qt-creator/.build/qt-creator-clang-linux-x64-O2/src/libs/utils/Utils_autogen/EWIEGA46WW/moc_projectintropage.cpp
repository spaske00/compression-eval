/****************************************************************************
** Meta object code from reading C++ file 'projectintropage.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../upstream/src/libs/utils/projectintropage.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'projectintropage.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN5Utils16ProjectIntroPageE_t {};
} // unnamed namespace


#ifdef QT_MOC_HAS_STRINGDATA
static constexpr auto qt_meta_stringdata_ZN5Utils16ProjectIntroPageE = QtMocHelpers::stringData(
    "Utils::ProjectIntroPage",
    "activated",
    "",
    "statusMessageChanged",
    "InfoLabel::InfoType",
    "type",
    "message",
    "setFilePath",
    "FilePath",
    "path",
    "setProjectName",
    "name",
    "setDescription",
    "description",
    "setUseAsDefaultPath",
    "u",
    "setProjectNameRegularExpression",
    "regEx",
    "userErrorMessage",
    "filePath",
    "Utils::FilePath",
    "projectName",
    "useAsDefaultPath",
    "forceSubProject"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA

Q_CONSTINIT static const uint qt_meta_data_ZN5Utils16ProjectIntroPageE[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       5,   79, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   56,    2, 0x06,    6 /* Public */,
       3,    2,   57,    2, 0x06,    7 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       7,    1,   62,    2, 0x0a,   10 /* Public */,
      10,    1,   65,    2, 0x0a,   12 /* Public */,
      12,    1,   68,    2, 0x0a,   14 /* Public */,
      14,    1,   71,    2, 0x0a,   16 /* Public */,
      16,    2,   74,    2, 0x0a,   18 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4, QMetaType::QString,    5,    6,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, QMetaType::QString,   11,
    QMetaType::Void, QMetaType::QString,   13,
    QMetaType::Void, QMetaType::Bool,   15,
    QMetaType::Void, QMetaType::QRegularExpression, QMetaType::QString,   17,   18,

 // properties: name, type, flags, notifyId, revision
      13, QMetaType::QString, 0x00015103, uint(-1), 0,
      19, 0x80000000 | 20, 0x0001510b, uint(-1), 0,
      21, QMetaType::QString, 0x00015103, uint(-1), 0,
      22, QMetaType::Bool, 0x00015103, uint(-1), 0,
      23, QMetaType::Bool, 0x00015103, uint(-1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject Utils::ProjectIntroPage::staticMetaObject = { {
    QMetaObject::SuperData::link<WizardPage::staticMetaObject>(),
    qt_meta_stringdata_ZN5Utils16ProjectIntroPageE.offsetsAndSizes,
    qt_meta_data_ZN5Utils16ProjectIntroPageE,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_tag_ZN5Utils16ProjectIntroPageE_t,
        // property 'description'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'filePath'
        QtPrivate::TypeAndForceComplete<Utils::FilePath, std::true_type>,
        // property 'projectName'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'useAsDefaultPath'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'forceSubProject'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<ProjectIntroPage, std::true_type>,
        // method 'activated'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'statusMessageChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<InfoLabel::InfoType, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'setFilePath'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const FilePath &, std::false_type>,
        // method 'setProjectName'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'setDescription'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'setUseAsDefaultPath'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'setProjectNameRegularExpression'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QRegularExpression &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>
    >,
    nullptr
} };

void Utils::ProjectIntroPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<ProjectIntroPage *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->activated(); break;
        case 1: _t->statusMessageChanged((*reinterpret_cast< std::add_pointer_t<InfoLabel::InfoType>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 2: _t->setFilePath((*reinterpret_cast< std::add_pointer_t<FilePath>>(_a[1]))); break;
        case 3: _t->setProjectName((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 4: _t->setDescription((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 5: _t->setUseAsDefaultPath((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 6: _t->setProjectNameRegularExpression((*reinterpret_cast< std::add_pointer_t<QRegularExpression>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _q_method_type = void (ProjectIntroPage::*)();
            if (_q_method_type _q_method = &ProjectIntroPage::activated; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _q_method_type = void (ProjectIntroPage::*)(InfoLabel::InfoType , const QString & );
            if (_q_method_type _q_method = &ProjectIntroPage::statusMessageChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
    }
    if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Utils::FilePath >(); break;
        }
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->description(); break;
        case 1: *reinterpret_cast< Utils::FilePath*>(_v) = _t->filePath(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->projectName(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->useAsDefaultPath(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->forceSubProject(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setDescription(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setFilePath(*reinterpret_cast< Utils::FilePath*>(_v)); break;
        case 2: _t->setProjectName(*reinterpret_cast< QString*>(_v)); break;
        case 3: _t->setUseAsDefaultPath(*reinterpret_cast< bool*>(_v)); break;
        case 4: _t->setForceSubProject(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *Utils::ProjectIntroPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Utils::ProjectIntroPage::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ZN5Utils16ProjectIntroPageE.stringdata0))
        return static_cast<void*>(this);
    return WizardPage::qt_metacast(_clname);
}

int Utils::ProjectIntroPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = WizardPage::qt_metacall(_c, _id, _a);
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
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void Utils::ProjectIntroPage::activated()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Utils::ProjectIntroPage::statusMessageChanged(InfoLabel::InfoType _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
