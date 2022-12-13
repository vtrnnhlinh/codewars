// https://www.codewars.com/kata/5324945e2ece5e1f32000370

#include <string>
using namespace std; 

string sum_strings(const string& a, const string& b) {
 string num1 = a;
  string num2 = b;
      while (num1.length() < num2.length()) {
        num1 = "0" + num1;
    }
    while (num1.length() > num2.length()) {
        num2 = "0" + num2;
    }
    string result = num1;
    int l = num1.length();
    int count = 1;
    int temp = 0;
    while (count <= l) {
        temp = ((num1[l-count] - '0') + (num2[l-count] - '0')) + temp;
        result[l - count] = (temp % 10) + '0';
        temp = temp/10;
        count++;
    }
    if (temp != 0) {
        result = "1" + result;
    }
    return result;
}