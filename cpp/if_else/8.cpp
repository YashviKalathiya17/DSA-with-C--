#include <iostream>
using namespace std;

int main()
{

    // check if a character is an uppercase or lowercase letter.

    char a;
    cout << "Enter a character: ";
    cin >> a;

    if (a >= 'A' && a <= 'Z')
    {
        cout << "Character is an uppercase letter." << endl;
    }
    else if (a >= 'a' && a <= 'z')
    {
        cout << "Character is a lowercase letter." << endl;
    }
    else
    {
        cout << "Character is not an alphabet." << endl;
    }
    return 0;
}