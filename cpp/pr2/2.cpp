#include <iostream>
using namespace std;
int main()
{

    // take an input of one number and print the table of  them

    int x;
    cout << "enter a number:" << endl;
    cin >> x;

    for (int i = 1; i <= 10; i++)
    {
        cout << x * i << endl;
    }
    return 0;
}