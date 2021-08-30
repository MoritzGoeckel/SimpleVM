#pragma once

#include <vector>
#include "types.h"

class Program {
   private:
    std::vector<byte_t> data;

   public:
    Program(const std::vector<byte_t>& input);
    Program(std::initializer_list<byte_t>& input);
    Program();

    byte_t getByte(idx_t idx) const;
    idx_t getIdx(idx_t idx) const;
    int_t getInt(idx_t idx) const;
    bool_t getBool(idx_t idx) const;

    void putByte(byte_t value);
    void putIdx(idx_t value);
    void putInt(int_t value);
    void putBool(bool_t value);
};
