#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int allXor = 0;

        // XOR all numbers from 0 to n
        for (int i = 0; i <= nums.size(); i++) {
            allXor ^= i;
        }

        // XOR all elements in nums
        for (int num : nums) {
            allXor ^= num;
        }

        // Remaining value is the missing number
        return allXor;
    }
};

int main() {
    Solution sol;

    vector<int> nums1 = {3, 0, 1};
    vector<int> nums2 = {0, 1};
    vector<int> nums3 = {9, 6, 4, 2, 3, 5, 7, 0, 1};

    cout << "Missing number in [3,0,1]: " 
         << sol.missingNumber(nums1) << endl; // Expected 2

    cout << "Missing number in [0,1]: " 
         << sol.missingNumber(nums2) << endl; // Expected 2

    cout << "Missing number in [9,6,4,2,3,5,7,0,1]: " 
         << sol.missingNumber(nums3) << endl; // Expected 8

    return 0;
}
