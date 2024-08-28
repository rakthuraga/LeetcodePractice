class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int current = 0;
        for(int i = 0; i < k; i++)
        {
            current += nums[i];
        }
        int maxVal = current;
        
        for(int i = k; i < nums.size(); i++)
        {
            current += nums[i];
            current -= nums[i-k];
            maxVal = max(maxVal, current);
        }
        double modK = k;
        return maxVal/modK;
        
    }
};