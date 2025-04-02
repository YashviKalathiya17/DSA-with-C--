#include <iostream>
using namespace std;

int main()
{

    // string car_a = "bmw";
    // string car_b = "audi";
    // string car_c = "benz";

    // char royce;
    // cin >> royce;

    // if (royce == 'a')
    // {
    //     cout << "a is a bmw" << endl;
    // }
    // else if (royce == 'b')
    // {
    //     cout << "b is a  audi" << endl;
    // }
    // else if (royce == 'c')
    // {
    //     cout << "c is a benz" << endl;
    // }
    // else
    // {
    //     cout << "invalid input" << endl;
    // }
   

int a,b,c;
cout << "enter three numbers:" << endl;
cin >> a >> b >> c;

if(a>b &&b>c){
    cout << "a is maximum";
}
else if(b>c && c>a){
    cout << "b is maximum";
}
else if(c>a && c>b){
    cout << "c is maximum";
}
else {
    cout << "all numbers are equal";
}
 return 0;
}