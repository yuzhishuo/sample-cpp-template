#include "JumpGame2.h"

#include <algorithm> // for std::max

using namespace std;

int JumpGame2::Solution(std::vector<int>& nums) {
  int ans = 0;
  int end = 0;
  int maxPos = 0;
  for (int i = 0; i < nums.size() - 1; i++) {
    maxPos = std::max(nums[i] + i, maxPos);
    if (i == end) {
      end = maxPos;
      ans++;
    }
  }
  return ans;
}