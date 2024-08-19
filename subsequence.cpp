#include <iostream>
#include <vector>
bool isSubsequence(const std::string &, const std::string &);
int main() {
  std::string s = "aec";
  std::string t = "abcde";
  bool isSub = isSubsequence(s, t);
  if (isSub == true) {
    std::cout << "true" << std::endl;
  } else {
    std::cout << "false" << std::endl;
  }
}
bool isSubsequence(const std::string &s, const std::string &t) {

  int i = 0;
  int j = 0;
  while (i < s.length() && j < t.length()) {
    if (s[i] == t[j]) {
      i++;
      j++;

    } else if (s[i] != t[j]) {
      j++;
    }
  }

  if (i == s.length()) {
    return true;
  } else {
    return false;
  }

  return false;
}
