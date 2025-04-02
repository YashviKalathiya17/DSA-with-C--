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
};

int main()
{
    calc *cal = new calc();
    cout << cal->sum(5, 10) << endl;
    return 0;
}