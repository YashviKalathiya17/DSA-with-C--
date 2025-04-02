#include <iostream>
using namespace std;
int main()
{

    // take an input of two numbers and print odd numbers between them.

    int start, end;
    int sum = 0;
    cout << "enter two numbers:" << endl;
    cin >> start >> end;

    for (int i = start; i <= end; i++)
    {
        if (i % 2 != 0)
        {
            sum +=i;
        }
        cout << i << endl;
    }
        cout << sum << endl; 
      
    

    return 0;
}