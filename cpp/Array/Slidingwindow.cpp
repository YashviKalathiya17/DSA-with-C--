#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>x
using namespace std;

int findmaxsum(vector<int> arr, int k)
{
    int currsum = 0;
    int maxsum = 0;

    for (int i = 0; i < k; i++)
    {
        currsum += arr[i];
    }
    maxsum = currsum;

    for (int i = k; i < arr.size(); i++)
    {
        currsum += arr[i];
        currsum -= arr[i - k];
        if (currsum > maxsum)
        {
            maxsum = currsum;
        }
    }
    return maxsum;
}
int main()
{
    vector<int> arr = {1, 2, -3, 4, -3, 5, 9, -20, 2, 10};
    int k;
    cin >> k;
    int result = findmaxsum(arr, k);
    cout << result << endl;
    return 0;
}
