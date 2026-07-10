/****************************************************************************
** Meta object code from reading C++ file 'ChatMessagePanel.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../upstream/fincept-qt/src/screens/chat_mode/ChatMessagePanel.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ChatMessagePanel.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN7fincept9chat_mode16ChatMessagePanelE_t {};
} // unnamed namespace


#ifdef QT_MOC_HAS_STRINGDATA
static constexpr auto qt_meta_stringdata_ZN7fincept9chat_mode16ChatMessagePanelE = QtMocHelpers::stringData(
    "fincept::chat_mode::ChatMessagePanel",
    "draft_changed",
    "",
    "scroll_changed",
    "send_requested",
    "message",
    "StreamMode",
    "mode",
    "mode_toggled",
    "on_stream_session_meta",
    "session_id",
    "new_title",
    "on_stream_text_delta",
    "text",
    "on_stream_tool_end",
    "tool_name",
    "duration_ms",
    "on_stream_step_start",
    "step_number",
    "on_stream_step_finish",
    "tokens_used",
    "on_stream_thinking",
    "content",
    "on_stream_finish",
    "total_tokens",
    "on_stream_error",
    "on_stream_heartbeat",
    "on_insufficient_credits",
    "on_tools_registered",
    "count",
    "set_credits",
    "credits",
    "on_send_clicked",
    "on_optimize_clicked",
    "on_typing_tick"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA

Q_CONSTINIT static const uint qt_meta_data_ZN7fincept9chat_mode16ChatMessagePanelE[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      19,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  128,    2, 0x06,    1 /* Public */,
       3,    0,  129,    2, 0x06,    2 /* Public */,
       4,    2,  130,    2, 0x06,    3 /* Public */,
       8,    1,  135,    2, 0x06,    6 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       9,    2,  138,    2, 0x0a,    8 /* Public */,
      12,    1,  143,    2, 0x0a,   11 /* Public */,
      14,    2,  146,    2, 0x0a,   13 /* Public */,
      17,    1,  151,    2, 0x0a,   16 /* Public */,
      19,    1,  154,    2, 0x0a,   18 /* Public */,
      21,    1,  157,    2, 0x0a,   20 /* Public */,
      23,    1,  160,    2, 0x0a,   22 /* Public */,
      25,    1,  163,    2, 0x0a,   24 /* Public */,
      26,    0,  166,    2, 0x0a,   26 /* Public */,
      27,    0,  167,    2, 0x0a,   27 /* Public */,
      28,    1,  168,    2, 0x0a,   28 /* Public */,
      30,    1,  171,    2, 0x0a,   30 /* Public */,
      32,    0,  174,    2, 0x08,   32 /* Private */,
      33,    0,  175,    2, 0x08,   33 /* Private */,
      34,    0,  176,    2, 0x08,   34 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 6,    5,    7,
    QMetaType::Void, 0x80000000 | 6,    7,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   10,   11,
    QMetaType::Void, QMetaType::QString,   13,
    QMetaType::Void, QMetaType::QString, QMetaType::Int,   15,   16,
    QMetaType::Void, QMetaType::Int,   18,
    QMetaType::Void, QMetaType::Int,   20,
    QMetaType::Void, QMetaType::QString,   22,
    QMetaType::Void, QMetaType::Int,   24,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   29,
    QMetaType::Void, QMetaType::Int,   31,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject fincept::chat_mode::ChatMessagePanel::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_ZN7fincept9chat_mode16ChatMessagePanelE.offsetsAndSizes,
    qt_meta_data_ZN7fincept9chat_mode16ChatMessagePanelE,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_tag_ZN7fincept9chat_mode16ChatMessagePanelE_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<ChatMessagePanel, std::true_type>,
        // method 'draft_changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'scroll_changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'send_requested'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<StreamMode, std::false_type>,
        // method 'mode_toggled'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<StreamMode, std::false_type>,
        // method 'on_stream_session_meta'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'on_stream_text_delta'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'on_stream_tool_end'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_stream_step_start'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_stream_step_finish'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_stream_thinking'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'on_stream_finish'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_stream_error'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'on_stream_heartbeat'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_insufficient_credits'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_tools_registered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'set_credits'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_send_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_optimize_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_typing_tick'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void fincept::chat_mode::ChatMessagePanel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<ChatMessagePanel *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->draft_changed(); break;
        case 1: _t->scroll_changed(); break;
        case 2: _t->send_requested((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<StreamMode>>(_a[2]))); break;
        case 3: _t->mode_toggled((*reinterpret_cast< std::add_pointer_t<StreamMode>>(_a[1]))); break;
        case 4: _t->on_stream_session_meta((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 5: _t->on_stream_text_delta((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 6: _t->on_stream_tool_end((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 7: _t->on_stream_step_start((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 8: _t->on_stream_step_finish((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 9: _t->on_stream_thinking((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 10: _t->on_stream_finish((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 11: _t->on_stream_error((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 12: _t->on_stream_heartbeat(); break;
        case 13: _t->on_insufficient_credits(); break;
        case 14: _t->on_tools_registered((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 15: _t->set_credits((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 16: _t->on_send_clicked(); break;
        case 17: _t->on_optimize_clicked(); break;
        case 18: _t->on_typing_tick(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _q_method_type = void (ChatMessagePanel::*)();
            if (_q_method_type _q_method = &ChatMessagePanel::draft_changed; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _q_method_type = void (ChatMessagePanel::*)();
            if (_q_method_type _q_method = &ChatMessagePanel::scroll_changed; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _q_method_type = void (ChatMessagePanel::*)(const QString & , StreamMode );
            if (_q_method_type _q_method = &ChatMessagePanel::send_requested; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _q_method_type = void (ChatMessagePanel::*)(StreamMode );
            if (_q_method_type _q_method = &ChatMessagePanel::mode_toggled; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
    }
}

const QMetaObject *fincept::chat_mode::ChatMessagePanel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *fincept::chat_mode::ChatMessagePanel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ZN7fincept9chat_mode16ChatMessagePanelE.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int fincept::chat_mode::ChatMessagePanel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

// SIGNAL 0
void fincept::chat_mode::ChatMessagePanel::draft_changed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void fincept::chat_mode::ChatMessagePanel::scroll_changed()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void fincept::chat_mode::ChatMessagePanel::send_requested(const QString & _t1, StreamMode _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void fincept::chat_mode::ChatMessagePanel::mode_toggled(StreamMode _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
