#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int findPoisonedDuration(vector<int>& timeSeries, int duration) {
        int total_seconds = 0;
        int time_difference = 0;

        for (int i = 0; i < timeSeries.size() - 1; i++) {
            time_difference = timeSeries[i + 1] - timeSeries[i];
            total_seconds += (time_difference < duration) ? time_difference : duration;
        }

        // Add duration for the last attack
        total_seconds += duration;

        return total_seconds;
    }
};

int main() {
    Solution sol;

    vector<int> timeSeries1 = {1, 4};
    int duration1 = 2;

    vector<int> timeSeries2 = {1, 2};
    int duration2 = 2;

    cout << "Test Case 1:\n";
    cout << "Poisoned Duration = "
         << sol.findPoisonedDuration(timeSeries1, duration1) << "\n\n";

    cout << "Test Case 2:\n";
    cout << "Poisoned Duration = "
         << sol.findPoisonedDuration(timeSeries2, duration2) << "\n";

    return 0;
}
