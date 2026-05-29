#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.empty()) return 0;

        int k = 1; // index where next unique element should go
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] != nums[i - 1]) {
                nums[k] = nums[i]; // place unique element
                k++;
            }
        }
        // for (int i = 0; i < nums.size(); i++) {
        //   cout << nums[i];
        // }
        return k; // number of unique elements
    }
};

int main() {
    Solution s;

    // Example 1
    vector<int> nums1 = {0,0,1,1,1,2,2,3,3,4};
    int k1 = s.removeDuplicates(nums1);
    cout << "k = " << k1 << ", nums = ";
    for (int i = 0; i < k1; i++) cout << nums1[i] << " ";
    for (int i = k1; i < nums1.size(); i++) cout << "_ ";
    cout << endl;

    // Example 2
    vector<int> nums2 = {0,0,1,1,1,2,2,3,3,4};
    int k2 = s.removeDuplicates(nums2);
    cout << "k = " << k2 << ", nums = ";
    for (int i = 0; i < k2; i++) cout << nums2[i] << " ";
    for (int i = k2; i < nums2.size(); i++) cout << "_ ";
    cout << endl;

    return 0;
}
