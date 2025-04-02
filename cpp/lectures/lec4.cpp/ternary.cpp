#include <iostream>
using namespace std;

int main()
{
    // ternary opertor example

    // int a, b;
    // cout << "Enter a number: ";
    // cin >> a >> b;

    // int result = (a > 0 || a <= 9) ? a : b;
    // cout << result << endl;

    // SWITCH CASE

    int a;
    cout << "Enter a number between 1 and 7: ";
    cin >> a;

    switch (a)
    {
    case 1:
        cout << "monday:" << endl;
        break;
    case 2:
        cout << "tuesday:" << endl;
        break;
    case 3:
        cout << "wednesday:" << endl;
        break;
    case 4:
        cout << "thursday:" << endl;
        break;
    case 5:
        cout << "friday:" << endl;
        break;
    case 6:
        cout << "saturday:" << endl;
        break;
    case 7:
        cout << "sunday:" << endl;
        break;
    default:
        cout << "invalid input:" << endl;
    }

    return 0;
}
