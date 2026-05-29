#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count = 0;
        int maxcount = 0;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 1) {
                count++;
                if (count > maxcount) {
                    maxcount = count;
                }
            } else {
                count = 0;  // reset when 0 is found
            }
        }
        return maxcount;
    }
};

int main() {
    Solution sol;

    vector<int> nums = {1, 1, 0, 1, 1, 1};

    int result = sol.findMaxConsecutiveOnes(nums);

    cout << "Maximum consecutive ones: " << result << endl;

    return 0;
}
