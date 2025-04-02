#include <iostream>
using namespace std;

int main()
{
    float marks;

    cout << "Enter marks ";
    cin >> marks;

    char grade = (marks >= 90) ? 'A' : (marks >= 80) ? 'B': (marks >= 70)   ? 'C': (marks >= 60)   ? 'D': (marks >= 50)   ? 'E': 'F';
    cout << "Marks: " << marks << " is: " << grade << endl;

    switch (grade)
    {
    case 'A':
        cout << "Excellent work." << endl;
        break;
    case 'B':
        cout << "Well done" << endl;
        break;
    case 'C':
        cout << "Good job." << endl;
        break;
    case 'D':
        cout << "You Passed,but you could do better." << endl;
        break;
    case 'E':
        cout << "Keep it up" << endl;
        break;
    case 'F':
        cout << "Sorry,you failed." << endl;
        break;
    default:
        cout << "Invalid grade." << endl;
        break;
    }

    return 0;
}
