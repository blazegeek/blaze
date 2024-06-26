// Copyright (c) 2018 The Dash Core developers
// Copyright (c) 2018-2019 The GeekCash developers
// Copyright (c) 2024			 The blazegeek developers
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#include "quorums_init.h"

#include "quorums_blockprocessor.h"
#include "quorums_commitment.h"
#include "quorums_dummydkg.h"

namespace llmq
{

void InitLLMQSystem(CEvoDB& evoDb)
{
    quorumBlockProcessor = new CQuorumBlockProcessor(evoDb);
    quorumDummyDKG = new CDummyDKG();
}

void DestroyLLMQSystem()
{
    delete quorumDummyDKG;
    quorumDummyDKG = nullptr;
    delete quorumBlockProcessor;
    quorumBlockProcessor = nullptr;
}

}
