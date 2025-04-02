#include <iostream>
using namespace std;
//print diagonal array
int main() { 
   int arr[4][4]={
    {1,2,3,4},
    {5,6,7,8},
    {9,10,11,12},
    {13,14,15,16}
   };

   for(int i=0;i<4;i++){
    cout << arr[i][i] << " ";
   }
    cout << endl;
   for(int i=0;i<4;i++){
    cout << arr[i][3-i] << " ";
   }
   cout << endl;
    return 0;
}

|    |
| |  |
|  | |
|    |