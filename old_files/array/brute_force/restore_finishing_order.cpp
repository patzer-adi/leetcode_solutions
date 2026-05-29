#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    // Helper function: checks if val exists in friends vector
    bool contains(vector<int>& friends, int val)
    {
        return find(friends.begin(), friends.end(), val) != friends.end();
    }

    // Main function: returns elements from 'order' that are also in 'friends'
    vector<int> recoverOrder(vector<int>& order, vector<int>& friends) {
        vector<int> ans;
        for (int i = 0; i < order.size(); ++i)
        {
            if (contains(friends, order[i]))
                ans.push_back(order[i]);
        }
        return ans;
    }
};

// --- Test the code ---
int main() {
    Solution solution;

    vector<int> order = {5, 2, 8, 1};
    vector<int> friends = {1, 8, 3};

    vector<int> result = solution.recoverOrder(order, friends);

    cout << "Recovered order: ";
    for (int val : result)
        cout << val << " ";
    cout << endl;

    return 0;
}