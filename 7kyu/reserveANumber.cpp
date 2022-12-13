// https://www.codewars.com/kata/555bfd6f9f9f52680f0000c5

long long reverseNumber(long long n) {
  //your code here
  long long m = n;
  long long result = 0;
  while (m != 0) {
    result = result*10 + m%10;
    m = m/10;
  }
  return result;
}