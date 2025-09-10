#include <iostream>
#include <vector>
using namespace std;

// Given a sorted array of distinct integers and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.

// You must write an algorithm with O(log n) runtime complexity.

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
       int high = nums.size() - 1;
       int low = 0;
       int mid;

       while(low <= high)
       {
        mid= (high + low) / 2;
        if(nums[mid] == target)
        {
            return mid;
        }
        else if(nums[mid] < target)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        } 
       }// end of while
    return (low);
    }
};

int main() {
    Solution s;

    // Example 1
    vector<int> nums1 = {1,3,5,6};
    int target1 = 5;
    cout << "Input: [1,3,5,6], target = 5 → Output: " 
         << s.searchInsert(nums1, target1) << endl;

    // Example 2
    vector<int> nums2 = {1,3,5,6};
    int target2 = 2;
    cout << "Input: [1,3,5,6], target = 2 → Output: " 
         << s.searchInsert(nums2, target2) << endl;

    // Example 3
    vector<int> nums3 = {1,3,5,6};
    int target3 = 7;
    cout << "Input: [1,3,5,6], target = 7 → Output: " 
         << s.searchInsert(nums3, target3) << endl;

    // Example 4
    vector<int> nums4 = {1,3,5,6};
    int target4 = 0;
    cout << "Input: [1,3,5,6], target = 0 → Output: " 
         << s.searchInsert(nums4, target4) << endl;

    return 0;
}
