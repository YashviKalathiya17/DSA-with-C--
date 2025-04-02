//generate substring

#include<iostream>
using namespace std;

void gensubstring (string str){
    for(int i=0;i<str.length();i++){
        string substr="";
        for(int j=i;j<str.length();j++){
            substr+=str[j];
            cout << substr << endl;
        }
    }
}

int main(){
    string str ="xyz";
    gensubstring(str);
    return 0;
}

// x
// xy 
// xyz
// y  
// yz 
// z  