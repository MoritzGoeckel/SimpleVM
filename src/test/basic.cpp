#include <gtest/gtest.h>
#include <iostream>

#include "../vm/vm.h"

TEST(vm, simple) {
    Program p;
    p.putIdx(0);
    p.putIdx(1);
    p.putIdx(2);

    Vm m{p};
    m.run();
    ASSERT_EQ(1 + 1, 2);
}

int main(int argc, char** argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

