#include <iostream>
using namespace std;
int main()
{

    // check wheather a character is a vowelor consonant.
    char a;
    cout << "Enter a character: ";
    cin >> a;

    if (a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u' ||
        a == 'A' || a == 'E' || a == 'I' || a == 'O' || a == 'U')
    {
        cout << "character is a vowel:" << endl;
    }
    else
    {
        cout << "character is a consonant:" << endl;
    }
    return 0;
}