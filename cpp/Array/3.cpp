// #include <iostream>
// using namespace std;

// void input(int arr[],int n)

// {
//     for (int i = 0; i < n ; i++)
//     {
//         cout << arr[i];
//     }
//     cout << endl;
// }

// int main()
// {
//     int n;
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n - 1; i++)
//     {
//         cout << "enter index of array " << i << endl;
//         cin >> arr[i];
//     }
//     input(arr, n);
// return 0;
// }

#include <iostream>
using namespace std;

void array(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }
    cout <<endl;
}

int main()
{
    int n;
    cin >> n;
    
    int arr[n];
    
    for(int i = 0; i < n; i++){
    cout << "enter index of array[" << i << "]" << endl;
    cin >> arr[i];

    }
    array(arr, n);

    return 0;
}