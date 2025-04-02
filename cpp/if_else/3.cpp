#include <iostream>
using namespace std;
int main()
{

    // check the number is even or odd

    int a;
    cout << "enter a number:" << endl;
    cin >> a;

    if (a % 2 == 0)
    {
        cout << "number is even:" << endl;
    }
    else
    {
        cout << "number is odd:" << endl;
    }
}
