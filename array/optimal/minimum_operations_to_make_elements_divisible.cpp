#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int min_operations = 0;

        for (int i = 0; i < nums.size(); i++) {
            int rem = nums[i] % 3;

            if (rem != 0) {
                min_operations += min(rem, 3 - rem);
            }
        }
        return min_operations;
    }
};

int main() {
    Solution sol;

    vector<int> nums = {1, 2, 3, 4, 5};

    cout << "Minimum operations: "
         << sol.minimumOperations(nums) << endl;

    return 0;
}
