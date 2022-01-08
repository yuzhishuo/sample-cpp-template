/**
 * @file JumpGame2.h
 * @author Yimin Liu (aoumeior@outlook.com)
 * @brief leetcode #45 Jump Game II
 * @version 0.1
 * @date 2022-01-08
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <vector> // for std::vector

/**
 * @brief Jump Game II, LeetCode, https://leetcode.com/problems/jump-game-ii/
 * @details description: Given an array of non-negative integers nums,
 * you are initially positioned at the first index of the array.
 * Each element in the array represents your maximum jump length at
 * that position. Your goal is to reach the last index in the minimum number of
 * jumps. You can assume that you can always reach the last index.
 */
class JumpGame2 {
 public:
  /**
   * @brief Solution 1, DP, O(n) time, O(1) space
   *
   * @param nums input vector, non-negative integers nums.
   * @return int reach the last index in the minimum number of jumps.
   */
  static int Solution(std::vector<int>& nums);
};