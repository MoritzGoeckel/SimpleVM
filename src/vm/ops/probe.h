#include <iostream>

void probe(Context& ctx, const Program& prg) {
    std::cout << "probe" << std::endl;
    ctx.pp += idx_s;
}

void probe2(Context& ctx, const Program& prg) {
    std::cout << "probe2" << std::endl;
    ctx.sp = true;
}
