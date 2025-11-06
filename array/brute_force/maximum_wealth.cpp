#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int ans = 0; // store maximum wealth
        for (int i = 0; i < accounts.size(); ++i) {
            int sum = 0;
            for (int j = 0; j < accounts[i].size(); ++j) {
                sum += accounts[i][j]; // sum accounts of customer i
            }
            if (sum > ans) {
                ans = sum; // update maximum wealth
            }
        }
        return ans;
    }
};

int main() {
    Solution sol;

    // Example input: each row = a customer, each element = account balance
    vector<vector<int>> accounts = {
        {1, 2, 3},
        {3, 2, 1},
        {4, 5, 6}
    };

    int maxWealth = sol.maximumWealth(accounts);
    cout << "Maximum wealth: " << maxWealth << endl; // Output: 15

    return 0;
}
