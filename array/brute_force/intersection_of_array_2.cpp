//problem 350 different problem
#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> inter;
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());

        int i = 0, j = 0;
        while (i < nums1.size() && j < nums2.size()) {
            if (nums1[i] == nums2[j]) {
                // need duplicates
                inter.push_back(nums1[i]);
                i++;
                j++;
            } 
            else if (nums1[i] < nums2[j]) {
                i++;
            } 
            else {
                j++;
            }
        }
        return inter;
    }
};

int main() {
    Solution sol;
    vector<int> nums1 = {1, 2, 2, 1};
    vector<int> nums2 = {2, 2};
    vector<int> ans = sol.intersection(nums1, nums2);

    cout << "Intersection (unique): ";
    for (int x : ans) cout << x << " ";
    cout << endl; // Output: 2
    return 0;
}
