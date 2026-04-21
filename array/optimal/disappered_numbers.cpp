#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int idx = 0;

        // Mark visited numbers by negating values
        for (int i = 0; i < nums.size(); i++) {
            idx = abs(nums[i]) - 1;
            if (nums[idx] > 0) {
                nums[idx] = -nums[idx];
            }
        }

        vector<int> result;

        // Collect indices which remain positive
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] > 0) {
                result.push_back(i + 1);
            }
        }

        return result;
    }
};

int main() {
    Solution sol;

    vector<int> nums = {4, 3, 2, 7, 8, 2, 3, 1};

    vector<int> result = sol.findDisappearedNumbers(nums);

    cout << "Disappeared Numbers: ";
    for (int x : result) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
