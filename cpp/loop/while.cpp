#include <iostream>
using namespace std;

int main()
{
    int i = 1;
    int sum = 0;
    int count = 0;
    int n;
    cin >> n;

    while (i <= n)
    {
        if (i % 2 == 0)
        {
            sum += i;
            count++;
        }
        i++;
        cout << sum << "  " << count << endl;
    }
    return 0;
}