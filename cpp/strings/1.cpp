#include <iostream>
#include <vector>
#include <string>
#include <climits>
using namespace std;

int main()
{

    // print whole word
    // string str="fullstack";
    // cout <<str << endl;

    // print length of word
    // string str="fullstack";
    // cout << str.length() << endl;

    // print all characters in word using loop

    // int n=str.length();
    // for(int i=0; i<n; i++){
    //     cout << str[i] << " ";
    // }
    // output:f u l l s t a c k

    // other method
    // for(char c:str){
    //     cout << c << " ";
    // }
    // output:f u l l s t a c k

    string str="full";
    string str2="full";

    if(str==str2){
        cout << "Strings are equal" << endl;
    }
    else{
        cout << "Strings are not equal" << endl;
    }

    // output:
    // Strings are equal

       return 0;
}