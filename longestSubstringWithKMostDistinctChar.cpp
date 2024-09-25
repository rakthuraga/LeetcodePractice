#include <iostream>
#include <unordered_map>

int returnInt(std::string s);

int main() 
{
  
  int res = returnInt("eeteceba");
  std::cout << res;
  
}

int returnInt(std::string s)
{
  int left = 0;
  std::unordered_map<char, int> myMap;
  int counter = 0;
  int maxVal = 0;
  int k = 2;

  for(int i = 0; i < k; i++)
  {
    if(myMap.find(s[i]) == myMap.end())
    {
      counter++;
    }
    myMap[s[i]]++;
  }
  
  for(int right = k; right < s.size(); right++)
  {
    if(myMap.find(s[right]) != myMap.end())
    {
      if(myMap[s[right]] == 0)
      {
        counter++;
        myMap[s[right]]++;
      }
      else
      {
        myMap[s[right]]++;
      }
    }
    else
    {
      counter++;
      while(counter > k)
      {
        myMap[s[left]]--;
        if(myMap[s[left]] <= 0)
        {
          counter--;
          
        }
        left++;
      }
    }

    maxVal = std::max(maxVal, right - left + 1);
  }

  return maxVal;
}