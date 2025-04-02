#include <iostream>
using namespace std;
class A{
    public:
    int a;
    A(int a){
        this->a = a;
    }
    void show(){
        cout << "A: " << a << endl;
    }
}

class B{
    public:
    int b;
    B(int b){
        this->b = b;
    }
    void show2(){
        cout << "B: " << b << endl;
    }
}
