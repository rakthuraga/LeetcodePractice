int findLongestSubstring(string s, int k) {
    unordered_map<char, int> counts;
    int left = 0, ans = 0;
    
    for (int right = 0; right < s.size(); right++) {
        counts[s[right]]++;
        while (counts.size() > k) {
            counts[s[left]]--;
            if (counts[s[left]] == 0) {
                counts.erase(s[left]);
            }
            left+;
        }
        
        ans = max(ans, right - left + 1);
    }
    
    return ans;
}