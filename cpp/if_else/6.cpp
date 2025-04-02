#include <iostream>
using namespace std;
int main()
{

    // find the grade base on students marks
    int a;
    cout << "enter marks" << endl;
    cin >> a;

    if (a >= 90)
    {
        cout << "Grade: A" << endl;
    }
    else if (a < 90 && a >= 80)
    {
        cout << "Grade: B" << endl;
    }
    else if (a < 80 && a >= 60)
    {
        cout << "Grade: C" << endl;
    }
    else if (a < 60 && a >= 45)
    {
        cout << "Grade: D" << endl;
    }
    else
    {
        cout << "Fail:" << endl;
    }
}