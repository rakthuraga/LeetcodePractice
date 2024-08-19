class Solution {
public:
    void reverseString(vector<char>& s) {
        
        int i = s.size() - 1;
        int j = 0;
        char temp = ' ';
        
        while(i > j)
        {
            temp = s[j];
            s[j] = s[i];
            s[i] = temp;
            i--;
            j++;
        }
    }
};