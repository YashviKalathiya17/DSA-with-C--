#include <iostream>
using namespace std;
int main()
{

    // for loop basics examples:

    int start, end;
    cin >> start >> end;
    int sum = 0;

    for (int i = start; i <= end; i++)
    {
        if(i%2==0){
            cout <<i << endl;
        }
     
    }
    // cout << sum << endl;

    return 0;
}