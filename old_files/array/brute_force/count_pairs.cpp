#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
        int count = 0;
        for(int i = 0; i < nums.size(); ++i) {
            for(int j = i + 1; j < nums.size(); ++j) {
                if(nums[i] + nums[j] < target) {
                    count++;
                }
            }
        }
        return count;
    }
};

int main() {
    Solution sol;

    vector<int> nums = { -1, 1, 2, 3, 1 };
    int target = 2;

    int result = sol.countPairs(nums, target);

    cout << "Count of valid pairs: " << result << endl;

    return 0;
}
