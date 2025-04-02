#include<iostream>
using namespace std;
int main(){
    //factorial

    int n;
    cin >> n;
    int fact=1;


    for( int i=1;i<=n;i++){
        fact*=i;
    }
    cout << fact << endl;

    return 0;
}