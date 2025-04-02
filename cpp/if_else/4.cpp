#include <iostream>
using namespace std;
int main()
{

    // find the smallest numbers in three numbers

    int a, b, c;
    cout << "enter three numbers:" << endl;
    cin >> a >> b >> c;

    if (a < b && b < c)
    {
        cout << "a is smallest numbers:" << endl;
    }
    else if (b < c && c < a)
    {
        cout << "b is smallest numbers:" << endl;
    }
    else if (c < a && c < b)
    {
        cout << "c is smallest numbers:" << endl;
    }
    else
    {
        cout << "all numbers are equal" << endl;
    }
    return 0;
}
