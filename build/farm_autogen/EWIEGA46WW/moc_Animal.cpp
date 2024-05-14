/****************************************************************************
** Meta object code from reading C++ file 'Animal.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../Animal.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Animal.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSAnimalENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSAnimalENDCLASS = QtMocHelpers::stringData(
    "Animal",
    "updateCollectedEggsLabelSignal",
    "",
    "deleteHenSignal",
    "Animal*",
    "hen",
    "startEatingAnimation",
    "collectedEggsIncrement",
    "Egg*",
    "eggToRemoveFromScene"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSAnimalENDCLASS_t {
    uint offsetsAndSizes[20];
    char stringdata0[7];
    char stringdata1[31];
    char stringdata2[1];
    char stringdata3[16];
    char stringdata4[8];
    char stringdata5[4];
    char stringdata6[21];
    char stringdata7[23];
    char stringdata8[5];
    char stringdata9[21];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSAnimalENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSAnimalENDCLASS_t qt_meta_stringdata_CLASSAnimalENDCLASS = {
    {
        QT_MOC_LITERAL(0, 6),  // "Animal"
        QT_MOC_LITERAL(7, 30),  // "updateCollectedEggsLabelSignal"
        QT_MOC_LITERAL(38, 0),  // ""
        QT_MOC_LITERAL(39, 15),  // "deleteHenSignal"
        QT_MOC_LITERAL(55, 7),  // "Animal*"
        QT_MOC_LITERAL(63, 3),  // "hen"
        QT_MOC_LITERAL(67, 20),  // "startEatingAnimation"
        QT_MOC_LITERAL(88, 22),  // "collectedEggsIncrement"
        QT_MOC_LITERAL(111, 4),  // "Egg*"
        QT_MOC_LITERAL(116, 20)   // "eggToRemoveFromScene"
    },
    "Animal",
    "updateCollectedEggsLabelSignal",
    "",
    "deleteHenSignal",
    "Animal*",
    "hen",
    "startEatingAnimation",
    "collectedEggsIncrement",
    "Egg*",
    "eggToRemoveFromScene"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSAnimalENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   38,    2, 0x06,    1 /* Public */,
       3,    1,   39,    2, 0x06,    2 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       6,    0,   42,    2, 0x0a,    4 /* Public */,
       7,    1,   43,    2, 0x0a,    5 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8,    9,

       0        // eod
};

Q_CONSTINIT const QMetaObject Animal::staticMetaObject = { {
    QMetaObject::SuperData::link<QGraphicsObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSAnimalENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSAnimalENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSAnimalENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<Animal, std::true_type>,
        // method 'updateCollectedEggsLabelSignal'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'deleteHenSignal'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<Animal *, std::false_type>,
        // method 'startEatingAnimation'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'collectedEggsIncrement'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<Egg *, std::false_type>
    >,
    nullptr
} };

void Animal::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Animal *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->updateCollectedEggsLabelSignal(); break;
        case 1: _t->deleteHenSignal((*reinterpret_cast< std::add_pointer_t<Animal*>>(_a[1]))); break;
        case 2: _t->startEatingAnimation(); break;
        case 3: _t->collectedEggsIncrement((*reinterpret_cast< std::add_pointer_t<Egg*>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< Animal* >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< Egg* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Animal::*)();
            if (_t _q_method = &Animal::updateCollectedEggsLabelSignal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Animal::*)(Animal * );
            if (_t _q_method = &Animal::deleteHenSignal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject *Animal::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Animal::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSAnimalENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QGraphicsObject::qt_metacast(_clname);
}

int Animal::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGraphicsObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void Animal::updateCollectedEggsLabelSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Animal::deleteHenSignal(Animal * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
