#include <iostream>
#include <unordered_map>
using namespace std;

// Function to count character frequencies in a string
void printCharFrequency(const string& str) {
    unordered_map<char, int> freqMap;
    
    // Count occurrences of each character
    for (char ch : str) {
        freqMap[ch]++;
    }
    
    // Print character frequencies
    cout << "Character frequencies: { ";
    for (const auto& pair : freqMap) {
        cout << "'" << pair.first << "': " << pair.second << ", ";
    }
    cout << "}\n";
}

int main() {
    string input = "hello world";
    printCharFrequency(input);
    return 0;
}
