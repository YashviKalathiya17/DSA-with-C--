#include <iostream>
using namespace std;

class A
{
public:
    int a;
    int b;
    A(int a, int b)
    {
        this->a = a;
        this->b = b;
    }
    int sum()
    {
        return this->a + this->b;
    }
};
int main()
{
    A add(250, 678);
    cout << add.sum() << endl;
    return 0;
}