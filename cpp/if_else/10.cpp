#include <iostream>
using namespace std;
int main()
{

    int a;
    cout << "enter the number:" << endl;
    cin >> a;

    if (a % 5 == 0 && a % 3 == 0)
    {
        cout << "number is divisible by 5 and 3";
    }
    else if (a % 5 == 0)
    {
        cout << "number is divisible by 5";
    }
    else if (a % 3 == 0)
    {
        cout << "number is divisible by 3";
    }
    else
    {
        cout << "number is not divisible by 5 or 3";
    }
    return 0;
}