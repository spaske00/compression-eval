/****************************************************************************
** Meta object code from reading C++ file 'AgentService.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../upstream/fincept-qt/src/services/agents/AgentService.h"
#include <QtCore/qmetatype.h>
#include <QtCore/QList>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AgentService.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN7fincept8services12AgentServiceE_t {};
} // unnamed namespace


#ifdef QT_MOC_HAS_STRINGDATA
static constexpr auto qt_meta_stringdata_ZN7fincept8services12AgentServiceE = QtMocHelpers::stringData(
    "fincept::services::AgentService",
    "agents_discovered",
    "",
    "QList<AgentInfo>",
    "agents",
    "QList<AgentCategory>",
    "categories",
    "agent_result",
    "AgentExecutionResult",
    "result",
    "agent_stream_token",
    "request_id",
    "token",
    "agent_stream_thinking",
    "status",
    "agent_stream_done",
    "routing_result",
    "RoutingResult",
    "tools_loaded",
    "AgentToolsInfo",
    "info",
    "models_loaded",
    "AgentModelsInfo",
    "system_info_loaded",
    "AgentSystemInfo",
    "plan_created",
    "ExecutionPlan",
    "plan",
    "plan_executed",
    "config_saved",
    "config_deleted",
    "memory_stored",
    "success",
    "message",
    "memories_recalled",
    "memories",
    "knowledge_results",
    "results",
    "session_saved",
    "session_loaded",
    "session",
    "trade_executed",
    "trade_decisions_loaded",
    "decisions",
    "multi_query_result",
    "error_occurred",
    "context",
    "task_event",
    "task_id",
    "event",
    "tasks_listed",
    "tasks",
    "task_loaded",
    "task",
    "schedules_listed",
    "schedules",
    "schedule_created",
    "schedule_id",
    "schedule_deleted",
    "scheduled_task_fired",
    "schedule_name",
    "skills_listed",
    "skills",
    "archival_listed",
    "reflexion_listed",
    "reflections"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA

Q_CONSTINIT static const uint qt_meta_data_ZN7fincept8services12AgentServiceE[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      32,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      32,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    2,  206,    2, 0x06,    1 /* Public */,
       7,    1,  211,    2, 0x06,    4 /* Public */,
      10,    2,  214,    2, 0x06,    6 /* Public */,
      13,    2,  219,    2, 0x06,    9 /* Public */,
      15,    1,  224,    2, 0x06,   12 /* Public */,
      16,    1,  227,    2, 0x06,   14 /* Public */,
      18,    1,  230,    2, 0x06,   16 /* Public */,
      21,    1,  233,    2, 0x06,   18 /* Public */,
      23,    1,  236,    2, 0x06,   20 /* Public */,
      25,    1,  239,    2, 0x06,   22 /* Public */,
      28,    1,  242,    2, 0x06,   24 /* Public */,
      29,    0,  245,    2, 0x06,   26 /* Public */,
      30,    0,  246,    2, 0x06,   27 /* Public */,
      31,    2,  247,    2, 0x06,   28 /* Public */,
      34,    1,  252,    2, 0x06,   31 /* Public */,
      36,    1,  255,    2, 0x06,   33 /* Public */,
      38,    1,  258,    2, 0x06,   35 /* Public */,
      39,    1,  261,    2, 0x06,   37 /* Public */,
      41,    1,  264,    2, 0x06,   39 /* Public */,
      42,    1,  267,    2, 0x06,   41 /* Public */,
      44,    1,  270,    2, 0x06,   43 /* Public */,
      45,    2,  273,    2, 0x06,   45 /* Public */,
      47,    2,  278,    2, 0x06,   48 /* Public */,
      50,    1,  283,    2, 0x06,   51 /* Public */,
      52,    1,  286,    2, 0x06,   53 /* Public */,
      54,    1,  289,    2, 0x06,   55 /* Public */,
      56,    1,  292,    2, 0x06,   57 /* Public */,
      58,    1,  295,    2, 0x06,   59 /* Public */,
      59,    3,  298,    2, 0x06,   61 /* Public */,
      61,    1,  305,    2, 0x06,   65 /* Public */,
      63,    1,  308,    2, 0x06,   67 /* Public */,
      64,    1,  311,    2, 0x06,   69 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5,    4,    6,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   11,   12,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   11,   14,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, 0x80000000 | 17,    9,
    QMetaType::Void, 0x80000000 | 19,   20,
    QMetaType::Void, 0x80000000 | 22,   20,
    QMetaType::Void, 0x80000000 | 24,   20,
    QMetaType::Void, 0x80000000 | 26,   27,
    QMetaType::Void, 0x80000000 | 26,   27,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool, QMetaType::QString,   32,   33,
    QMetaType::Void, QMetaType::QJsonArray,   35,
    QMetaType::Void, QMetaType::QJsonArray,   37,
    QMetaType::Void, QMetaType::Bool,   32,
    QMetaType::Void, QMetaType::QJsonObject,   40,
    QMetaType::Void, QMetaType::QJsonObject,    9,
    QMetaType::Void, QMetaType::QJsonArray,   43,
    QMetaType::Void, QMetaType::QJsonObject,    9,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   46,   33,
    QMetaType::Void, QMetaType::QString, QMetaType::QJsonObject,   48,   49,
    QMetaType::Void, QMetaType::QJsonArray,   51,
    QMetaType::Void, QMetaType::QJsonObject,   53,
    QMetaType::Void, QMetaType::QJsonArray,   55,
    QMetaType::Void, QMetaType::QString,   57,
    QMetaType::Void, QMetaType::QString,   57,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString,   57,   60,   48,
    QMetaType::Void, QMetaType::QJsonArray,   62,
    QMetaType::Void, QMetaType::QJsonArray,   35,
    QMetaType::Void, QMetaType::QJsonArray,   65,

       0        // eod
};

