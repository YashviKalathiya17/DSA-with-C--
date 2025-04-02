#include <iostream>
using namespace std;

class stack
{
public:
    int *arr;
    int index;
    int size;
    stack(int n)
    {
        this->size = n;
        arr = new int[n];
        index = -1;
    }

    void push(int value)
    {
        if (index < this->size)
        {
            arr[++index] = value;
        }
        else
        {
            cout << "Stack Overflow" << endl;
        }
    }
};

int main()
{
    stack *stk = new stack(3);
    stk->push(10);
    return 0;
}
