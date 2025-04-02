#include <iostream>
using namespace std;
int main()

{
    //count odd number
    int n;
    cin >> n;
    int count =0;
    for (int i = 1; i <= n; i++)
    {
        if(i%2==0){
            cout << i << endl;
        }
       count++;
    }
    cout << n << endl;
    return 0;
}