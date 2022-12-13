// https://www.codewars.com/kata/5ae326342f8cbc72220000d2

#include <string>

std::string string_expansion(const std::string& s) {
  // Insert clever code
  std::string str = s;
  std::string result = "";
  int check = 0;
  for (unsigned int i = 0; i < str.length(); i++) {
    if (str[i] >= '0' && str[i] <= '9') {
      check += 1;
    }
  }
  if (check == 0) {
    return str;
  }
  else {
    int num = 1;
    for (unsigned int i = 0; i < str.length(); i++) {
      if (str[i] >= '0' && str[i] <= '9') {
        num = str[i] - '0';
      }
      else {
        for (int j = 0; j < num; j++) {
          result += str[i];
        }
      }
    }
    return result;
  }
}