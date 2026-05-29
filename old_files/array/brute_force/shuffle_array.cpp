#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> ans;
        ans.reserve(nums.size()); // optimize memory allocation

        for (int i = 0; i < n; ++i) {
            ans.push_back(nums[i]);     // take from first half
            ans.push_back(nums[i + n]); // take from second half
        }
        return ans;
    }
};

// --- Test the code ---
int main() {
    Solution solution;

    vector<int> nums = {2, 5, 1, 3, 4, 7};
    int n = 3;

    vector<int> result = solution.shuffle(nums, n);

    cout << "Shuffled array: ";
    for (int val : result)
        cout << val << " ";
    cout << endl;

    return 0;
}
