#include <iostream>
#include <vector>
#include <string>
#include <climits>
using namespace std;

int main()
{

    string str = "fullstack";
    int count = 0;

    for (char c : str)
    {
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
        {
            count++;
        }
    }
    cout << count << endl;

    // output:2
    return 0;
}