//generate substring

#include<iostream>
using namespace std;

void gensubstring (string str){
    int count=0;
    for(int i=0;i<str.length();i++){
        string substr="";
        for(int j=i;j<str.length();j++){
            substr += str[j];
            cout << substr << endl;
            if(substr.length()>1 &&substr[0]==substr[substr.length()-1]){
                count++;
            }
        }
    }
            cout << "count : " << count << endl;
    }


int main(){
    string str ="nayan";
    gensubstring(str);
    return 0;
}

//output:

// n
// na
// nay
// naya
// nayan
// a
// ay
// aya
// ayan
// y
// ya
// yan
// a
// an
// n
// count : 2