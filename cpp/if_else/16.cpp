#include <iostream>
using namespace std;
int main()
{

    // calculate electricity bills based on given slab rates.

    float a, amount, charge, total;
    cout << "enter the units consumed:" << endl;
    cin >> a;

    if (a < 50)
    {
        amount = a * 2.60;
        charge = 25;
    }
    else if (a <= 100)
    {
        amount = 130 + ((a - 50) * 3.25);
        charge = 35;
    }
    else if (a <= 200)
    {
        amount = 130 + 162.50 + ((a - 100) * 5.26);
        charge = 45;
    }
    else
    {
        amount = 130 + 162.50 + 562 + ((a - 200) * 7.75);
        charge = 55;
    }

    total = amount + charge;
    return 0;
}