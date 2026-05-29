#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) 
    {
        int i =0;
        for(int j = 1; j<nums.size(); j++){
            if(nums[i] != nums[j]){
                i++;
                nums[i] = nums[j];
            }

        }
        return i+1;
    }
};

int main() {
    Solution s;

    // Example 1
    vector<int> nums1 = {1,1,2};
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
