// Insert At Bottom (like (2,3,4,5)->(insert element is 6)->(2,3,4,5,6)):------------

#include <iostream>
#include <stack>
using namespace std;

void insertAtBottom(stack<int> &s, int value)
{
    if (s.empty())
    {
        s.push(value);
        return;
    }
    int top = s.top();
    s.pop();
    insertAtBottom(s, value);
    s.push(top);
};
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
    s.push(30);
    s.push(40);
    // print(s);

    insertAtBottom(s, 0);
    print(s);
    return 0;
}