#include <iostream>
#include <vector>
int preFix(std::vector<int> &nums);

int main() {

  std::vector<int> nums = {1, 6, -4, -8, 3, 2, 7, 2};
  int totalWays = preFix(nums);
  std::cout << totalWays;
}

int preFix(std::vector<int> &nums) {

  std::vector<int> preFixSum;
  preFixSum.push_back(nums[0]);

  for (int i = 1; i < nums.size(); i++) {
    preFixSum.push_back(nums[i] + preFixSum[preFixSum.size() - 1]);
  }
  int pointer = 0;
  int last = nums.size() - 1;
  int counter = 0;
  for (pointer = 0; pointer < nums.size() - 1; pointer++)   {
    if(preFixSum[pointer] >= preFixSum[last] - preFixSum[pointer])
    {
      counter++;
    }
  }

  return counter;
}