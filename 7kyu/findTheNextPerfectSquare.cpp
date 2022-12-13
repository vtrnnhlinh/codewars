// https://www.codewars.com/kata/56269eb78ad2e4ced1000013

#include <cmath>
using namespace std;
long int findNextSquare(long int sq) {
  // Return the next square if sq if a perfect square, -1 otherwise
  long int n = sqrt(sq);
  if (n*n == sq) {
    return (n+1)*(n+1);
  }
  return -1;
}