#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k = 0; // index for placing non-val elements
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != val) {
                nums[k++] = nums[i];
            }
        }
        return k; // number of elements not equal to val
    }
};

int main() {
    Solution s;

    // Example 1
    vector<int> nums1 = {3,2,2,3};
    int val1 = 3;
    int k1 = s.removeElement(nums1, val1);

    cout << "k = " << k1 << ", nums = ";
    for (int i = 0; i < k1; i++) cout << nums1[i] << " ";
    for (int i = k1; i < nums1.size(); i++) cout << "_ ";
    cout << endl;

    // Example 2
    vector<int> nums2 = {0,1,2,2,3,0,4,2};
    int val2 = 2;
    int k2 = s.removeElement(nums2, val2);

    cout << "k = " << k2 << ", nums = ";
    for (int i = 0; i < k2; i++) cout << nums2[i] << " ";
    for (int i = k2; i < nums2.size(); i++) cout << "_ ";
    cout << endl;

    return 0;
}
