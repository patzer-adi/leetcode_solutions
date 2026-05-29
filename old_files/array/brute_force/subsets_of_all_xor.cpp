#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    // Recursive helper to calculate total XOR sum of all subsets
    void calculateXORSum(vector<int>& nums, int index, int currentXor, int& totalXorSum)
    {
        // Base case: reached the end of the array
        if (index == nums.size()) {
            totalXorSum += currentXor; // add current subset's XOR to total
            return;
        }

        // Recursive case 1: Exclude the current element
        calculateXORSum(nums, index + 1, currentXor, totalXorSum);

        // Recursive case 2: Include the current element (XOR it)
        calculateXORSum(nums, index + 1, currentXor ^ nums[index], totalXorSum);
    }

    // Main function that initializes recursion
    int subsetXORSum(vector<int>& nums) {
        int totalXorSum = 0;
        calculateXORSum(nums, 0, 0, totalXorSum);
        return totalXorSum;
    }
};

// --- Test the code ---
int main() {
    Solution solution;

    // Example input
    vector<int> nums = {5, 1, 6};

    int result = solution.subsetXORSum(nums);

    cout << "Sum of XORs of all subsets: " << result << endl;

    return 0;
}