Q_CONSTINIT const QMetaObject fincept::services::AgentService::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_ZN7fincept8services12AgentServiceE.offsetsAndSizes,
    qt_meta_data_ZN7fincept8services12AgentServiceE,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_tag_ZN7fincept8services12AgentServiceE_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<AgentService, std::true_type>,
        // method 'agents_discovered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QVector<AgentInfo>, std::false_type>,
        QtPrivate::TypeAndForceComplete<QVector<AgentCategory>, std::false_type>,
        // method 'agent_result'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<AgentExecutionResult, std::false_type>,
        // method 'agent_stream_token'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'agent_stream_thinking'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'agent_stream_done'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<AgentExecutionResult, std::false_type>,
        // method 'routing_result'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<RoutingResult, std::false_type>,
        // method 'tools_loaded'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<AgentToolsInfo, std::false_type>,
        // method 'models_loaded'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<AgentModelsInfo, std::false_type>,
        // method 'system_info_loaded'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<AgentSystemInfo, std::false_type>,
        // method 'plan_created'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<ExecutionPlan, std::false_type>,
        // method 'plan_executed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<ExecutionPlan, std::false_type>,
        // method 'config_saved'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'config_deleted'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'memory_stored'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'memories_recalled'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QJsonArray, std::false_type>,
        // method 'knowledge_results'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QJsonArray, std::false_type>,
        // method 'session_saved'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'session_loaded'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QJsonObject, std::false_type>,
        // method 'trade_executed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QJsonObject, std::false_type>,
        // method 'trade_decisions_loaded'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QJsonArray, std::false_type>,
        // method 'multi_query_result'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QJsonObject, std::false_type>,
        // method 'error_occurred'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'task_event'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QJsonObject &, std::false_type>,
        // method 'tasks_listed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QJsonArray &, std::false_type>,
        // method 'task_loaded'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QJsonObject &, std::false_type>,
        // method 'schedules_listed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QJsonArray &, std::false_type>,
        // method 'schedule_created'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'schedule_deleted'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'scheduled_task_fired'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'skills_listed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QJsonArray &, std::false_type>,
        // method 'archival_listed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QJsonArray &, std::false_type>,
        // method 'reflexion_listed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QJsonArray &, std::false_type>
    >,
    nullptr
} };

