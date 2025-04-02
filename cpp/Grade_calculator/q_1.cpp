#include <iostream>
using namespace std;

int main()
{

    float marks;

    cout << "Enter the marks: ";
    cin >> marks;

    char grade = (marks >= 90) ? 'A' : (marks >= 80) ? 'B': (marks >= 70)   ? 'C': (marks >= 60)   ? 'D': (marks >= 50)   ? 'E': 'F';

    cout << "Grade:" << marks << "," << grade << endl;

    return 0;
}
