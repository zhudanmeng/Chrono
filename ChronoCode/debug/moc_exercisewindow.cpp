/****************************************************************************
** Meta object code from reading C++ file 'exercisewindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../MainScreen/exercisewindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'exercisewindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ExerciseWindow_t {
    QByteArrayData data[10];
    char stringdata0[113];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ExerciseWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ExerciseWindow_t qt_meta_stringdata_ExerciseWindow = {
    {
QT_MOC_LITERAL(0, 0, 14), // "ExerciseWindow"
QT_MOC_LITERAL(1, 15, 14), // "MyExerciseSlot"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 10), // "newStretch"
QT_MOC_LITERAL(4, 42, 10), // "closeEvent"
QT_MOC_LITERAL(5, 53, 12), // "QCloseEvent*"
QT_MOC_LITERAL(6, 66, 5), // "event"
QT_MOC_LITERAL(7, 72, 11), // "MyTimerSlot"
QT_MOC_LITERAL(8, 84, 13), // "StretchWrists"
QT_MOC_LITERAL(9, 98, 14) // "CloseThisThing"

    },
    "ExerciseWindow\0MyExerciseSlot\0\0"
    "newStretch\0closeEvent\0QCloseEvent*\0"
    "event\0MyTimerSlot\0StretchWrists\0"
    "CloseThisThing"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ExerciseWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x08 /* Private */,
       3,    0,   45,    2, 0x08 /* Private */,
       4,    1,   46,    2, 0x08 /* Private */,
       7,    0,   49,    2, 0x08 /* Private */,
       8,    0,   50,    2, 0x08 /* Private */,
       9,    0,   51,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void ExerciseWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ExerciseWindow *_t = static_cast<ExerciseWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->MyExerciseSlot(); break;
        case 1: _t->newStretch(); break;
        case 2: _t->closeEvent((*reinterpret_cast< QCloseEvent*(*)>(_a[1]))); break;
        case 3: _t->MyTimerSlot(); break;
        case 4: _t->StretchWrists(); break;
        case 5: _t->CloseThisThing(); break;
        default: ;
        }
    }
}

const QMetaObject ExerciseWindow::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_ExerciseWindow.data,
      qt_meta_data_ExerciseWindow,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ExerciseWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ExerciseWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ExerciseWindow.stringdata0))
        return static_cast<void*>(const_cast< ExerciseWindow*>(this));
    return QDialog::qt_metacast(_clname);
}

int ExerciseWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
