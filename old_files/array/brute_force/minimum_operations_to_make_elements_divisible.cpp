#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int min_operations = 0;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] % 3 != 0) {
                min_operations++;
            }
        }
        return min_operations;
    }
};

int main() {
    Solution sol;

    vector<int> nums = {1, 3, 6, 2, 9, 4};

    int result = sol.minimumOperations(nums);

    cout << "Minimum operations: " << result << endl;

    return 0;
}
