#include<iostream>
#include <stack>
using namespace std;

class Parent{
    public:
    bool isValid(string s){
        stack<char>stk;

        if(s.length()%2!=0){
            return false;
        }
        for(int i=0;i<s.length();i++){
            char c = s[i];

            if(c=='(' || c=='[' || c=='{'){
                stk.push(c);
            }
            else if(!stk.empty()){
                char top = stk.top();
                if(c==')' && top=='(' || c==']' && top=='[' || c=='}' && top=='{'){
                    stk.pop();
                }
                else{
                    return false;
                }
            }
                else{
                    return false;
                }
            }
            if(stk.empty()){
                return true;
            }
            else{
                return false;
            }
        }

    };

int main(){
    Parent p;
    string s;

    cout<<"Enter the string: ";
    cin>>s;
    if(p.isValid(s)){
        cout << "valid parameter" << endl;
    }
    else{
        cout << "invalid parameter" << endl;
    }
    return 0;
}