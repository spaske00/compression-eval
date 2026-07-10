/****************************************************************************
** Meta object code from reading C++ file 'NodeEditorToolbar.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../upstream/fincept-qt/src/screens/node_editor/toolbar/NodeEditorToolbar.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'NodeEditorToolbar.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN7fincept8workflow17NodeEditorToolbarE_t {};
} // unnamed namespace


#ifdef QT_MOC_HAS_STRINGDATA
static constexpr auto qt_meta_stringdata_ZN7fincept8workflow17NodeEditorToolbarE = QtMocHelpers::stringData(
    "fincept::workflow::NodeEditorToolbar",
    "undo_clicked",
    "",
    "redo_clicked",
    "save_clicked",
    "load_clicked",
    "clear_clicked",
    "execute_clicked",
    "import_clicked",
    "export_clicked",
    "name_changed",
    "name",
    "templates_clicked",
    "deploy_clicked"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA

Q_CONSTINIT static const uint qt_meta_data_ZN7fincept8workflow17NodeEditorToolbarE[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      11,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   80,    2, 0x06,    1 /* Public */,
       3,    0,   81,    2, 0x06,    2 /* Public */,
       4,    0,   82,    2, 0x06,    3 /* Public */,
       5,    0,   83,    2, 0x06,    4 /* Public */,
       6,    0,   84,    2, 0x06,    5 /* Public */,
       7,    0,   85,    2, 0x06,    6 /* Public */,
       8,    0,   86,    2, 0x06,    7 /* Public */,
       9,    0,   87,    2, 0x06,    8 /* Public */,
      10,    1,   88,    2, 0x06,    9 /* Public */,
      12,    0,   91,    2, 0x06,   11 /* Public */,
      13,    0,   92,    2, 0x06,   12 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   11,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject fincept::workflow::NodeEditorToolbar::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_ZN7fincept8workflow17NodeEditorToolbarE.offsetsAndSizes,
    qt_meta_data_ZN7fincept8workflow17NodeEditorToolbarE,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_tag_ZN7fincept8workflow17NodeEditorToolbarE_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<NodeEditorToolbar, std::true_type>,
        // method 'undo_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'redo_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'save_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'load_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'clear_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'execute_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'import_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'export_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'name_changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'templates_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'deploy_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void fincept::workflow::NodeEditorToolbar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<NodeEditorToolbar *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->undo_clicked(); break;
        case 1: _t->redo_clicked(); break;
        case 2: _t->save_clicked(); break;
        case 3: _t->load_clicked(); break;
        case 4: _t->clear_clicked(); break;
        case 5: _t->execute_clicked(); break;
        case 6: _t->import_clicked(); break;
        case 7: _t->export_clicked(); break;
        case 8: _t->name_changed((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 9: _t->templates_clicked(); break;
        case 10: _t->deploy_clicked(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _q_method_type = void (NodeEditorToolbar::*)();
            if (_q_method_type _q_method = &NodeEditorToolbar::undo_clicked; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _q_method_type = void (NodeEditorToolbar::*)();
            if (_q_method_type _q_method = &NodeEditorToolbar::redo_clicked; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _q_method_type = void (NodeEditorToolbar::*)();
            if (_q_method_type _q_method = &NodeEditorToolbar::save_clicked; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _q_method_type = void (NodeEditorToolbar::*)();
            if (_q_method_type _q_method = &NodeEditorToolbar::load_clicked; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _q_method_type = void (NodeEditorToolbar::*)();
            if (_q_method_type _q_method = &NodeEditorToolbar::clear_clicked; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _q_method_type = void (NodeEditorToolbar::*)();
            if (_q_method_type _q_method = &NodeEditorToolbar::execute_clicked; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
        {
            using _q_method_type = void (NodeEditorToolbar::*)();
            if (_q_method_type _q_method = &NodeEditorToolbar::import_clicked; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 6;
                return;
            }
        }
        {
            using _q_method_type = void (NodeEditorToolbar::*)();
            if (_q_method_type _q_method = &NodeEditorToolbar::export_clicked; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 7;
                return;
            }
        }
        {
            using _q_method_type = void (NodeEditorToolbar::*)(const QString & );
            if (_q_method_type _q_method = &NodeEditorToolbar::name_changed; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 8;
                return;
            }
        }
        {
            using _q_method_type = void (NodeEditorToolbar::*)();
            if (_q_method_type _q_method = &NodeEditorToolbar::templates_clicked; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 9;
                return;
            }
        }
        {
            using _q_method_type = void (NodeEditorToolbar::*)();
            if (_q_method_type _q_method = &NodeEditorToolbar::deploy_clicked; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 10;
                return;
            }
        }
    }
}

const QMetaObject *fincept::workflow::NodeEditorToolbar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *fincept::workflow::NodeEditorToolbar::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ZN7fincept8workflow17NodeEditorToolbarE.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int fincept::workflow::NodeEditorToolbar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void fincept::workflow::NodeEditorToolbar::undo_clicked()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void fincept::workflow::NodeEditorToolbar::redo_clicked()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void fincept::workflow::NodeEditorToolbar::save_clicked()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void fincept::workflow::NodeEditorToolbar::load_clicked()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void fincept::workflow::NodeEditorToolbar::clear_clicked()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void fincept::workflow::NodeEditorToolbar::execute_clicked()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void fincept::workflow::NodeEditorToolbar::import_clicked()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void fincept::workflow::NodeEditorToolbar::export_clicked()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void fincept::workflow::NodeEditorToolbar::name_changed(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void fincept::workflow::NodeEditorToolbar::templates_clicked()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}

// SIGNAL 10
void fincept::workflow::NodeEditorToolbar::deploy_clicked()
{
    QMetaObject::activate(this, &staticMetaObject, 10, nullptr);
}
QT_WARNING_POP
