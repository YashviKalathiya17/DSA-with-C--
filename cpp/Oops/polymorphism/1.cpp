#include <iostream>
using namespace std;

class calc
{
public:
    calc()
    {
    }

    int sum(int a, int b)
    {
        return a + b;
    }

    double sum(double a, double b)
    {
        return a + b;
    }
};

int main()
{
    calc *cal = new calc();
    cout << cal->sum(5.5, 10.4) << endl;
    return 0;
}
