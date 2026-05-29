// problem 1920;
#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        vector<int> ans(nums.size());  // allocate enough space
        for (int i = 0; i < nums.size(); i++) {
            ans[i] = nums[nums[i]];   // safe to access now
        }
        return ans;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {0, 2, 1, 5, 3, 4};
    vector<int> ans = sol.buildArray(nums);

    cout << "Result: ";
    for (int x : ans) cout << x << " ";
    cout << endl;

    return 0;
}
