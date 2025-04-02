#include <iostream>
using namespace std;

int main()
{

    int max, n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "enter the element:" << i << endl;
        cin >> arr[i];
    }

    max = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    cout << "maximum element is:" << max << endl;

    return 0;
}