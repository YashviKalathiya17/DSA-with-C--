#include <iostream>
#include <stack>
using namespace std;

void insertSorted(stack<int> &s, int value)
{
    if (s.empty() || s.top() <= value)
    {
        s.push(value);
        return;
    }
    int top = s.top();
    s.pop();
    insertSorted(s, value);
    s.push(top);
}

void print(stack<int> s)
{
    while (!s.empty())
    {
        cout << s.top() << endl;
        s.pop();
    }
}

int main()
{
    stack<int> s;

    s.push(10);
    s.push(20);
    s.push(40);

    cout << "Original stack:" << endl;
    print(s);

    insertSorted(s, 12);

    cout << "Stack after inserting 30 in sorted order:" << endl;
    print(s);

    return 0;
}
