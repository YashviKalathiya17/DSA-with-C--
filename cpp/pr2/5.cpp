// #include <iostream>
// using namespace std;

// int main()
// {
//     //  take a input of two numbers and find the number which is not divisable by 2 and print them

//     int num1, num2;
//     int sum = 0;
//     cout << "Enter two numbers: ";
//     cin >> num1 >> num2;

//     for (int i = num1; i < num2; i++)
//     {
//         if (i % 2 == 1)
//         {
//             cout << sum++;
//         }
//     }
//     cout << sum << endl;
//     return 0;
// }
#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    int count = 0;  // Variable to count numbers that are not divisible by 2 (odd numbers)

    // Input two numbers
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    // Loop through the two numbers
    for (int i = 0; i < 2; ++i) {
        int num = (i == 0) ? num1 : num2;  // Select num1 for i=0 and num2 for i=1
        
        // Check if the number is not divisible by 2 (odd number)
        if (num % 2 != 0) {
            count++;
        }
    }

    // Output the count of numbers that are not divisible by 2
    cout << "The count of numbers that are not divisible by 2: " << count << endl;

    return 0;
}