void fincept::services::AgentService::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<AgentService *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->agents_discovered((*reinterpret_cast< std::add_pointer_t<QList<AgentInfo>>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QList<AgentCategory>>>(_a[2]))); break;
        case 1: _t->agent_result((*reinterpret_cast< std::add_pointer_t<AgentExecutionResult>>(_a[1]))); break;
        case 2: _t->agent_stream_token((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 3: _t->agent_stream_thinking((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 4: _t->agent_stream_done((*reinterpret_cast< std::add_pointer_t<AgentExecutionResult>>(_a[1]))); break;
        case 5: _t->routing_result((*reinterpret_cast< std::add_pointer_t<RoutingResult>>(_a[1]))); break;
        case 6: _t->tools_loaded((*reinterpret_cast< std::add_pointer_t<AgentToolsInfo>>(_a[1]))); break;
        case 7: _t->models_loaded((*reinterpret_cast< std::add_pointer_t<AgentModelsInfo>>(_a[1]))); break;
        case 8: _t->system_info_loaded((*reinterpret_cast< std::add_pointer_t<AgentSystemInfo>>(_a[1]))); break;
        case 9: _t->plan_created((*reinterpret_cast< std::add_pointer_t<ExecutionPlan>>(_a[1]))); break;
        case 10: _t->plan_executed((*reinterpret_cast< std::add_pointer_t<ExecutionPlan>>(_a[1]))); break;
        case 11: _t->config_saved(); break;
        case 12: _t->config_deleted(); break;
        case 13: _t->memory_stored((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 14: _t->memories_recalled((*reinterpret_cast< std::add_pointer_t<QJsonArray>>(_a[1]))); break;
        case 15: _t->knowledge_results((*reinterpret_cast< std::add_pointer_t<QJsonArray>>(_a[1]))); break;
        case 16: _t->session_saved((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 17: _t->session_loaded((*reinterpret_cast< std::add_pointer_t<QJsonObject>>(_a[1]))); break;
        case 18: _t->trade_executed((*reinterpret_cast< std::add_pointer_t<QJsonObject>>(_a[1]))); break;
        case 19: _t->trade_decisions_loaded((*reinterpret_cast< std::add_pointer_t<QJsonArray>>(_a[1]))); break;
        case 20: _t->multi_query_result((*reinterpret_cast< std::add_pointer_t<QJsonObject>>(_a[1]))); break;
        case 21: _t->error_occurred((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 22: _t->task_event((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QJsonObject>>(_a[2]))); break;
        case 23: _t->tasks_listed((*reinterpret_cast< std::add_pointer_t<QJsonArray>>(_a[1]))); break;
        case 24: _t->task_loaded((*reinterpret_cast< std::add_pointer_t<QJsonObject>>(_a[1]))); break;
        case 25: _t->schedules_listed((*reinterpret_cast< std::add_pointer_t<QJsonArray>>(_a[1]))); break;
        case 26: _t->schedule_created((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 27: _t->schedule_deleted((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 28: _t->scheduled_task_fired((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3]))); break;
        case 29: _t->skills_listed((*reinterpret_cast< std::add_pointer_t<QJsonArray>>(_a[1]))); break;
        case 30: _t->archival_listed((*reinterpret_cast< std::add_pointer_t<QJsonArray>>(_a[1]))); break;
        case 31: _t->reflexion_listed((*reinterpret_cast< std::add_pointer_t<QJsonArray>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _q_method_type = void (AgentService::*)(QVector<AgentInfo> , QVector<AgentCategory> );
            if (_q_method_type _q_method = &AgentService::agents_discovered; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _q_method_type = void (AgentService::*)(AgentExecutionResult );
            if (_q_method_type _q_method = &AgentService::agent_result; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _q_method_type = void (AgentService::*)(const QString & , const QString & );
            if (_q_method_type _q_method = &AgentService::agent_stream_token; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _q_method_type = void (AgentService::*)(const QString & , const QString & );
            if (_q_method_type _q_method = &AgentService::agent_stream_thinking; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _q_method_type = void (AgentService::*)(AgentExecutionResult );
            if (_q_method_type _q_method = &AgentService::agent_stream_done; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _q_method_type = void (AgentService::*)(RoutingResult );
            if (_q_method_type _q_method = &AgentService::routing_result; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
        {
            using _q_method_type = void (AgentService::*)(AgentToolsInfo );
            if (_q_method_type _q_method = &AgentService::tools_loaded; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 6;
                return;
            }
        }
        {
            using _q_method_type = void (AgentService::*)(AgentModelsInfo );
            if (_q_method_type _q_method = &AgentService::models_loaded; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 7;
                return;
            }
        }
        {
            using _q_method_type = void (AgentService::*)(AgentSystemInfo );
            if (_q_method_type _q_method = &AgentService::system_info_loaded; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 8;
                return;
            }
        }
        {
            using _q_method_type = void (AgentService::*)(ExecutionPlan );
            if (_q_method_type _q_method = &AgentService::plan_created; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 9;
                return;
            }
        }
        {
            using _q_method_type = void (AgentService::*)(ExecutionPlan );
            if (_q_method_type _q_method = &AgentService::plan_executed; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 10;
                return;
            }
        }
        {
            using _q_method_type = void (AgentService::*)();
            if (_q_method_type _q_method = &AgentService::config_saved; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 11;
                return;
            }
        }
        {
            using _q_method_type = void (AgentService::*)();
            if (_q_method_type _q_method = &AgentService::config_deleted; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 12;
                return;
            }
        }
        {
            using _q_method_type = void (AgentService::*)(bool , QString );
            if (_q_method_type _q_method = &AgentService::memory_stored; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 13;
                return;
            }
        }
        {
            using _q_method_type = void (AgentService::*)(QJsonArray );
            if (_q_method_type _q_method = &AgentService::memories_recalled; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 14;
                return;
            }
        }
        {
            using _q_method_type = void (AgentService::*)(QJsonArray );
            if (_q_method_type _q_method = &AgentService::knowledge_results; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 15;
                return;
            }
        }
        {
            using _q_method_type = void (AgentService::*)(bool );
            if (_q_method_type _q_method = &AgentService::session_saved; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 16;
                return;
            }
        }
        {
            using _q_method_type = void (AgentService::*)(QJsonObject );
            if (_q_method_type _q_method = &AgentService::session_loaded; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 17;
                return;
            }
        }
        {
            using _q_method_type = void (AgentService::*)(QJsonObject );
            if (_q_method_type _q_method = &AgentService::trade_executed; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 18;
                return;
            }
        }
        {
            using _q_method_type = void (AgentService::*)(QJsonArray );
            if (_q_method_type _q_method = &AgentService::trade_decisions_loaded; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 19;
                return;
            }
        }
        {
            using _q_method_type = void (AgentService::*)(QJsonObject );
            if (_q_method_type _q_method = &AgentService::multi_query_result; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 20;
                return;
            }
        }
        {
            using _q_method_type = void (AgentService::*)(const QString & , const QString & );
            if (_q_method_type _q_method = &AgentService::error_occurred; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 21;
                return;
            }
        }
        {
            using _q_method_type = void (AgentService::*)(const QString & , const QJsonObject & );
            if (_q_method_type _q_method = &AgentService::task_event; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 22;
                return;
            }
        }
        {
            using _q_method_type = void (AgentService::*)(const QJsonArray & );
            if (_q_method_type _q_method = &AgentService::tasks_listed; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 23;
                return;
            }
        }
        {
            using _q_method_type = void (AgentService::*)(const QJsonObject & );
            if (_q_method_type _q_method = &AgentService::task_loaded; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 24;
                return;
            }
        }
        {
            using _q_method_type = void (AgentService::*)(const QJsonArray & );
            if (_q_method_type _q_method = &AgentService::schedules_listed; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 25;
                return;
            }
        }
        {
            using _q_method_type = void (AgentService::*)(const QString & );
            if (_q_method_type _q_method = &AgentService::schedule_created; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 26;
                return;
            }
        }
        {
            using _q_method_type = void (AgentService::*)(const QString & );
            if (_q_method_type _q_method = &AgentService::schedule_deleted; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 27;
                return;
            }
        }
        {
            using _q_method_type = void (AgentService::*)(const QString & , const QString & , const QString & );
            if (_q_method_type _q_method = &AgentService::scheduled_task_fired; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 28;
                return;
            }
        }
        {
            using _q_method_type = void (AgentService::*)(const QJsonArray & );
            if (_q_method_type _q_method = &AgentService::skills_listed; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 29;
                return;
            }
        }
        {
            using _q_method_type = void (AgentService::*)(const QJsonArray & );
            if (_q_method_type _q_method = &AgentService::archival_listed; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 30;
                return;
            }
        }
        {
            using _q_method_type = void (AgentService::*)(const QJsonArray & );
            if (_q_method_type _q_method = &AgentService::reflexion_listed; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 31;
                return;
            }
        }
    }
}

const QMetaObject *fincept::services::AgentService::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *fincept::services::AgentService::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ZN7fincept8services12AgentServiceE.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "fincept::datahub::Producer"))
        return static_cast< fincept::datahub::Producer*>(this);
    return QObject::qt_metacast(_clname);
}

int fincept::services::AgentService::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 32)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 32;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 32)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 32;
    }
    return _id;
}

// SIGNAL 0
void fincept::services::AgentService::agents_discovered(QVector<AgentInfo> _t1, QVector<AgentCategory> _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void fincept::services::AgentService::agent_result(AgentExecutionResult _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void fincept::services::AgentService::agent_stream_token(const QString & _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void fincept::services::AgentService::agent_stream_thinking(const QString & _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void fincept::services::AgentService::agent_stream_done(AgentExecutionResult _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void fincept::services::AgentService::routing_result(RoutingResult _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void fincept::services::AgentService::tools_loaded(AgentToolsInfo _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void fincept::services::AgentService::models_loaded(AgentModelsInfo _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void fincept::services::AgentService::system_info_loaded(AgentSystemInfo _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void fincept::services::AgentService::plan_created(ExecutionPlan _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void fincept::services::AgentService::plan_executed(ExecutionPlan _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void fincept::services::AgentService::config_saved()
{
    QMetaObject::activate(this, &staticMetaObject, 11, nullptr);
}

// SIGNAL 12
void fincept::services::AgentService::config_deleted()
{
    QMetaObject::activate(this, &staticMetaObject, 12, nullptr);
}

// SIGNAL 13
void fincept::services::AgentService::memory_stored(bool _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void fincept::services::AgentService::memories_recalled(QJsonArray _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void fincept::services::AgentService::knowledge_results(QJsonArray _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}

// SIGNAL 16
void fincept::services::AgentService::session_saved(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}

// SIGNAL 17
void fincept::services::AgentService::session_loaded(QJsonObject _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 17, _a);
}

// SIGNAL 18
void fincept::services::AgentService::trade_executed(QJsonObject _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 18, _a);
}

// SIGNAL 19
void fincept::services::AgentService::trade_decisions_loaded(QJsonArray _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 19, _a);
}

// SIGNAL 20
void fincept::services::AgentService::multi_query_result(QJsonObject _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 20, _a);
}

// SIGNAL 21
void fincept::services::AgentService::error_occurred(const QString & _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 21, _a);
}

// SIGNAL 22
void fincept::services::AgentService::task_event(const QString & _t1, const QJsonObject & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 22, _a);
}

// SIGNAL 23
void fincept::services::AgentService::tasks_listed(const QJsonArray & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 23, _a);
}

// SIGNAL 24
void fincept::services::AgentService::task_loaded(const QJsonObject & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 24, _a);
}

// SIGNAL 25
void fincept::services::AgentService::schedules_listed(const QJsonArray & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 25, _a);
}

// SIGNAL 26
void fincept::services::AgentService::schedule_created(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 26, _a);
}

// SIGNAL 27
void fincept::services::AgentService::schedule_deleted(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 27, _a);
}

// SIGNAL 28
void fincept::services::AgentService::scheduled_task_fired(const QString & _t1, const QString & _t2, const QString & _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 28, _a);
}

// SIGNAL 29
void fincept::services::AgentService::skills_listed(const QJsonArray & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 29, _a);
}

// SIGNAL 30
void fincept::services::AgentService::archival_listed(const QJsonArray & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 30, _a);
}

// SIGNAL 31
void fincept::services::AgentService::reflexion_listed(const QJsonArray & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 31, _a);
}
QT_WARNING_POP
