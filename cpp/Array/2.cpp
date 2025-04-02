#include <iostream>
using namespace std;

// void print(int arr)
int main()
{
    int marks[6] = {11, 22, 33, 44, 55, 66};

    for (int i = 0; i < 6; i++)
    {
        if (marks[i] % 2 == 0)
        // if(marks[i] % 2 ==0)
        {
         cout << marks[i] << endl;
     
        }
    }
    return 0;
}