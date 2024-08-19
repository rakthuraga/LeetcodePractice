#include <iostream>
bool Palindrome(std::string S);
int main() {

  std::string S = "Balloon";

  bool Check = Palindrome(S);

  if (Check == true) {
    std::cout << "true";
  } else {
    std::cout << "false";
  }
}

bool Palindrome(std::string S) {
  int left = 0;
  int right = S.length() - 1;

  if (S.length() == 0) {
    return true;
  }

  while (left != right) {
    if (S[left] == S[right]) {
      left++;
      right--;
    } else {
      return false;
    }
  }

  return true;
}