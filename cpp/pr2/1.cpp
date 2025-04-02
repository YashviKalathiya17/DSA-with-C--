#include <iostream>
using namespace std;

int main()
{

    // take an input of 1 to n numbers and print them

    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        cout << i << endl;
    }
    return 0;
}