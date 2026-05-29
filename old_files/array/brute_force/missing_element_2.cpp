#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int sum_n = n * (n + 1) / 2; // expected sum from 0 to n
        int tsum = 0;

        for (int i = 0; i < n; i++) {
            tsum += nums[i]; // actual sum
        }

        return sum_n - tsum; // missing number
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
