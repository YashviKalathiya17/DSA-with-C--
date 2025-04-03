#include <iostream>
#include <vector>
using namespace std;

// Function to generate Fibonacci series up to a given count
vector<int> generateFibonacci(int count) {
    vector<int> fibonacci;
    if (count <= 0) return fibonacci; // Return empty if count is invalid
    
    fibonacci.push_back(0);
    if (count == 1) return fibonacci;
    
    fibonacci.push_back(1);
    for (int i = 2; i < count; i++) {
        fibonacci.push_back(fibonacci[i - 1] + fibonacci[i - 2]);
    }
    return fibonacci;
}

int main() {
    int count;
    cout << "Enter the number of terms for Fibonacci series: ";
    cin >> count;
    
    vector<int> result = generateFibonacci(count);
    
    cout << "Fibonacci series: [";
    for (size_t i = 0; i < result.size(); i++) {
        cout << result[i];
        if (i != result.size() - 1) cout << ", ";
    }
    cout << "]" << endl;
    
    return 0;
}
