class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int i = 0;
        int j = nums.size() - 1;
        
        vector<int> result;
        
        while(i <= j)
        {
            if(std::abs(nums[i]) < std::abs(nums[j]))
            {
                result.insert(result.begin(), pow(nums[j],2));
                j--;
            }
            else
            {
                result.insert(result.begin(), pow(nums[i],2));
                i++;
            }
        }
        
        return result;
        
    }
};