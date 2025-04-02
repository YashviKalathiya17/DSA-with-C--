#include <iostream>
using namespace std;

int main()
{

    // find the absolute value of a number

    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (num < 0)
    {
        num = (-1) * num;
        cout << "absolute value:" << num << endl;
    }
    else if (num > 0)
    {
        cout << "absolute value:" << num << endl;
    }
}