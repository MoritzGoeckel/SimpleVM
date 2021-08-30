#pragma once

#include <vector>
#include "types.h"

struct Context {
    Context();

    idx_t pp;               // program pointer
    idx_t rt;               // return value
    bool_t ex;              // exception
    bool_t sp;              // stop
    std::vector<idx_t> gp;  // general purpose registers
};
