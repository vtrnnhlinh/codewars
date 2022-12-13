// https://www.codewars.com/kata/5262119038c0985a5b00029f

#include <cmath>
bool isPrime(int num) {
  // your code here..
  if (num < 2) {
    return false;
  }
  else if (num == 2 && num == 3) {
    return true;
  }
  else {
    int m = (int)sqrt(num);
    for (int i = 2; i <= m; i++) {
      if (num%i == 0) {
        return false;
      }
    }
    return true;
  }
}