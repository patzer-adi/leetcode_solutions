#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        nums.insert(nums.end(), nums.begin(), nums.end()); // append nums to itself
        return nums;
    }
};

int main() {
    Solution sol;

    vector<int> nums = {1, 2, 3};
    vector<int> result = sol.getConcatenation(nums);

    cout << "Concatenated Array: ";
    for (int val : result) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}
