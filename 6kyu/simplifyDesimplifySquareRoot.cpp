// https://www.codewars.com/kata/5850e85c6e997bddd300005d/

#include <string>
bool checkWholeNum(double num) {
    if (num == (int)num) {
        return true;
    }
    return false;
}
std::string simplify(int n)
{
    //your code here   
      int m = 0;
  m = sqrt(n);
    std::string s = "";
    if (m*m == n) {
        s += std::to_string(m);
    }
    else {
    for (int i = m; i >= 1; i--) {
        double sqrtNum = 0.00;
        sqrtNum = (double) n / (i * i);
        if (checkWholeNum(sqrtNum) == true) {
            if (i == 1) {
                s += "sqrt " + std::to_string((int)sqrtNum);
            }
            else {
            s += std::to_string(i) + " sqrt " + std::to_string((int)sqrtNum);
            n = sqrtNum;
            }
            break;
        }
    }
    if (s == "") {
        s = "sqrt " + std::to_string(n);
    }
    }
  return s;
  
}

int desimplify(std::string s)
{
    //your code here
  std::string::size_type sz = s.find(" ");
  if (std::string::npos == sz) {
    int num = std::stoi(s);
    return num*num;
  }
  else if (sz == 4) {
    int num = std::stoi(s.substr(sz+1));
    return num;
  }
  else {
    int num1 = std::stoi(s.substr(0,sz));
    s = s.substr(sz+1);
    sz = s.find(" ");
    int num2 = std::stoi(s.substr(sz+1));
    return num1*num1*num2;
  }
}