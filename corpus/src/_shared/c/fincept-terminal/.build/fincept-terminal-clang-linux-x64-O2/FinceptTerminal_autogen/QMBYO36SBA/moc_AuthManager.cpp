/****************************************************************************
** Meta object code from reading C++ file 'AuthManager.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../upstream/fincept-qt/src/auth/AuthManager.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AuthManager.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN7fincept4auth11AuthManagerE_t {};
} // unnamed namespace


#ifdef QT_MOC_HAS_STRINGDATA
static constexpr auto qt_meta_stringdata_ZN7fincept4auth11AuthManagerE = QtMocHelpers::stringData(
    "fincept::auth::AuthManager",
    "auth_state_changed",
    "",
    "login_succeeded",
    "login_failed",
    "error",
    "login_mfa_required",
    "login_active_session",
    "message",
    "signup_succeeded",
    "signup_failed",
    "otp_verified",
    "otp_failed",
    "mfa_verified",
    "mfa_failed",
    "forgot_password_sent",
    "forgot_password_failed",
    "password_reset_succeeded",
    "password_reset_failed",
    "logged_out",
    "session_expired",
    "loading_changed",
    "loading",
    "subscription_fetched",
    "pin_setup_required",
    "terminal_unlocked"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA

Q_CONSTINIT static const uint qt_meta_data_ZN7fincept4auth11AuthManagerE[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      21,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      21,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  140,    2, 0x06,    1 /* Public */,
       3,    0,  141,    2, 0x06,    2 /* Public */,
       4,    1,  142,    2, 0x06,    3 /* Public */,
       6,    0,  145,    2, 0x06,    5 /* Public */,
       7,    1,  146,    2, 0x06,    6 /* Public */,
       9,    0,  149,    2, 0x06,    8 /* Public */,
      10,    1,  150,    2, 0x06,    9 /* Public */,
      11,    0,  153,    2, 0x06,   11 /* Public */,
      12,    1,  154,    2, 0x06,   12 /* Public */,
      13,    0,  157,    2, 0x06,   14 /* Public */,
      14,    1,  158,    2, 0x06,   15 /* Public */,
      15,    0,  161,    2, 0x06,   17 /* Public */,
      16,    1,  162,    2, 0x06,   18 /* Public */,
      17,    0,  165,    2, 0x06,   20 /* Public */,
      18,    1,  166,    2, 0x06,   21 /* Public */,
      19,    0,  169,    2, 0x06,   23 /* Public */,
      20,    0,  170,    2, 0x06,   24 /* Public */,
      21,    1,  171,    2, 0x06,   25 /* Public */,
      23,    0,  174,    2, 0x06,   27 /* Public */,
      24,    0,  175,    2, 0x06,   28 /* Public */,
      25,    0,  176,    2, 0x06,   29 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   22,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject fincept::auth::AuthManager::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_ZN7fincept4auth11AuthManagerE.offsetsAndSizes,
    qt_meta_data_ZN7fincept4auth11AuthManagerE,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_tag_ZN7fincept4auth11AuthManagerE_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<AuthManager, std::true_type>,
        // method 'auth_state_changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'login_succeeded'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'login_failed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'login_mfa_required'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'login_active_session'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'signup_succeeded'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'signup_failed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'otp_verified'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'otp_failed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'mfa_verified'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'mfa_failed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'forgot_password_sent'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'forgot_password_failed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'password_reset_succeeded'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'password_reset_failed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'logged_out'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'session_expired'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'loading_changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'subscription_fetched'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'pin_setup_required'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'terminal_unlocked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void fincept::auth::AuthManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<AuthManager *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->auth_state_changed(); break;
        case 1: _t->login_succeeded(); break;
        case 2: _t->login_failed((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 3: _t->login_mfa_required(); break;
        case 4: _t->login_active_session((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 5: _t->signup_succeeded(); break;
        case 6: _t->signup_failed((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 7: _t->otp_verified(); break;
        case 8: _t->otp_failed((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 9: _t->mfa_verified(); break;
        case 10: _t->mfa_failed((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 11: _t->forgot_password_sent(); break;
        case 12: _t->forgot_password_failed((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 13: _t->password_reset_succeeded(); break;
        case 14: _t->password_reset_failed((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 15: _t->logged_out(); break;
        case 16: _t->session_expired(); break;
        case 17: _t->loading_changed((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 18: _t->subscription_fetched(); break;
        case 19: _t->pin_setup_required(); break;
        case 20: _t->terminal_unlocked(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _q_method_type = void (AuthManager::*)();
            if (_q_method_type _q_method = &AuthManager::auth_state_changed; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _q_method_type = void (AuthManager::*)();
            if (_q_method_type _q_method = &AuthManager::login_succeeded; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _q_method_type = void (AuthManager::*)(const QString & );
            if (_q_method_type _q_method = &AuthManager::login_failed; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _q_method_type = void (AuthManager::*)();
            if (_q_method_type _q_method = &AuthManager::login_mfa_required; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _q_method_type = void (AuthManager::*)(const QString & );
            if (_q_method_type _q_method = &AuthManager::login_active_session; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _q_method_type = void (AuthManager::*)();
            if (_q_method_type _q_method = &AuthManager::signup_succeeded; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
        {
            using _q_method_type = void (AuthManager::*)(const QString & );
            if (_q_method_type _q_method = &AuthManager::signup_failed; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 6;
                return;
            }
        }
        {
            using _q_method_type = void (AuthManager::*)();
            if (_q_method_type _q_method = &AuthManager::otp_verified; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 7;
                return;
            }
        }
        {
            using _q_method_type = void (AuthManager::*)(const QString & );
            if (_q_method_type _q_method = &AuthManager::otp_failed; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 8;
                return;
            }
        }
        {
            using _q_method_type = void (AuthManager::*)();
            if (_q_method_type _q_method = &AuthManager::mfa_verified; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 9;
                return;
            }
        }
        {
            using _q_method_type = void (AuthManager::*)(const QString & );
            if (_q_method_type _q_method = &AuthManager::mfa_failed; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 10;
                return;
            }
        }
        {
            using _q_method_type = void (AuthManager::*)();
            if (_q_method_type _q_method = &AuthManager::forgot_password_sent; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 11;
                return;
            }
        }
        {
            using _q_method_type = void (AuthManager::*)(const QString & );
            if (_q_method_type _q_method = &AuthManager::forgot_password_failed; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 12;
                return;
            }
        }
        {
            using _q_method_type = void (AuthManager::*)();
            if (_q_method_type _q_method = &AuthManager::password_reset_succeeded; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 13;
                return;
            }
        }
        {
            using _q_method_type = void (AuthManager::*)(const QString & );
            if (_q_method_type _q_method = &AuthManager::password_reset_failed; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 14;
                return;
            }
        }
        {
            using _q_method_type = void (AuthManager::*)();
            if (_q_method_type _q_method = &AuthManager::logged_out; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 15;
                return;
            }
        }
        {
            using _q_method_type = void (AuthManager::*)();
            if (_q_method_type _q_method = &AuthManager::session_expired; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 16;
                return;
            }
        }
        {
            using _q_method_type = void (AuthManager::*)(bool );
            if (_q_method_type _q_method = &AuthManager::loading_changed; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 17;
                return;
            }
        }
        {
            using _q_method_type = void (AuthManager::*)();
            if (_q_method_type _q_method = &AuthManager::subscription_fetched; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 18;
                return;
            }
        }
        {
            using _q_method_type = void (AuthManager::*)();
            if (_q_method_type _q_method = &AuthManager::pin_setup_required; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 19;
                return;
            }
        }
        {
            using _q_method_type = void (AuthManager::*)();
            if (_q_method_type _q_method = &AuthManager::terminal_unlocked; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 20;
                return;
            }
        }
    }
}

const QMetaObject *fincept::auth::AuthManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *fincept::auth::AuthManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ZN7fincept4auth11AuthManagerE.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int fincept::auth::AuthManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 21)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 21;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 21)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 21;
    }
    return _id;
}

// SIGNAL 0
void fincept::auth::AuthManager::auth_state_changed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void fincept::auth::AuthManager::login_succeeded()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void fincept::auth::AuthManager::login_failed(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void fincept::auth::AuthManager::login_mfa_required()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void fincept::auth::AuthManager::login_active_session(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void fincept::auth::AuthManager::signup_succeeded()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void fincept::auth::AuthManager::signup_failed(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void fincept::auth::AuthManager::otp_verified()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void fincept::auth::AuthManager::otp_failed(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void fincept::auth::AuthManager::mfa_verified()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}

// SIGNAL 10
void fincept::auth::AuthManager::mfa_failed(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void fincept::auth::AuthManager::forgot_password_sent()
{
    QMetaObject::activate(this, &staticMetaObject, 11, nullptr);
}

// SIGNAL 12
void fincept::auth::AuthManager::forgot_password_failed(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void fincept::auth::AuthManager::password_reset_succeeded()
{
    QMetaObject::activate(this, &staticMetaObject, 13, nullptr);
}

// SIGNAL 14
void fincept::auth::AuthManager::password_reset_failed(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void fincept::auth::AuthManager::logged_out()
{
    QMetaObject::activate(this, &staticMetaObject, 15, nullptr);
}

// SIGNAL 16
void fincept::auth::AuthManager::session_expired()
{
    QMetaObject::activate(this, &staticMetaObject, 16, nullptr);
}

// SIGNAL 17
void fincept::auth::AuthManager::loading_changed(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 17, _a);
}

// SIGNAL 18
void fincept::auth::AuthManager::subscription_fetched()
{
    QMetaObject::activate(this, &staticMetaObject, 18, nullptr);
}

// SIGNAL 19
void fincept::auth::AuthManager::pin_setup_required()
{
    QMetaObject::activate(this, &staticMetaObject, 19, nullptr);
}

// SIGNAL 20
void fincept::auth::AuthManager::terminal_unlocked()
{
    QMetaObject::activate(this, &staticMetaObject, 20, nullptr);
}
QT_WARNING_POP
