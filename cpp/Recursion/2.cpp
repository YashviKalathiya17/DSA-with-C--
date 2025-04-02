#include<iostream>
using namespace std;

int fact(int b){

    if(b==1){
        return 1;
    }
    return b+fact(b-1);
}

int main(){
  cout << fact(5);
}