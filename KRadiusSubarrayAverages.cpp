class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) {
        
        vector<long> preFix = {nums[0]};
        vector<int> ans(nums.size());
        for(int i = 1; i < nums.size(); i++)
        {
            preFix.push_back(nums[i] + preFix[preFix.size() - 1]);
        }
        
        for(int i = 0; i < nums.size(); i++)
        {
            if((i - k) < 0 || (i + k) > (nums.size() - 1))
            {
                ans[i] = -1;
            }
            else
            {
                int val = (preFix[i + k] - preFix[i - k] + nums[i - k])/((2*k)+1);
                ans[i] = val;
            }
              
        }
        return ans;
            
    }
};