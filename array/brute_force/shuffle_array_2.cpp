#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> ans(nums.size());
        int j = 0;

        for (int i = 0; i < n; i++) {
            ans[j] = nums[i];
            ans[j + 1] = nums[i + n];
            j += 2;
        }
        return ans;
    }
};

int main() {
    Solution sol;

    vector<int> nums = {2, 5, 1, 3, 4, 7};
    int n = 3;

    vector<int> result = sol.shuffle(nums, n);

    for (int x : result) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
