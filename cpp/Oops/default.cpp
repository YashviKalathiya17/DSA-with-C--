#include<iostream>
using namespace std;
class Student{
    public:
    int grid;
    int number;
    string name;
    string course;
};

int main(){
    Student s1;
    s1.grid = 1;
    s1.number = 101;
    s1.name = "John Doe";
    s1.course = "Computer Science";
    cout << "Grid: " << s1.grid << endl;
    cout << "Number: " << s1.number << endl;
    cout << "Name: " << s1.name << endl;
    cout << "Course: " << s1.course << endl;
    return 0;
}
// another example:-------------------


// #include<iostream>
// using namespace std;

// class Student(){
//     public:
//     string name;
//     string course;
//     int age;
//     int grid;
// };
// int main(){
//     Student s;
//     s.name="student1";
//     s.course="cse";
//     cout << s.course << endl;
//     return 0;
// }