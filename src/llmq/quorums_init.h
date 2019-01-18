// Copyright (c) 2018 The Dash Core developers
// Copyright (c) 2018-2019 The GeekCash developers
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef GEEKCASH_QUORUMS_INIT_H
#define GEEKCASH_QUORUMS_INIT_H

class CEvoDB;

namespace llmq
{

void InitLLMQSystem(CEvoDB& evoDb);
void DestroyLLMQSystem();

}

#endif //GEEKCASH_QUORUMS_INIT_H
