#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int ans = 0;
        for (int i = 0; i < nums.size(); ++i) {
            ans += nums[i];  // sum all elements
        }
        return ans % k;  // return remainder after division by k
    }
};

int main() {
    Solution sol;
    
    // Example input
    vector<int> nums = {3, 1, 4, 2};
    int k = 5;

    int result = sol.minOperations(nums, k);
    cout << "Result: " << result << endl;  // Output: 0..4 depending on sum

    return 0;
}
