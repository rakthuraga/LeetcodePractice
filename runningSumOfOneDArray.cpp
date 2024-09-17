class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        
        vector<int> preFix = {nums[0]};
        
        for(int i = 1; i < nums.size(); i++)
        {
            preFix.push_back(nums[i] + preFix[preFix.size() - 1]);
        }
        
        
        return preFix;
    }
};