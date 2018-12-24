
#include "gtest/gtest.h"

TEST(failed_check, test) {
    EXPECT_EQ(1, 0);
}
