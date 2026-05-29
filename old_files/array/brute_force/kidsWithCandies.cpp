#include <iostream>
#include <vector>
#include <algorithm> // for max_element

using namespace std;

class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> ans;
        int current_max = *max_element(candies.begin(), candies.end());

        for (int candy : candies) {
            ans.push_back(candy + extraCandies >= current_max);
        }

        return ans;
    }
};

int main() {
    Solution sol;
    
    vector<int> candies = {2, 3, 5, 1, 3};
    int extraCandies = 3;
    
    vector<bool> result = sol.kidsWithCandies(candies, extraCandies);

    cout << "Result: ";
    for (bool canHaveMax : result) {
        cout << (canHaveMax ? "true " : "false ");
    }
    cout << endl;

    return 0;
}
