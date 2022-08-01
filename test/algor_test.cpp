#include <gtest/gtest.h>

#include <algor/algor.h>
using namespace example;

TEST(Add, test)
{
  EXPECT_EQ(add(1,1), 2);

}