#include <iostream>
using namespace std;
int main()
{

    // find the maximum of three numbers:
    int a, b, c;
    cout << "enter three numbers:" << endl;
    cin >> a >> b >> c;

    if (a > b && a > c)
    {
        cout << "a is maximum" << endl;
    }
    else if (b > c && b > a)
    {
        cout << "b is maximum" << endl;
    }
    else if (c > a && c > b)
    {
        cout << "c is maximum" << endl;
    }
    else
    {
        cout << "all numbers are equal" << endl;
    }
    return 0;
}
