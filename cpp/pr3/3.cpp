#include <iostream>
using namespace std;
int main()
{

    int n;
    cout << "Enter a number: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        int count = 0;
        for (int j = 1; j <= n; j++)
        {
            if (i % j == 0)
            {
                count++;
            }
        }
            cout << i << " " << count << endl;
           
        }
    
    return 0;
}