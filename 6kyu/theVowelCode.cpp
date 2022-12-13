// https://www.codewars.com/kata/53697be005f803751e0015aa

#include <string>

std::string encode(const std::string &str) {
  std::string result = "";
  for (unsigned int i = 0; i < str.length(); i++) {
    if (str[i] == 'a') {
      result += '1';
    }
    else if (str[i] == 'e') {
      result += '2';
    }
    else if (str[i] == 'i') {
      result += '3';
    }
    else if (str[i] == 'o') {
      result += '4';
    }
    else if (str[i] == 'u') {
      result += '5';
    }
    else {
      result += str[i];
    }
  }
  return result;
}

std::string decode(const std::string &str) {
  std::string result = "";
    for (unsigned int i = 0; i < str.length(); i++) {
    if (str[i] == '1') {
      result += 'a';
    }
    else if (str[i] == '2') {
      result += 'e';
    }
    else if (str[i] == '3') {
      result += 'i';
    }
    else if (str[i] == '4') {
      result += 'o';
    }
    else if (str[i] == '5') {
      result += 'u';
    }
    else {
      result += str[i];
    }
  }
  return result;
}