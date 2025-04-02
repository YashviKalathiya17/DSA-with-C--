
#include <iostream>
using namespace std;

void twoSum(int arr[], int n, int target)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] + arr[j] == target)
            {
                cout << i << " " << j << endl;
                return;
            }
        }
    }
    cout << -1 << -1;
}

int main()
{
    int n;
    int arr[4] = {2, 7, 11, 15};
    int target;
    cin >> target;

    twoSum(arr, n, target);

    return 0;
}
