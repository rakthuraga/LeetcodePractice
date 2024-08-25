#include <iostream>
#include <vector>
int slidingWindow(const std::vector<int> &nums, int k);

int main() {

  std::vector<int> nums = {3, 6, 2, 8, 1, 4, 1, 5};
  int k = 10;
  int biggestLength = slidingWindow(nums, k);
  std::cout << biggestLength << std::endl;
}

int slidingWindow(const std::vector<int> &nums, int k) {
  int left = 0;
  int right = 0;
  int answer = 0;
  int current = 0;

  for (right = 0; right < nums.size() - 1; right++) {
    current += nums[right];

    while (current > k) {
      current -= nums[left];
      left++;
    }

    answer = std::max(answer, right - left + 1);
  }

  return answer;
}