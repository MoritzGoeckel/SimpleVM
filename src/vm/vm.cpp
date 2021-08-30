#include "vm.h"

#include "ops/math.h"
#include "ops/probe.h"

Vm::Vm(std::vector<byte_t>& input) : ctx(), prg(input) {}
Vm::Vm(std::initializer_list<byte_t> input) : ctx(), prg(input) {}
Vm::Vm(const Program& input) : ctx(), prg(input) {}

size_t Vm::run() {
#define op(nr, name)                                \
    case nr:                                        \
        name(ctx, const_cast<const Program&>(prg)); \
        break;

    while (!ctx.sp) {
        switch (prg.getIdx(ctx.pp)) {
            op(0, probe);
            op(1, probe);
            op(2, probe2);
        }
    }

    return ctx.rt;
}
