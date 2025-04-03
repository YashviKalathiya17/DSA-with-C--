#include <iostream>
#include <vector>
using namespace std;

// Function to find two numbers that sum up to the target
vector<int> twoSum(vector<int>& nums, int target) {
    int n = nums.size();
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (nums[i] + nums[j] == target) {
                return {i, j}; // Return indices if pair is found
            }
        }
    }
    return {}; // Return empty if no pair found
}

int main() {
    int n, target;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    
    vector<int> nums(n);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    
    cout << "Enter the target sum: ";
    cin >> target;
    
    vector<int> result = twoSum(nums, target);
    
    if (!result.empty()) {
        cout << "Indices of the two numbers: [" << result[0] << ", " << result[1] << "]" << endl;
    } else {
        cout << "No pair found." << endl;
    }
    
    return 0;
}
