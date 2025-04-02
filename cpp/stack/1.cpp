#include <iostream>
#include <stack>
#include <string>
using namespace std;

// Basics..........

// Push operation
int main()
{

    // for int data type
    // stack<int> stk;
    // stk.push(20);
    // stk.push(30);
    // stk.push(40);
    // stk.push(50);
    // stk.push(60);
    // stk.pop();

    // cout << stk.top() << endl;

    // for string data type

    // stack<char>stk2;
    // string str2="test";
    // for (int i = 0; i < str2.size(); i++)
    // {
    //     stk2.push(str2[i]);
    // }
    // string str3="";
    // while (!(stk2.empty())){
    //     str3+=stk2.top();
    //     stk2.pop();
    // }
    // cout << str3 << endl;

    // remove one element before #

    string<char> stk;
    string str = "#ts#mt#node##j";
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] == '#')
        {
            if (!str.empty())
            {
                stk.pop();
            }
        }
        else
        {
            stk.push(str[i]);
        }

        string str3 = "";
        while (!(stk2.empty()))
        {
            str3 += stk2.top();
            stk2.pop();
        }

        str2 = stk2.top() + str2;
        return 0;
    }
}