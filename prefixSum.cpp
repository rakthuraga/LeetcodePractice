#include <iostream>
#include <vector>
std::vector<bool> preFix(std::vector<int>& nums,  std::vector<std::vector<int>>& queries, int);

int main() {

  std::vector<int> nums = {1,6,3,2,7,2};
  std::vector<std::vector<int>> queries = {{0,3}, {2,5},{2,4}};
  int limit = 13;
  std::vector<bool> trueOrFalse = preFix(nums, queries, limit);
  for(int i = 0; i < trueOrFalse.size(); i++)
  {
    std::cout << trueOrFalse[i] << std::endl;
  }
}

std::vector<bool> preFix( std::vector<int>& nums,  std::vector<std::vector<int>>& queries, int limit) {
  
  std::vector<int> preFixSum;
  preFixSum.push_back(nums[0]);

  std::vector<bool> boolArray(queries.size(), false);

  for(int i = 1; i < nums.size(); i++)
  {
    preFixSum.push_back(nums[i] + preFixSum[preFixSum.size() - 1]);
  }
  int counter = 0;
  for(std::vector<int>query: queries)
  {
    int x = query[0];
    int y = query[1];

    if(preFixSum[y] - preFixSum[x-1] < limit) 
    {
      boolArray[counter] = true;
      counter++;
    }
    else
    {
      counter++;
    }
  }

  return boolArray;
}