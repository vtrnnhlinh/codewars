// https://www.codewars.com/kata/57a0e5c372292dd76d000d7e

#include <string>

std::string repeat_str(size_t repeat, const std::string& str) {
  std::string result;
  for (int i = 0; i < repeat; i++) {
    result += str;
  }
  return result;
}