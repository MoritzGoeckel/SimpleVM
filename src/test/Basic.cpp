#include <gtest/gtest.h>
#include <iostream>

TEST(module_name, test_name) {
    std::cout << "Hello world!" << std::endl;
    ASSERT_EQ(1 + 1, 2);
}

int main(int argc, char** argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
