#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k = 0;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != val) {
                nums[k++] = nums[i];
            }
        }

        return k;
    }
};

int main() {
    Solution sol;

    int n;

    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> nums(n);

    cout << "Enter array elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    int val;
    cout << "Enter value to remove: ";
    cin >> val;

    int k = sol.removeElement(nums, val);

    cout << "\nNumber of remaining elements: " << k << endl;

    cout << "Array after removing " << val << ": ";
    for (int i = 0; i < k; i++) {
        cout << nums[i] << " ";
    }

    cout << endl;

    return 0;
}