#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        // Case 1: if 0 is missing
        if (nums[0] != 0) return 0;

        // Case 2: check gaps in between
        for (int i = 0; i < nums.size() - 1; i++) {
            if (nums[i] + 1 != nums[i + 1]) {
                return nums[i] + 1;
            }
        }

        // Case 3: if all numbers are consecutive, missing number is n
        return nums.size();
    }
};

int main() {
    Solution sol;

    vector<int> nums1 = {3, 0, 1};
    vector<int> nums2 = {0, 1};
    vector<int> nums3 = {9,6,4,2,3,5,7,0,1};

    cout << "Missing number in [3,0,1]: " 
         << sol.missingNumber(nums1) << endl; // Expected 2

    cout << "Missing number in [0,1]: " 
         << sol.missingNumber(nums2) << endl; // Expected 2

    cout << "Missing number in [9,6,4,2,3,5,7,0,1]: " 
         << sol.missingNumber(nums3) << endl; // Expected 8

    return 0;
}
