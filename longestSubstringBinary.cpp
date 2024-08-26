#include <iostream>
#include <vector>
int slidingWindow(const std::string& s);

int main() {

  std::string s = "10010010110111";
  int biggestLength = slidingWindow(s);
  std::cout << biggestLength << std::endl;
}

int slidingWindow(const std::string& s) {
  int left = 0;
  int right = 0;
  int answer = 0;
  int counter = 0;

  for (right = 0; right < s.size(); right++) {
    if(s[right] == '0')
    {
      counter += 1;
    }

    while (counter > 1) {
      if(s[left] == '0')
      {
        counter -= 1;
      }
      left++;
    }

    answer = std::max(answer, right - left + 1);
  }

  return answer;
}