// https://www.codewars.com/kata/5a9c35e9ba1bb5c54a0001ac

int Add (int p, int q)
{
  // Your Code Is Here ... Enjoy !!
    int result = p ^ q; 
    int carry = (p & q) << 1; 
    if (carry != 0) {
        return Add(result, carry);
    }
    return result;
}