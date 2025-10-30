#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    // Function to count the number of good pairs (i < j and nums[i] == nums[j])
    int numIdenticalPairs(vector<int>& nums) {
        int count = 0;
        for (int i = 0; i < nums.size(); i++) {
            for (int j = 0; j < nums.size(); j++) {
                if (nums[i] == nums[j] && i < j)
                    count++;
            }
        }
        return count;
    }
};

// --- Test the code ---
int main() {
    Solution solution;

    vector<int> nums = {1, 2, 3, 1, 1, 3};

    int result = solution.numIdenticalPairs(nums);

    cout << "Number of good pairs: " << result << endl;

    return 0;
}
