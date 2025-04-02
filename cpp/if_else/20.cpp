#include <iostream>
using namespace std;
int main()
{

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