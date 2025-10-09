#include <iostream>
#include <vector>
using namespace std;
//o(n)
class Solution {
public:
    vector<int> transformArray(vector<int>& nums) 
    {
        int size = nums.size();
        int even_cnt = 0;

        for(int i = 0; i < size; i++)
        {
            if(nums[i] % 2 == 0)
            {     
                even_cnt++;               
                nums[i] = 0;  // Evens -> 0
            }
            else
            {
                nums[i] = 1;  // Odds -> 1
            }
        }
        
        for(int i = 0; i < size; i++)
        {
            if(i < even_cnt)
                nums[i] = 0;
            else
                nums[i] = 1;
        }

        return nums;
    }
};

int main() {
    Solution sol;

    // Example input
    vector<int> nums = {4, 3, 2, 1};

    // Transform array
    vector<int> result = sol.transformArray(nums);

    // Print result
    cout << "Transformed array: [";
    for(int i = 0; i < result.size(); i++) {
        cout << result[i];
        if(i < result.size() - 1) cout << ", ";
    }
    cout << "]" << endl;

    return 0;
}
