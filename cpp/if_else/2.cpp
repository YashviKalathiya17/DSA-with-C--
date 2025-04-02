#include <iostream>
using namespace std;
int main()
{

    // find the largest of two numbers entered by user.

    int a, b;
    cout << "enter two numbers:" << endl;
    cin >> a >> b;

    if (a > b)
    {
        cout << "largest number is a:" << endl;
    }
    else if (a < b)
    {
        cout << "largest number is b:" << endl;
    }
    else
    {
        cout << "numbers are equal:" << endl;
    }

    return 0;
}