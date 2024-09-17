class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int left = 0;
        int right = 0;
        int counter = 0;
        int maxVal = 0;
        int current = 0;
        
        for(right = 0; right < nums.size(); right++)
        {
            if(nums[right] == 1)
            {
                current++;
            }
            else
            {
                counter++;
                current++;
            }
            
            while(counter > k)
            {
                if(nums[left] == 0)
                {
                    counter--;
                }
                left++;
                current--;      
            }
            
            
            maxVal = max(maxVal, current);
        }
        return maxVal;
        
    }
};