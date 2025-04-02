#include <iostream>
using namespace std;

int main() {

    int n = 4;
    char arr[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            arr[i][j] = ' ';
        }
    }
  
    arr[0][0] = '|';  
    arr[0][n-1] = '|';
    arr[n-1][0] = '|';
    arr[1][0] = '|'; 
    arr[1][2] = '|';  
    arr[2][1] = '|';  
    arr[2][3] = '|'; 
    arr[3][0] = '|';  
    arr[3][n-1] = '|'; 

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << arr[i][j] << " ";  
        }
        cout << endl; 
    }
    return 0;
}
