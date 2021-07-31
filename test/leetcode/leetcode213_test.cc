#include "gtest/gtest.h"

TEST(myfunctions, add)
{
    GTEST_ASSERT_EQ(add(10, 22), 32);
}