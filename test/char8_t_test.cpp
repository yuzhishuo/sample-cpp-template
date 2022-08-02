#include <gtest/gtest.h>

TEST(CHAR8_T, TEST) {
  EXPECT_EQ(sizeof(char8_t), sizeof(unsigned char));
  EXPECT_NE(typeid(char8_t), typeid(unsigned char));

  char8_t str[] = u8"hello world";
//   char str1[] = u8"ll"; // error
}