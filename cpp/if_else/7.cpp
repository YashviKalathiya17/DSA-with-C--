#include <iostream>
using namespace std;
int main()
{

    // check whether a year is a leap year or not

    int year;
    cout << "Enter a year: ";
    cin >> year;

    if (year % 400 == 0)
    {
        cout << "leap year:" << endl;
    }
    else if (year % 100 == 0)
    {
        cout << "not leap year:" << endl;
    }
    else if (year % 4 == 0)
    {
        cout << "leap year:" << endl;
    }
    else
    {
        cout << "not leap year:" << endl;
    }
    return 0;
}