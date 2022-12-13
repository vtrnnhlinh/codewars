// https://www.codewars.com/kata/558fc85d8fd1938afb000014

#include <vector>
#include <algorithm>

long sumTwoSmallestNumbers(std::vector<int> numbers)
{
  std::sort(numbers.begin(), numbers.end());
  return numbers[0] + numbers[1];
    return 0;
}