// Copyright (c) 2014-2016 The Dash developers
// Copyright (c) 2016-2020 The PIVX developers
// Copyright (c) 2021 The Human_Charity_Coin_Protocol Core Developers
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef SPORKID_H
#define SPORKID_H

/*
    Don't ever reuse these IDs for other sporks
    - This would result in old clients getting confused about which spork is for what
*/

enum SporkId : int32_t {
    SPORK_2_SWIFTTX                             = 10001,
    SPORK_3_SWIFTTX_BLOCK_FILTERING             = 10002,
    SPORK_5_MAX_VALUE                           = 10004,
    SPORK_8_MASTERNODE_PAYMENT_ENFORCEMENT      = 10007,
    SPORK_9_MASTERNODE_BUDGET_ENFORCEMENT       = 10008,
    SPORK_13_ENABLE_SUPERBLOCKS                 = 10012,
    SPORK_14_MIN_PROTOCOL_ACCEPTED              = 10013,
    SPORK_15_NEW_PROTOCOL_ENFORCEMENT_2         = 10014,
    SPORK_16_ZEROCOIN_MAINTENANCE_MODE          = 10015,

      // SPORK_18_COLDSTAKING_ENFORCEMENT is being set to 10020 for compatibility with v1.3.3.x wallets.
          // SPORK_18_COLDSTAKING_ENFORCEMENT            = 10017,
    SPORK_17_COLDSTAKING_ENFORCEMENT            = 10020,

    SPORK_18_ZEROCOIN_PUBLICSPEND_V4            = 10018,
    SPORK_20_UPGRADE_CYCLE_FACTOR               = 10019,

    SPORK_101_SERVICES_ENFORCEMENT              = 10100,
    SPORK_102_FORCE_ENABLED_MASTERNODE          = 10101,
    SPORK_103_PING_MESSAGE_SALT                 = 10102,
    SPORK_104_MAX_BLOCK_TIME                    = 10103,
    SPORK_105_MAX_BLOCK_SIZE                    = 10104,
    SPORK_106_STAKING_SKIP_MN_SYNC              = 10105,

    SPORK_7_NOOP                                = 10006,
    SPORK_10_NOOP                               = 10009,
    SPORK_11_NOOP                               = 10010,
    SPORK_12_NOOP                               = 10011,
    SPORK_17_NOOP                               = 10016,
    SPORK_21_NOOP                               = 10020,
    SPORK_22_NOOP                               = 10021,
    SPORK_24_NOOP                               = 10023,
    SPORK_INVALID                               = -1
};

// Default values
struct CSporkDef
{
    CSporkDef(): sporkId(SPORK_INVALID), defaultValue(0) {}
    CSporkDef(SporkId id, int64_t val, std::string n): sporkId(id), defaultValue(val), name(n) {}
    SporkId sporkId;
    int64_t defaultValue;
    std::string name;
};

#endif
