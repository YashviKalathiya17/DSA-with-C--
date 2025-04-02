#include <iostream>
using namespace std;
int main()
{

    // que-1
    //  check the number is positive,negative or zero.

    // int a;
    // cout << "enter the number:" << endl;
    // cin >> a;

    // if (a > 0)
    // {
    //     cout << "number is positive";
    // }
    // else if (a < 0)
    // {
    //     cout << "number is negative";
    // }
    // else
    // {
    //     cout << "number is zero";
    // }

    // -------------------------------------------------------------------------------------------------

    // que-2
    // check the grade

    // int a;
    // cout << "enter the marks:" << endl;
    // cin >> a;

    // if (a >= 90)
    // {
    //     cout << "grade A:" << endl;
    // }
    // else if (a <= 89 && a >= 75)
    // {
    //     cout << "grade B:" << endl;
    // }
    // else if (a <= 74 && a >= 60)
    // {
    //     cout << "grade C:" << endl;
    // }
    // else if (a <= 59 && a >= 50)
    // {
    //     cout << "grade D:" << endl;
    // }
    // else
    // {
    //     cout << "Fail:" << endl;
    // }

    // -------------------------------------------------------------------------------------------------

    // Que-3
    // division the number of 5 and 3

    // int a;
    // cout << "enter the number:" << endl;
    // cin >> a;

    // if (a % 5 == 0 && a % 3 == 0)
    // {
    //     cout << "number is divisible by 5 and 3";
    // }
    // else if (a % 5 == 0)
    // {
    //     cout << "number is divisible by 5";
    // }
    // else if (a % 3 == 0)
    // {
    //     cout << "number is divisible by 3";
    // }
    // else
    // {
    //     cout << "number is not divisible by 5 or 3";
    // }

    // -------------------------------------------------------------------------------------------------

    // Que-4
    // check the number is even or odd

    // int a;
    // cout << "enter the number:" << endl;
    // cin >> a;

    // if (a % 2 == 0)
    // {
    //     cout << "number is even:" << endl;
    // }
    // else
    // {
    //     cout << "number is odd:" << endl;
    // }

    // -------------------------------------------------------------------------------------------------

    // Que-5
    // find the person who is eligible for cinier citizens salary

    int a, b;
    cout << "enter the age:" << endl;
    cout << "enter your income:" << endl;
    cin >> a >> b;

    if (a >= 60 && b <= 50000)
    {
        cout << "You are eligible for cinier citizens salary";
    }
    else
    {
        cout << "not eligible for cinier citizens salary" << endl;
    }

    return 0;
}