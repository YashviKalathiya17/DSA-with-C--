#include <iostream>
using namespace std;

// print array in reverse order


int main() {

    int n;
    cin >> n;

    int arr[n];
    for(int i=0;i<n;i++){
        cout << i << ":";
        cin >> arr[i];

    }
    for(int i=0;i>n;i--){
        cout << arr[i] << " ";
    }

    return 0;
}



