#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    // Function to calculate the alternating sum of an array
    // Adds elements at even indices and subtracts elements at odd indices
    int alternatingSum(vector<int>& nums) {
        int ans = 0;
        for (int i = 0; i < nums.size(); ++i) {
            if (i % 2 == 0)
                ans += nums[i];  // even index -> add
            else
                ans -= nums[i];  // odd index -> subtract
        }
        return ans;
    }
};

// --- Test the code ---
int main() {
    Solution solution;

    // Example input
    vector<int> nums = {4, 2, 5, 3};

    int result = solution.alternatingSum(nums);

    cout << "Alternating sum: " << result << endl;

    return 0;
}
