#include <iostream>
using namespace std;
int main(){
    //break and continue

    int n;
    cin >> n;

    for(int i=0;i<=n;i++){
        if(i==5){
            //break;
            continue;
        }
        cout << i << endl;
    }
}