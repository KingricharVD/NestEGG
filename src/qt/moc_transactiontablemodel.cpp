/****************************************************************************
** Meta object code from reading C++ file 'transactiontablemodel.h'
**
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qt/transactiontablemodel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'transactiontablemodel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_TransactionTableModel_t {
    QByteArrayData data[14];
    char stringdata0[203];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TransactionTableModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TransactionTableModel_t qt_meta_stringdata_TransactionTableModel = {
    {
QT_MOC_LITERAL(0, 0, 21), // "TransactionTableModel"
QT_MOC_LITERAL(1, 22, 9), // "txArrived"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 4), // "hash"
QT_MOC_LITERAL(4, 38, 11), // "isCoinStake"
QT_MOC_LITERAL(5, 50, 11), // "isCSAnyType"
QT_MOC_LITERAL(6, 62, 17), // "updateTransaction"
QT_MOC_LITERAL(7, 80, 6), // "status"
QT_MOC_LITERAL(8, 87, 15), // "showTransaction"
QT_MOC_LITERAL(9, 103, 19), // "updateConfirmations"
QT_MOC_LITERAL(10, 123, 17), // "updateDisplayUnit"
QT_MOC_LITERAL(11, 141, 23), // "updateAmountColumnTitle"
QT_MOC_LITERAL(12, 165, 31), // "setProcessingQueuedTransactions"
QT_MOC_LITERAL(13, 197, 5) // "value"

    },
    "TransactionTableModel\0txArrived\0\0hash\0"
    "isCoinStake\0isCSAnyType\0updateTransaction\0"
    "status\0showTransaction\0updateConfirmations\0"
    "updateDisplayUnit\0updateAmountColumnTitle\0"
    "setProcessingQueuedTransactions\0value"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TransactionTableModel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    3,   44,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    3,   51,    2, 0x0a /* Public */,
       9,    0,   58,    2, 0x0a /* Public */,
      10,    0,   59,    2, 0x0a /* Public */,
      11,    0,   60,    2, 0x0a /* Public */,
      12,    1,   61,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::Bool, QMetaType::Bool,    3,    4,    5,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::Int, QMetaType::Bool,    3,    7,    8,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   13,

       0        // eod
};

void TransactionTableModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TransactionTableModel *_t = static_cast<TransactionTableModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->txArrived((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const bool(*)>(_a[2])),(*reinterpret_cast< const bool(*)>(_a[3]))); break;
        case 1: _t->updateTransaction((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 2: _t->updateConfirmations(); break;
        case 3: _t->updateDisplayUnit(); break;
        case 4: _t->updateAmountColumnTitle(); break;
        case 5: _t->setProcessingQueuedTransactions((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (TransactionTableModel::*_t)(const QString & , const bool & , const bool & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TransactionTableModel::txArrived)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject TransactionTableModel::staticMetaObject = {
    { &QAbstractTableModel::staticMetaObject, qt_meta_stringdata_TransactionTableModel.data,
      qt_meta_data_TransactionTableModel,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *TransactionTableModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TransactionTableModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TransactionTableModel.stringdata0))
        return static_cast<void*>(this);
    return QAbstractTableModel::qt_metacast(_clname);
}

int TransactionTableModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractTableModel::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void TransactionTableModel::txArrived(const QString & _t1, const bool & _t2, const bool & _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
