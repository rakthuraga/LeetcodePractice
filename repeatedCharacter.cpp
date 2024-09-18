#include <iostream>
#include <unordered_map>

char returnChar(std::string s);

int main() 
{

std::string s = "shgfhteycv";

std::cout << returnChar(s);
  
}

char returnChar(std::string s)
{
  char none = '\0';
  std::unordered_map<char, int> myMap;
  for(int i = 0; i < s.length(); i++)
  {
    char complement = s[i];
    if(myMap.find(complement) != myMap.end())
    {
      return complement;
    }
    myMap[complement];
  }

  return none;
}