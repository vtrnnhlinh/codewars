#include <string>

using namespace std;

int getCount(const string& inputStr){
  int num_vowels = 0;
  //your code here
  int strLength = inputStr.length();
  for (int i = 0; i < strLength; i++) {
    if (inputStr[i] == 'a' || inputStr[i] == 'e' || inputStr[i] == 'i' || inputStr[i] == 'o' || inputStr[i] =='u') {
      num_vowels++;
    }
  }
  return num_vowels;
}