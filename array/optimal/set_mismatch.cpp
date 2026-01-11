#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int> ans;
        sort(nums.begin(), nums.end());

        int duplicate = -1;
        int actual_sum = 0;

        // Calculate actual sum
        for (int i = 0; i < nums.size(); i++) {
            actual_sum += nums[i];
        }

        // Find duplicate safely
        for (int i = 0; i < nums.size() - 1; i++) {
            if (nums[i] == nums[i + 1]) {
                duplicate = nums[i];
                break;
            }
        }

        int n = nums.size();
        int expected_sum = n * (n + 1) / 2;

        int missing = expected_sum - (actual_sum - duplicate);

        ans.push_back(duplicate);
        ans.push_back(missing);
        return ans;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {1, 2, 2, 4};

    vector<int> res = sol.findErrorNums(nums);

    cout << "Duplicate: " << res[0] << endl;
    cout << "Missing: " << res[1] << endl;

    return 0;
}
