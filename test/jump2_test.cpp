
/**
 * @file jump2_test.cpp
 * @author Yimin Liu (aoumeior@outlook.com)
 * @brief 
 * @version 0.1
 * @date 2022-01-08
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <gtest/gtest.h> // Google Test Framework

#include <vector> // for std::vector

#include "JumpGame2.h" // Solution of problem.

TEST(JumpGame2, test) {
  std::vector<int> nums = {2, 3, 1, 1, 4};
  EXPECT_EQ(2, JumpGame2::Solution(nums));

  nums = {3, 2, 1, 0, 4};
  EXPECT_EQ(3, JumpGame2::Solution(nums));

  nums = {0};
  EXPECT_EQ(0, JumpGame2::Solution(nums));

  nums = {1};
  EXPECT_EQ(1, JumpGame2::Solution(nums));

  nums = {1, 2};
  EXPECT_EQ(1, JumpGame2::Solution(nums));

  nums = {1, 2, 3};
  EXPECT_EQ(2, JumpGame2::Solution(nums));

  nums = {1, 2, 3, 4};
  EXPECT_EQ(3, JumpGame2::Solution(nums));

  nums = {1, 2, 3, 4, 5};
  EXPECT_EQ(3, JumpGame2::Solution(nums));

  nums = {1, 2, 3, 4, 5, 6};
  EXPECT_EQ(4, JumpGame2::Solution(nums));
}