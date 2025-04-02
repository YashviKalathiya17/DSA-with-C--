#include <iostream>
using namespace std;

int main()
{

    // take a input of two numbers and find the number which is not divisable by 3 and 5

    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    for (int i = a; i <= b; i++)
    {
        if (i % 3 == 0 && i % 5 == 0)
        {
            cout << i << " ";
        }
    }

    return 0;
}