#include <iostream>
#include <vector>
std::vector<int> SortedCombine(std::vector<int>&,std::vector<int>& );
int main() 
{ 
  std::vector<int> vector = {1,3,5,7,9};
  std::vector<int> vectorTwo = {2,4,6,8};

  std::vector<int> finalVector = SortedCombine(vector, vectorTwo); 
  for(int i = 0; i < finalVector.size(); i++)
  {
    std::cout << finalVector[i];
  }
}

std::vector<int> SortedCombine(std::vector<int>& vecOne,std::vector<int>& vecTwo)
{
  int i = 0;
  int j = 0;

  std::vector<int> finalAnswer = {};

  while(i <= vecOne.size() - 1 && j <= vecTwo.size() - 1)
  {
    if(vecOne[i] < vecTwo[j])
    {
      finalAnswer.push_back(vecOne[i]);
      i++;
    }
    else if(vecOne[i] > vecTwo[j])
    {
      finalAnswer.push_back(vecTwo[j]);
      j++;
    }
    else
    {
      finalAnswer.push_back(vecOne[i]);
      i++;
    }
    
  }


  return finalAnswer;
}
