
// op reg int
void seti(Context& ctx, const Program& prg) {
    ctx.gp[prg.getIdx(ctx.pp + idx_s)] = prg.getInt(ctx.pp + idx_s * 2);
    ctx.pp += ctx.pp + idx_s * 2 + int_s;
}

// op reg reg
void addi(Context& ctx, const Program& prg) {
    // TODO
}
