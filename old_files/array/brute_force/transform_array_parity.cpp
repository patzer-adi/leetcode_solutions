#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
//with sorting
class Solution {
public:
    vector<int> transformArray(vector<int>& nums) 
    {
        int size = nums.size();

        // Step 1: Replace evens with 0, odds with 1
        for (int i = 0; i < size; i++) {
            if (nums[i] % 2 == 0)
                nums[i] = 0;
            else
                nums[i] = 1;
        }

        // Step 2: Sort the modified array in non-decreasing order
        sort(nums.begin(), nums.end());

        return nums;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {4, 3, 2, 1};
    
    vector<int> result = sol.transformArray(nums);

    cout << "Transformed array: [";
    for (int i = 0; i < result.size(); i++) {
        cout << result[i];
        if (i < result.size() - 1) cout << ", ";
    }
    cout << "]" << endl;

    return 0;
}
