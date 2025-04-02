#include <iostream>
using namespace std;
int main()
{

    // check if a number is a positive,negative or zero.

    int a;
    cout << "Enter a number: " << endl;
    cin >> a;

    if (a > 0)
    {
        cout << "number is a positive number." << endl;
    }
    else if(a < 0)
    {
        cout << "number is a negative number." << endl;
    }
    else
    {
        cout << "number is zero" << endl;
    }
    
    return 0;
}


