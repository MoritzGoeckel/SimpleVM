#pragma once

#include <vector>
#include "context.h"
#include "program.h"
#include "types.h"

class Vm {
   private:
    Context ctx;
    Program prg;

   public:
    Vm(std::vector<byte_t>& input);
    Vm(std::initializer_list<byte_t> input);
    Vm(const Program& input);
    idx_t run();
};
