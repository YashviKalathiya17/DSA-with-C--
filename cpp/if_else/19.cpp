#include <iostream>
using namespace std;
int main()
{

    // determine whether a number is positive and even or positive or odd.
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (num > 0)
    {
        if (num % 2 == 0)
        {
            cout << num << " is a positive even number.";
        }
        else
        {
            cout << num << " is a positive odd number.";
        }
    }
    else
    {
        cout << num << " is not a positive number.";
    }
    return 0;
}