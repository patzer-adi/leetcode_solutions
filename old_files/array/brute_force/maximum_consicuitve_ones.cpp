#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxcount = 0;

        for (int i = 0; i < nums.size(); i++) {
            int count = 0;

            // Start counting from index i
            for (int j = i; j < nums.size(); j++) {
                if (nums[j] == 1) {
                    count++;
                    maxcount = max(maxcount, count);
                } else {
                    break;  // stop when 0 is found
                }
            }
        }
        return maxcount;
    }
};

int main() {
    Solution sol;

    vector<int> nums = {1, 1, 0, 1, 1, 1};

    cout << "Maximum consecutive ones: "
         << sol.findMaxConsecutiveOnes(nums) << endl;

    return 0;
}
