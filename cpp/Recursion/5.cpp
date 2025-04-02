#include<iostream>
#include<vector>
using namespace std;

int stairs(int n){
    if(n==1){
        return 1;
    }
    if(n==2){
        return 2;
    }
    return stairs(n-1)+(n-2);
}
int main(){
    vector<int>arr={1,2,3,4,5};
    cout << stairs(10);
    return 0;
}