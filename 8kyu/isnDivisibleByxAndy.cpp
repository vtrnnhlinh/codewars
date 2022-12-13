// https://www.codewars.com/kata/5545f109004975ea66000086

bool isDivisible(int n, int x, int y) {
  // your code here
  bool check = true;
  if (n%x != 0 || n%y != 0) {
    check = false;
  }
  return check;
}