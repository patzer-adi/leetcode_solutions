#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
// problem no136
// O(nlog n) solution...

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size() - 1; i += 2) {
            if (nums[i] != nums[i + 1])  // mismatch found
                return nums[i];
        }
        return nums.back();  // last element is the single one
    }
};

int main() {
    Solution sol;

    vector<int> nums1 = {2, 2, 1};
    vector<int> nums2 = {4, 1, 2, 1, 2};
    vector<int> nums3 = {1};

    cout << "Test 1: " << sol.singleNumber(nums1) << endl; // Expected: 1
    cout << "Test 2: " << sol.singleNumber(nums2) << endl; // Expected: 4
    cout << "Test 3: " << sol.singleNumber(nums3) << endl; // Expected: 1

    return 0;
}
