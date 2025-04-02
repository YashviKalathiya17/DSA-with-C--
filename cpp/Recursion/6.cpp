#include <iostream>
#include<vector>
using namespace std;

int linearSearch(vector<int> arr, int t)
{
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == t)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8};
    int t = 6;
    int result = linearSearch(arr, t);
    cout << result << endl;
    return 0;
}
