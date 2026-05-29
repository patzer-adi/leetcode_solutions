#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

class Solution {
public:
    int thirdMax(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        int distinctCount = 1; // largest number counts as first
        int last = nums[nums.size() - 1];

        // traverse from right to left
        for (int i = nums.size() - 2; i >= 0; i--) {
            if (nums[i] != last) {
                distinctCount++;
                last = nums[i];
                if (distinctCount == 3) {
                    return nums[i]; // third maximum found
                }
            }
        }

        // if less than 3 distinct numbers, return maximum
        return nums[nums.size() - 1];
    }
};

int main() {
    Solution sol;

    vector<int> nums1 = {3, 2, 1};
    vector<int> nums2 = {1, 2};
    vector<int> nums3 = {2, 2, 3, 1};

    cout << sol.thirdMax(nums1) << endl; // Output: 1
    cout << sol.thirdMax(nums2) << endl; // Output: 2
    cout << sol.thirdMax(nums3) << endl; // Output: 1

    return 0;
}
