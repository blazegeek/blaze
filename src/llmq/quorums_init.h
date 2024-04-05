// Copyright (c) 2018 The Dash Core developers
// Copyright (c) 2018-2019 The GeekCash developers
// Copyright (c) 2024			 The blazegeek developers
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef BLAZE_QUORUMS_INIT_H
#define BLAZE_QUORUMS_INIT_H

class CEvoDB;

namespace llmq
{

void InitLLMQSystem(CEvoDB& evoDb);
void DestroyLLMQSystem();

}

#endif //BLAZE_QUORUMS_INIT_H
