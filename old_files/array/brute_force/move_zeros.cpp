#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int l = 0;
        for (int r = 0; r < nums.size(); r++) {
            if (nums[r] != 0) {
                swap(nums[l], nums[r]);
                l++;
            }
        }
    }
};

int main() {
    Solution sol;
    vector<int> nums = {0, 1, 0, 3, 12};
    sol.moveZeroes(nums);

    cout << "After moving zeroes: ";
    for (int x : nums) cout << x << " ";
    cout << endl; // Output: 1 3 12 0 0
    return 0;
}
