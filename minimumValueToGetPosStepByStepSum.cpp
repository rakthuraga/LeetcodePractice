class Solution {
public:
    int minStartValue(vector<int>& nums) {
        
        int start = 0;
        int current = 0;
        for(int i = 0; i < nums.size(); i++)
        {
            current += nums[i];
            while(current < 1)
            {
                start++;
                current++;
            }
        }
        
        if(start == 0)
        {
            start = 1;
        }
        return start;
    }
};