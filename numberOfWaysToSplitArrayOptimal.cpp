class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        int ans = 0;
        long leftSection = 0;
        long total = 0;
        
        for (int num: nums) {
            total += num;
        }
        
        for (int i = 0; i < nums.size() - 1; i++) {
            leftSection += nums[i];
            long rightSection = total - leftSection;
            if (leftSection >= rightSection) {
                ans++;
            }
        }
        
        return ans;
    }
};