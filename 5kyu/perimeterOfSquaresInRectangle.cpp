// https://www.codewars.com/kata/559a28007caad2ac4e000083

typedef unsigned long long ull;
class SumFct
{
  public:

  static ull perimeter(int n) {
    long int f[n + 2];
    long int i;
 
    // 0th and 1st number of the
    // series are 0 and 1
    f[0] = 1;
    f[1] = 1;
 
    for(i = 2; i <= n; i++)
    {
         
       //Add the previous 2 numbers
       // in the series and store it
       f[i] = f[i - 1] + f[i - 2];
    }
    long int sum = 0;
    for (long int i = 0; i <= n; i++) {
      sum += f[i];
    }
    return 4*sum;
  }
};