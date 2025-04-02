#include <iostream>
using namespace std;

int main()
{

    // check person is a eligible for vote or not.
    int age;
    cout << "Enter your age: ";
    cin >> age;

    if (age <= 17)
    {
        cout << "not Eligible for vote:" << endl;
    }
    else
    {
        cout << "Eligible for vote:" << endl;
    }
}