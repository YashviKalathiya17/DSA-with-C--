#include <iostream>
#include <vector>
using namespace std;

// Function to check if a number is prime
bool isPrime(int num) {
    if (num < 2) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}

// Function to find prime numbers in a 2D array
vector<int> findPrimesIn2DArray(vector<vector<int>> &matrix) {
    vector<int> primes;
    for (const auto &row : matrix) {
        for (int num : row) {
            if (isPrime(num)) {
                primes.push_back(num);
            }
        }
    }
    return primes;
}

int main() {
    int rows, cols;
    cout << "Enter number of rows: ";
    cin >> rows;
    cout << "Enter number of columns: ";
    cin >> cols;
    
    vector<vector<int>> matrix(rows, vector<int>(cols));
    cout << "Enter elements of the matrix:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> matrix[i][j];
        }
    }
    
    vector<int> result = findPrimesIn2DArray(matrix);
    
    cout << "Prime numbers in the array: [";
    for (size_t i = 0; i < result.size(); i++) {
        cout << result[i];
        if (i != result.size() - 1) cout << ", ";
    }
    cout << "]" << endl;
    
    return 0;
}
