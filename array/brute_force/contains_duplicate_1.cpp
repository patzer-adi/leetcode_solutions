#include <iostream>
#include <vector>
using namespace std;
// has O(n^2) complexity... doesnt not work on large inputs/test cases....

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        for (int i = 0; i < nums.size(); i++) {
            int dupli = nums[i];
            for (int j = i + 1; j < nums.size(); ++j) {
                if (dupli == nums[j])
                    return true;  // duplicate found
            }
        }
        return false;  // no duplicates
    }
};

int main() {
    Solution sol;

    // Test case 1
    vector<int> nums1 = {1, 2, 3, 4};
    cout << "Test 1: " << (sol.containsDuplicate(nums1) ? "true" : "false") << endl;

    // Test case 2
    vector<int> nums2 = {1, 2, 3, 1};
    cout << "Test 2: " << (sol.containsDuplicate(nums2) ? "true" : "false") << endl;

    // Test case 3
    vector<int> nums3 = {5, 6, 7, 8, 5};
    cout << "Test 3: " << (sol.containsDuplicate(nums3) ? "true" : "false") << endl;

    return 0;
}
