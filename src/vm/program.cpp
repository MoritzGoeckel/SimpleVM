#include "program.h"

Program::Program(const std::vector<byte_t>& input) : data(input) {}
Program::Program(std::initializer_list<byte_t>& input) : data(input) {}
Program::Program() : data() {}

byte_t Program::getByte(idx_t idx) const { return data[idx]; }

idx_t Program::getIdx(idx_t idx) const {
    return *reinterpret_cast<const size_t*>(&data[idx]);
}

int_t Program::getInt(idx_t idx) const {
    return *reinterpret_cast<const int*>(&data[idx]);
}

bool_t Program::getBool(idx_t idx) const {
    return *reinterpret_cast<const bool*>(&data[idx]);
}

void Program::putByte(byte_t value) { data.push_back(value); }

void Program::putIdx(idx_t value) {
    for (size_t i = 0; i < idx_s; ++i) data.push_back(0);
    *reinterpret_cast<idx_t*>(&data[data.size() - idx_s]) = value;
}

void Program::putInt(int_t value) {
    // TODO
}

void Program::putBool(bool_t value) {
    // TODO
}
