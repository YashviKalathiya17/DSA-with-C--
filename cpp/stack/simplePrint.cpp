// simple stack printing:----

#include <iostream>
#include <stack>
using namespace std;

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
    print(s);
    return 0;
}