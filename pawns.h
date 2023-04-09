#pragma once

#include "types.h"

struct PawnEntry{
    U64 hashkey = 0ULL;
    Score value;
};

struct PawnTable{
    std::vector<PawnEntry*>entries;
    PawnTable();
    PawnEntry *probeEntry(const Board& board);
    void clear();
    void Reinitialize();
};