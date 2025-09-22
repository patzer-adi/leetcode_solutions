#include <iostream>
#include <vector>
using namespace std;

// problem no136
// O(n) solution...

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int result = 0;
        for (int num : nums) {
            result ^= num;  // XOR cancels out duplicates
        }
        return result;
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
