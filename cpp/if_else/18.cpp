#include <iostream>
using namespace std;

int main()
{

    // display the day of the week based on the input number(1-7).

    int a;
    cout << "Enter a number between 1 and 7: ";
    cin >> a;

    if (a == 1)
    {
        cout << "Day: Monday" << endl;
    }
    else if (a == 2)
    {
        cout << "Day: Tuesday" << endl;
    }
    else if (a == 3)
    {
        cout << "Day: Wednesday" << endl;
    }
    else if (a == 4)
    {
        cout << "Day: Thursday" << endl;
    }
    else if (a == 5)
    {
        cout << "Day: Friday" << endl;
    }
    else if (a == 6)
    {
        cout << "Day: Saturday" << endl;
    }
    else if (a == 7)
    {
        cout << "Day: Sunday" << endl;
    }
    else
    {
        cout << " enter a number between 1 and 7." << endl;
    }

    return 0;
}