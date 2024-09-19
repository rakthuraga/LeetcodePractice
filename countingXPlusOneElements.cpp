class Solution {
public:
    int countElements(vector<int>& arr) {
        unordered_map<int, int> myMap;
        
        for(int i = 0; i < arr.size(); i++)
        {
            myMap[arr[i]] = 1;
        }
        
        int counter = 0;
        for(int i = 0; i < arr.size(); i++)
        {
            if(myMap.find(arr[i] + 1) != myMap.end())
            {
                counter++;
            }
        }
        
        return counter;
    }
};