#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(), nums.end());        // sort in place
        return nums[nums.size() / 2];          // middle element is majority
    }
};

int main() {
    Solution sol;
    vector<int> nums1 = {3, 2, 3};
    vector<int> nums2 = {2, 2, 1, 1, 1, 2, 2};

    cout << "Majority of [3,2,3]: " << sol.majorityElement(nums1) << endl; // 3
    cout << "Majority of [2,2,1,1,1,2,2]: " << sol.majorityElement(nums2) << endl; // 2

    return 0;
}
