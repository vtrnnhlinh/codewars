// https://www.codewars.com/kata/52fba66badcd10859f00097e
#include <string>
void vowelRemove(std::string &temp, char vowel)
{
    std::string::size_type n;
    n = temp.find(vowel);
    while (std::string::npos != n)
    {
        temp.erase(n, 1);
        n = temp.find(vowel);
    }
}
std::string disemvowel(const std::string &str)
{
    // return
    std::string temp = str;
    vowelRemove(temp, 'a');
    vowelRemove(temp, 'e');
    vowelRemove(temp, 'o');
    vowelRemove(temp, 'i');
    vowelRemove(temp, 'u');
    vowelRemove(temp, 'A');
    vowelRemove(temp, 'E');
    vowelRemove(temp, 'O');
    vowelRemove(temp, 'I');
    vowelRemove(temp, 'U');
    return temp;
}