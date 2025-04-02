#include <iostream>
using namespace std;


    int findvalue(int arr[], int n ,int target)
    {
        for(int i=0;i<n;i++)
        {
            if(target ==arr[i])
            {
                return i;
            }
        }
    return -1;
    }

int main(){
    int arr[5]={10,45,78,12,65};
    int result = findvalue(arr,5,65);
    cout << result << endl;
    return 0;
}