#include<iostream>
using namespace std;
class Student{
    public:
    int grid;
    int number;
    string name;
    string course;
};

//parameterized constructor
Student(int grid, int number, string name, string course){
    this->grid = grid;
    this->number = number;
    this->name = name;
    this->course = course;
}`

int main(){
   Student s(1234,1234567890,"student1","full-stack");
   cout<<"Grid: "<<s.grid<<endl;
   cout<<"Number: "<<s.number<<endl;
   cout<<"Name: "<<s.name<<endl;
   cout<<"Course: "<<s.course<<endl;
    return 0;
}

//incomplete code:---------------