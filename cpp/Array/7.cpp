#include <iostream>
using namespace std;

int main() {  
    int arr[] = {1, 2, 3, 4, 5};
    int sum = 0;
    
    int n = sizeof(arr) / sizeof(arr[0]); 
    for (int i = 0; i < n; i++) {
        sum += arr[i]; 
    }
    cout << "Sum : " << sum << endl;

    return 0;
}
