#include <iostream>
#include <vector>
using namespace std;

int BinarySearch(vector<int>&arr, int t);
int start = 0;
int end = arr.size() - 1;

while (start <= end)
{
    int mid = (start + end) / 2;
    if (arr[mid] == t)
    {
        return mid;
    }
    else if (arr[mid > t])
    {
        end = mid - 1;
    }
    else
    {
        start = mid + 1;
    }
    return -1;
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6};
    int t = 6;
    int result = BinarySearch(arr, t);
    cout << result << endl;
    return 0;
}

