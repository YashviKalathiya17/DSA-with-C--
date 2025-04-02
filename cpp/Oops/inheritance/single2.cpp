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

// two class combination
class Addsub : public A
{
public:
    int a;
    int b;
    Addsub(int a, int b) : A(a, b)
    {
        this->a = a;
        this->b = b;
    }
};

int main()
{
    Addsub obj(5, 6);
    cout << "Sum is: " << obj.sum() << endl;
    return 0;
}