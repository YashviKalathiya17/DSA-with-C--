#include <iostream>
#include <vector>
#include <string>
#include <climits>
using namespace std;

bool ispalindrome(string str)
{
    string str2;
    for (int i = str.length() - 1; i >= 0; i--)
    {
        str2 += str[i];
    }
    cout << str2 << endl;
    return true;
}

int main()
{
    ispalindrome(str);
   return 0;
}
