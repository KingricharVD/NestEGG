// Copyright (c) 2019 The Bitcoin Core developers
// Copyright (c) 2020 The PIVX developers
// Copyright (c) 2021 The DECENOMY Core Developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.
#ifndef PIVX_SCRIPTPUBKEYMAN_H
#define PIVX_SCRIPTPUBKEYMAN_H
#include "wallet/hdchain.h"
#include "wallet/wallet.h"
#include "wallet/walletdb.h"

//! Default for -keypool
static const uint32_t DEFAULT_KEYPOOL_SIZE      = 100;
static const uint32_t BIP32_HARDENED_KEY_LIMIT  = 0x80000000;
// __DSW_HDCHAIN__ see it on https://github.com/satoshilabs/slips/blob/master/slip-0044.md
static const uint32_t BIP32_HDCHAIN             = 0x123456;

/*
 * A class implementing ScriptPubKeyMan manages some (or all) scriptPubKeys used in a wallet.
 * It contains the scripts and keys related to the scriptPubKeys it manages.
 * A ScriptPubKeyMan will be able to give out scriptPubKeys to be used, as well as marking
 * when a scriptPubKey has been used. It also handles when and how to store a scriptPubKey
 * and its related scripts and keys, including encryption.
 */
class ScriptPubKeyMan {
public:
    ScriptPubKeyMan(CWallet* parent) : wallet(parent) {}
    ~ScriptPubKeyMan() {};
    /* Set the HD chain model (chain child index counters) */
    void SetHDChain(CHDChain& chain, bool memonly);
    const CHDChain& GetHDChain() const { return hdChain; }
    /** Sets up the key generation stuff, i.e. generates new HD seeds and sets them as active.
      * Returns false if already setup or setup fails, true if setup is successful
      * Set force=true to make it re-setup if already setup, used for upgrades
      */
    bool SetupGeneration(bool newKeypool = true, bool force = false);
@@ -57,7 +59,7 @@
    unsigned int GetKeyPoolSize() const;

    /* Staking key pool size */
    unsigned int GetECommerceKeyPoolSize() const;

    /* Whether the wallet has or not keys in the pool */
    bool CanGetAddresses(const uint8_t& type = HDChain::ChangeType::EXTERNAL);
@@ -136,7 +138,7 @@ class ScriptPubKeyMan {
    // Key pool maps
    std::set<int64_t> setInternalKeyPool;
    std::set<int64_t> setExternalKeyPool;
    std::set<int64_t> setECommerceKeyPool;
    int64_t m_max_keypool_index = 0;
    std::map<CKeyID, int64_t> m_pool_key_to_index;
    // Tracks keypool indexes to CKeyIDs of keys that have been taken out of the keypool but may be returned to it
    std::map<int64_t, CKeyID> m_index_to_reserved_key;
    /* */
    bool AddKeyPubKeyInner(const CKey& key, const CPubKey &pubkey);
    //! Adds a key to the store, and saves it to disk.
    bool AddKeyPubKeyWithDB(CWalletDB &batch,const CKey& key, const CPubKey &pubkey);
    /* Complete me */
    void AddKeypoolPubkeyWithDB(const CPubKey& pubkey, const uint8_t& type, CWalletDB& batch);
    void GeneratePool(CWalletDB& batch, int64_t targetSize, const uint8_t& type);
    /* HD derive new child key (on internal or external chain) */
    void DeriveNewChildKey(CWalletDB &batch, CKeyMetadata& metadata, CKey& secret, const uint8_t& type = HDChain::ChangeType::EXTERNAL);
    /**
     * Marks all keys in the keypool up to and including reserve_key as used.
     */
    void MarkReserveKeysAsUsed(int64_t keypool_id);
};
#endif //PIVX_SCRIPTPUBKEYMAN_H
