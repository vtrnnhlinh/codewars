// https://www.codewars.com/kata/55911ef14065454c75000062

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;
typedef string bigNum;


void InitBigNum(bigNum& num1, bigNum& num2) {
    while (num1.length() < num2.length()) {
        num1 = "0" + num1;
    }
    while (num1.length() > num2.length()) {
        num2 = "0" + num2;
    }
}

void SortBigNum(bigNum& num1, bigNum& num2) {
    if (num1 < num2) {
        swap(num1, num2);
    } 
}

bigNum AddBigNum(bigNum num1, bigNum num2) {
    InitBigNum(num1, num2);
    SortBigNum(num1, num2);
    bigNum result = num1;
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
    while ((result[0] == '0') && (result.length() > 1)) {
        result.erase(0, 1);
    }
    return result;
}

bigNum SubtractBigNum(bigNum num1, bigNum num2) {
    InitBigNum(num1, num2);
    SortBigNum(num1, num2);
    bigNum result = num1;
    int l = num1.length();
    int count = 1;
    int temp = 0;
    int carry = 0;
    while (count <= l) {
        temp = ((num1[l-count] - '0') - (num2[l-count] - '0')) - carry;
        carry = 0;
        if (temp < 0) {
            carry = 1;
            temp = temp + 10;
        }
        result[l-count] = temp + '0';

        count++;
    }
    while ((result[0] == '0') && (result.length() > 1)) {
        result.erase(0, 1);
    }
    return result;
}

bigNum MultipleBigNum1(bigNum a, int b) {
  
    bigNum result = a;
    int temp = 0;
    int carry = 0;
    int l = a.length();
    for (int i = l - 1; i >= 0; i--) {
        temp = b*(a[i]-'0') + carry;
        carry = 0;
        if (temp > 9) {
            carry = temp/10;
        }
        result[i] = (temp%10) + '0';
        temp = temp/10;
    }
    if (carry > 0) {
        result = string(1, carry + '0') + result;
    }
    while ((result[0] == '0') && (result.length() > 1)) {
        result.erase(0, 1);
    }
    return result;
}

bigNum multiply(bigNum num1, bigNum num2) {
    InitBigNum(num1, num2);
    SortBigNum(num1, num2);
    bigNum result = "";
    bigNum temp;
    int l = num1.length();
    for (int i = l-1; i >= 0; i--) {
        temp = MultipleBigNum1(num1, (num2[i] - '0'));
        for (int j = l-i-1; j > 0; j--) {
            temp = temp + "0";
        }
        InitBigNum(result, temp);
        SortBigNum(result, temp);
        result = AddBigNum(result, temp);
    }
    while ((result[0] == '0') && (result.length() > 1)) {
        result.erase(0, 1);
    }
    return result;
}