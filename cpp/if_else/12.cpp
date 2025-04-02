#include <iostream>
using namespace std;
int main()
{
    // triangle is valid based on the sum of its angels.

    int a, b, c, sum;
    cout << "Enter the three angles of a triangle: ";
    cin >> a >> b >> c;

    sum = a + b + c;

    if (sum == 180 && a != 0 && b != 0 && c != 0)
    {
        cout << "The triangle is valid." << endl;
    }
    else
    {
        cout << "The triangle is not valid." << endl;
    }
    return 0;
}