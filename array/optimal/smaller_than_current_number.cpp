#include <iostream>
#include <vector>
using namespace std;
// problem 645
class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> ans(nums.size());

        for (int i = 0; i < nums.size(); i++) {
            int count = 0;
            for (int j = 0; j < nums.size(); j++) {
                if (nums[j] < nums[i]) {
                    count++;
                }
            }
            ans[i] = count;  // FIXED
        }
        return ans;
    }
};

int main() {
    Solution sol;

    vector<int> nums = {8, 1, 2, 2, 3};

    vector<int> result = sol.smallerNumbersThanCurrent(nums);

    for (int x : result) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
