/****************************************************************************
** Meta object code from reading C++ file 'walletmodel.h'
**
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qt/walletmodel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'walletmodel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_WalletModel_t {
    QByteArrayData data[41];
    char stringdata0[526];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WalletModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WalletModel_t qt_meta_stringdata_WalletModel = {
    {
QT_MOC_LITERAL(0, 0, 11), // "WalletModel"
QT_MOC_LITERAL(1, 12, 14), // "balanceChanged"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 26), // "interfaces::WalletBalances"
QT_MOC_LITERAL(4, 55, 14), // "walletBalances"
QT_MOC_LITERAL(5, 70, 23), // "encryptionStatusChanged"
QT_MOC_LITERAL(6, 94, 6), // "status"
QT_MOC_LITERAL(7, 101, 13), // "requireUnlock"
QT_MOC_LITERAL(8, 115, 7), // "message"
QT_MOC_LITERAL(9, 123, 5), // "title"
QT_MOC_LITERAL(10, 129, 4), // "body"
QT_MOC_LITERAL(11, 134, 5), // "style"
QT_MOC_LITERAL(12, 140, 5), // "bool*"
QT_MOC_LITERAL(13, 146, 3), // "ret"
QT_MOC_LITERAL(14, 150, 9), // "coinsSent"
QT_MOC_LITERAL(15, 160, 8), // "CWallet*"
QT_MOC_LITERAL(16, 169, 6), // "wallet"
QT_MOC_LITERAL(17, 176, 18), // "SendCoinsRecipient"
QT_MOC_LITERAL(18, 195, 9), // "recipient"
QT_MOC_LITERAL(19, 205, 11), // "transaction"
QT_MOC_LITERAL(20, 217, 12), // "showProgress"
QT_MOC_LITERAL(21, 230, 9), // "nProgress"
QT_MOC_LITERAL(22, 240, 22), // "notifyWatchonlyChanged"
QT_MOC_LITERAL(23, 263, 14), // "fHaveWatchonly"
QT_MOC_LITERAL(24, 278, 27), // "notifyReceiveAddressChanged"
QT_MOC_LITERAL(25, 306, 12), // "updateStatus"
QT_MOC_LITERAL(26, 319, 17), // "updateTransaction"
QT_MOC_LITERAL(27, 337, 17), // "updateAddressBook"
QT_MOC_LITERAL(28, 355, 7), // "address"
QT_MOC_LITERAL(29, 363, 5), // "label"
QT_MOC_LITERAL(30, 369, 6), // "isMine"
QT_MOC_LITERAL(31, 376, 7), // "purpose"
QT_MOC_LITERAL(32, 384, 19), // "updateWatchOnlyFlag"
QT_MOC_LITERAL(33, 404, 18), // "pollBalanceChanged"
QT_MOC_LITERAL(34, 423, 23), // "updateAddressBookLabels"
QT_MOC_LITERAL(35, 447, 14), // "CTxDestination"
QT_MOC_LITERAL(36, 462, 11), // "std::string"
QT_MOC_LITERAL(37, 474, 7), // "strName"
QT_MOC_LITERAL(38, 482, 10), // "strPurpose"
QT_MOC_LITERAL(39, 493, 19), // "checkBalanceChanged"
QT_MOC_LITERAL(40, 513, 12) // "new_balances"

    },
    "WalletModel\0balanceChanged\0\0"
    "interfaces::WalletBalances\0walletBalances\0"
    "encryptionStatusChanged\0status\0"
    "requireUnlock\0message\0title\0body\0style\0"
    "bool*\0ret\0coinsSent\0CWallet*\0wallet\0"
    "SendCoinsRecipient\0recipient\0transaction\0"
    "showProgress\0nProgress\0notifyWatchonlyChanged\0"
    "fHaveWatchonly\0notifyReceiveAddressChanged\0"
    "updateStatus\0updateTransaction\0"
    "updateAddressBook\0address\0label\0isMine\0"
    "purpose\0updateWatchOnlyFlag\0"
    "pollBalanceChanged\0updateAddressBookLabels\0"
    "CTxDestination\0std::string\0strName\0"
    "strPurpose\0checkBalanceChanged\0"
    "new_balances"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WalletModel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       9,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   94,    2, 0x06 /* Public */,
       5,    1,   97,    2, 0x06 /* Public */,
       7,    0,  100,    2, 0x06 /* Public */,
       8,    4,  101,    2, 0x06 /* Public */,
       8,    3,  110,    2, 0x26 /* Public | MethodCloned */,
      14,    3,  117,    2, 0x06 /* Public */,
      20,    2,  124,    2, 0x06 /* Public */,
      22,    1,  129,    2, 0x06 /* Public */,
      24,    0,  132,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      25,    0,  133,    2, 0x0a /* Public */,
      26,    0,  134,    2, 0x0a /* Public */,
      27,    5,  135,    2, 0x0a /* Public */,
      32,    1,  146,    2, 0x0a /* Public */,
      33,    0,  149,    2, 0x0a /* Public */,
      34,    3,  150,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
      39,    1,  157,    2, 0x00 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::UInt, 0x80000000 | 12,    9,   10,   11,   13,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::UInt,    9,   10,   11,
    QMetaType::Void, 0x80000000 | 15, 0x80000000 | 17, QMetaType::QByteArray,   16,   18,   19,
    QMetaType::Void, QMetaType::QString, QMetaType::Int,    9,   21,
    QMetaType::Void, QMetaType::Bool,   23,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::Bool, QMetaType::QString, QMetaType::Int,   28,   29,   30,   31,    6,
    QMetaType::Void, QMetaType::Bool,   23,
    QMetaType::Void,
    QMetaType::Bool, 0x80000000 | 35, 0x80000000 | 36, 0x80000000 | 36,   28,   37,   38,

 // methods: parameters
    QMetaType::Void, 0x80000000 | 3,   40,

       0        // eod
};

void WalletModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        WalletModel *_t = static_cast<WalletModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->balanceChanged((*reinterpret_cast< const interfaces::WalletBalances(*)>(_a[1]))); break;
        case 1: _t->encryptionStatusChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->requireUnlock(); break;
        case 3: _t->message((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< uint(*)>(_a[3])),(*reinterpret_cast< bool*(*)>(_a[4]))); break;
        case 4: _t->message((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< uint(*)>(_a[3]))); break;
        case 5: _t->coinsSent((*reinterpret_cast< CWallet*(*)>(_a[1])),(*reinterpret_cast< SendCoinsRecipient(*)>(_a[2])),(*reinterpret_cast< QByteArray(*)>(_a[3]))); break;
        case 6: _t->showProgress((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 7: _t->notifyWatchonlyChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->notifyReceiveAddressChanged(); break;
        case 9: _t->updateStatus(); break;
        case 10: _t->updateTransaction(); break;
        case 11: _t->updateAddressBook((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5]))); break;
        case 12: _t->updateWatchOnlyFlag((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 13: _t->pollBalanceChanged(); break;
        case 14: { bool _r = _t->updateAddressBookLabels((*reinterpret_cast< const CTxDestination(*)>(_a[1])),(*reinterpret_cast< const std::string(*)>(_a[2])),(*reinterpret_cast< const std::string(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 15: _t->checkBalanceChanged((*reinterpret_cast< const interfaces::WalletBalances(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (WalletModel::*_t)(const interfaces::WalletBalances & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WalletModel::balanceChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (WalletModel::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WalletModel::encryptionStatusChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (WalletModel::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WalletModel::requireUnlock)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (WalletModel::*_t)(const QString & , const QString & , unsigned int , bool * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WalletModel::message)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (WalletModel::*_t)(CWallet * , SendCoinsRecipient , QByteArray );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WalletModel::coinsSent)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (WalletModel::*_t)(const QString & , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WalletModel::showProgress)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (WalletModel::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WalletModel::notifyWatchonlyChanged)) {
                *result = 7;
                return;
            }
        }
        {
            typedef void (WalletModel::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WalletModel::notifyReceiveAddressChanged)) {
                *result = 8;
                return;
            }
        }
    }
}

const QMetaObject WalletModel::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_WalletModel.data,
      qt_meta_data_WalletModel,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *WalletModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WalletModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_WalletModel.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int WalletModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 16)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 16;
    }
    return _id;
}

// SIGNAL 0
void WalletModel::balanceChanged(const interfaces::WalletBalances & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void WalletModel::encryptionStatusChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void WalletModel::requireUnlock()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void WalletModel::message(const QString & _t1, const QString & _t2, unsigned int _t3, bool * _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 5
void WalletModel::coinsSent(CWallet * _t1, SendCoinsRecipient _t2, QByteArray _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void WalletModel::showProgress(const QString & _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void WalletModel::notifyWatchonlyChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void WalletModel::notifyReceiveAddressChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
