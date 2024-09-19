vector<int> findNumbers(vector<int>& nums) {
    vector<int> ans;
    unordered_set<int> numsSet(nums.begin(), nums.end());
    
    for (int num: numsSet) {
        if (numsSet.find(num + 1) == numsSet.end() && numsSet.find(num - 1) == numsSet.end()) {
            ans.push_back(num);
        }
    }
    
    return ans;
}