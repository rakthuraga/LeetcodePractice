class Solution {
public:
    bool checkIfPangram(string sentence) {
        
        int counter = 0;
        unordered_map<char, int> mapOfChar;
        for(int i = 0; i < sentence.size(); i++)
        {
            if(mapOfChar.find(sentence[i]) == mapOfChar.end())
            {
                counter++;
            }
            mapOfChar[sentence[i]] = 1;
        }
        std::cout << counter;
        return counter == 26;
        
    }
};