#include <iostream>
using namespace std;

// #define n 100

class Stack
{
    int *arr;
    int top;

public:
    Stack()
    {
        arr = new int[n];
        top = -1;
    }

    void push(int x)
    {
        if (top == n - 1)
        {
            cout << "Stack overflow" << endl;
            return;
        }
        top++;
        arr[top] = x;
    }

    void pop()
    {
        if (top == -1)
        {
            cout << "No element to pop" << endl;
            return;
        }
        top--;
    }

    int Top()
    {
        if (top == -1)
        {
            cout << "No element in stack" << endl;
            return -1;
        }
        return arr[top];
    }

    bool empty()
    {
        return top == -1;
    }
    
    void Printlist()
    {
        if (top == -1)
        {
            cout << "Stack is empty" << endl;
            return;
        }
        cout << "Stack elements: ";
        for (int i = 0; i <= top; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main()
{
    Stack *sk = new Stack();
    sk->push(1);
    sk->push(2);
    sk->push(3);
    sk->push(4);
    sk->pop();

    sk->Printlist();

    return 0;
}







#include <iostream>
using namespace std;

class Stack
{
    int *a;
    int b;
    int c;

public:
    Stack(int d)
    {
        c = d;
        a = new int[c];
        b = -1;
    }

    void push(int e)
    {
        if (b == c - 1)
        {
            cout << "Stack overflow" << endl;
            return;
        }
        b++;
        a[b] = e;
    }

    void pop()
    {
        if (b == -1)
        {
            cout << "No element to pop" << endl;
            return;
        }
        b--;
    }

    int Top()
    {
        if (b == -1)
        {
            cout << "No element in stack" << endl;
            return -1;
        }
        return a[b];
    }

    bool empty()
    {
        return b == -1;
    }
    
    void Printlist()
    {
        if (b == -1)
        {
            cout << "Stack is empty" << endl;
            return;
        }
        cout << "Stack elements: ";
        for (int i = 0; i <= b; i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
    }
    
    ~Stack()
    {
        delete[] a;
    }
};

int main()
{
    int d;
    cout << "Enter stack size: ";
    cin >> d;
    
    Stack *s = new Stack(d);
    s->push(1);
    s->push(2);
    s->push(3);
    s->push(4);
    s->pop();

    s->Printlist();
    
    delete s;

    return 0;
}
// these is true