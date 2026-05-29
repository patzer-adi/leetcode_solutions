#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        bool merged = true;

        while (merged) {
            merged = false;

            for (int i = 0; i < intervals.size(); i++) {
                for (int j = i + 1; j < intervals.size(); j++) {

                    int start1 = intervals[i][0];
                    int end1   = intervals[i][1];
                    int start2 = intervals[j][0];
                    int end2   = intervals[j][1];

                    // Check overlap
                    if (max(start1, start2) <= min(end1, end2)) {
                        vector<int> newInterval = {
                            min(start1, start2),
                            max(end1, end2)
                        };

                        // Remove old intervals
                        intervals.erase(intervals.begin() + j);
                        intervals.erase(intervals.begin() + i);

                        // Add merged interval
                        intervals.push_back(newInterval);

                        merged = true;
                        break;
                    }
                }
                if (merged) break;
            }
        }
        return intervals;
    }
};

int main() {
    Solution sol;
    vector<vector<int>> intervals = {{1,3}, {2,6}, {8,10}, {15,18}};

    auto result = sol.merge(intervals);

    cout << "Merged Intervals:\n";
    for (auto &v : result) {
        cout << "[" << v[0] << ", " << v[1] << "] ";
    }
    cout << endl;

    return 0;
}
