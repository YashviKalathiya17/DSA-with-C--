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
        cout << "Excellent work.";
        break;
    case 'B':
        cout << "Well done" ;
        break;
    case 'C':
        cout << "Good job." ;
        break;
    case 'D':
        cout << "You Passed,but you could do better." ;
        break;
    case 'E':
        cout << "Keep it up" ;
        break;
    case 'F':
        cout << "Sorry,you failed.";
        break;
    default:
        cout << "Invalid grade.";
        break;
    }


    if(grade=='A' || grade=='B' || grade=='C' || grade=='D' ){
        cout << "Congratulations! you're eligible for next level." << endl;
    }
    else{
        cout << "please try again next time." << endl;
    }
    return 0;
}
