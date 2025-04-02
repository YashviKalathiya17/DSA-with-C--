#include <iostream>
using namespace std;
int main()
{

    // determine the type of triangle is based on its side.

    int a, b, c;
    cout << "Enter the three sides of a triangle: ";
    cin >> a >> b >> c;

    if ((a + b > c) && (b + c > a) && (c + a > b))
    {
        cout << "triangle is valid:" << endl;
    }
    else
    {
        cout << "triangle is not valid:" << endl;
    }
    return 0;
}