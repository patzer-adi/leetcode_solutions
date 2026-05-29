#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        if (intervals.empty()) return {};

        // Sort intervals based on starting time
        sort(intervals.begin(), intervals.end(),
             [](const vector<int>& a, const vector<int>& b) {
                 return a[0] < b[0];
             });

        vector<vector<int>> merged;
        vector<int> prev = intervals[0];

        for (int i = 1; i < intervals.size(); i++) {
            vector<int> interval = intervals[i];

            // Overlapping intervals
            if (interval[0] <= prev[1]) {
                prev[1] = max(prev[1], interval[1]);
            } else {
                merged.push_back(prev);
                prev = interval;
            }
        }

        // Add last interval
        merged.push_back(prev);

        return merged;
    }
};

int main() {
    Solution sol;

    vector<vector<int>> intervals = {{1,3}, {2,6}, {8,10}, {15,18}};

    vector<vector<int>> result = sol.merge(intervals);

    cout << "Merged Intervals:\n";
    for (auto& v : result) {
        cout << "[" << v[0] << ", " << v[1] << "] ";
    }
    cout << endl;

    return 0;
}
