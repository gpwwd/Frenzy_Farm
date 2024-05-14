/****************************************************************************
** Meta object code from reading C++ file 'dialog.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../dialog.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.6.2. It"
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

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSDialogENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSDialogENDCLASS = QtMocHelpers::stringData(
    "Dialog",
    "updateCollectedEggsLabelSignal",
    "",
    "selledEggs",
    "QPushButton*",
    "sellEggsButton",
    "selledBears",
    "on_loadSingleEggButton_clicked",
    "on_loadAllEggsButton_clicked",
    "on_sellEggsButton_clicked",
    "on_loadBear_clicked",
    "on_sellBear_clicked"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSDialogENDCLASS_t {
    uint offsetsAndSizes[24];
    char stringdata0[7];
    char stringdata1[31];
    char stringdata2[1];
    char stringdata3[11];
    char stringdata4[13];
    char stringdata5[15];
    char stringdata6[12];
    char stringdata7[31];
    char stringdata8[29];
    char stringdata9[26];
    char stringdata10[20];
    char stringdata11[20];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSDialogENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSDialogENDCLASS_t qt_meta_stringdata_CLASSDialogENDCLASS = {
    {
        QT_MOC_LITERAL(0, 6),  // "Dialog"
        QT_MOC_LITERAL(7, 30),  // "updateCollectedEggsLabelSignal"
        QT_MOC_LITERAL(38, 0),  // ""
        QT_MOC_LITERAL(39, 10),  // "selledEggs"
        QT_MOC_LITERAL(50, 12),  // "QPushButton*"
        QT_MOC_LITERAL(63, 14),  // "sellEggsButton"
        QT_MOC_LITERAL(78, 11),  // "selledBears"
        QT_MOC_LITERAL(90, 30),  // "on_loadSingleEggButton_clicked"
        QT_MOC_LITERAL(121, 28),  // "on_loadAllEggsButton_clicked"
        QT_MOC_LITERAL(150, 25),  // "on_sellEggsButton_clicked"
        QT_MOC_LITERAL(176, 19),  // "on_loadBear_clicked"
        QT_MOC_LITERAL(196, 19)   // "on_sellBear_clicked"
    },
    "Dialog",
    "updateCollectedEggsLabelSignal",
    "",
    "selledEggs",
    "QPushButton*",
    "sellEggsButton",
    "selledBears",
    "on_loadSingleEggButton_clicked",
    "on_loadAllEggsButton_clicked",
    "on_sellEggsButton_clicked",
    "on_loadBear_clicked",
    "on_sellBear_clicked"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSDialogENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   62,    2, 0x06,    1 /* Public */,
       3,    2,   63,    2, 0x06,    2 /* Public */,
       6,    2,   68,    2, 0x06,    5 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       7,    0,   73,    2, 0x08,    8 /* Private */,
       8,    0,   74,    2, 0x08,    9 /* Private */,
       9,    0,   75,    2, 0x08,   10 /* Private */,
      10,    0,   76,    2, 0x08,   11 /* Private */,
      11,    0,   77,    2, 0x08,   12 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4, QMetaType::Int,    5,    3,
    QMetaType::Void, 0x80000000 | 4, QMetaType::Int,    5,    6,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject Dialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_CLASSDialogENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSDialogENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSDialogENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<Dialog, std::true_type>,
        // method 'updateCollectedEggsLabelSignal'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'selledEggs'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QPushButton *, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'selledBears'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QPushButton *, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_loadSingleEggButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_loadAllEggsButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_sellEggsButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_loadBear_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_sellBear_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void Dialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Dialog *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->updateCollectedEggsLabelSignal(); break;
        case 1: _t->selledEggs((*reinterpret_cast< std::add_pointer_t<QPushButton*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 2: _t->selledBears((*reinterpret_cast< std::add_pointer_t<QPushButton*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 3: _t->on_loadSingleEggButton_clicked(); break;
        case 4: _t->on_loadAllEggsButton_clicked(); break;
        case 5: _t->on_sellEggsButton_clicked(); break;
        case 6: _t->on_loadBear_clicked(); break;
        case 7: _t->on_sellBear_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Dialog::*)();
            if (_t _q_method = &Dialog::updateCollectedEggsLabelSignal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Dialog::*)(QPushButton * , int );
            if (_t _q_method = &Dialog::selledEggs; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Dialog::*)(QPushButton * , int );
            if (_t _q_method = &Dialog::selledBears; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject *Dialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Dialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSDialogENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int Dialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void Dialog::updateCollectedEggsLabelSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Dialog::selledEggs(QPushButton * _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Dialog::selledBears(QPushButton * _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
