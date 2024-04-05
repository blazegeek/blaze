// Copyright (c) 2018 The Dash Core developers
// Copyright (c) 2018-2019 The GeekCash developers
// Copyright (c) 2024			 The blazegeek developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef BLAZE_QUORUMS_UTILS_H
#define BLAZE_QUORUMS_UTILS_H

#include "consensus/params.h"

#include "evo/deterministicmns.h"

#include <vector>

namespace llmq
{

class CLLMQUtils
{
public:
    // includes members which failed DKG
    static std::vector<CDeterministicMNCPtr> GetAllQuorumMembers(Consensus::LLMQType llmqType, const uint256& blockHash);

    static uint256 BuildCommitmentHash(uint8_t llmqType, const uint256& blockHash, const std::vector<bool>& validMembers, const CBLSPublicKey& pubKey, const uint256& vvecHash);
};

}

#endif//BLAZE_QUORUMS_UTILS_H
