#include <iostream>
using namespace std;
int main()
{

    // classify a charcater as alphabet,digit or a special character.

    char a;
    cout << "enter a character:" << endl;
    cin >> a;

    if (a > 'A' && a < 'Z' || a > 'a' && a < 'z')
    {
        cout << "character is an alphabet." << endl;
    }
    else if (a > 0 || a <= 9)
    {
        cout << "character is a digit." << endl;
    }
    else
    {
        cout << "character is a special character." << endl;
    }

    return 0;
}