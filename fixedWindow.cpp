#include <iostream>
#include <vector>
int slidingWindow(const std::vector<int>& nums, int k);

int main() {

  std::vector<int> nums = {10,5,2,6};
  int k = 2;
  int biggestLength = slidingWindow(nums, k);
  std::cout << biggestLength << std::endl;
}

int slidingWindow(const std::vector<int>& nums, int k) {
  int maxAns = 0;
  int current = 0;

  for(int i = 0; i < k; i++)
  {
    current += nums[i];
  }
  maxAns = current;

  for(int i = k; i < nums.size(); i++)
  {
    current += nums[i];
    current -= nums[i - k];
    maxAns = std::max(maxAns,current);
  }

  return maxAns;
}