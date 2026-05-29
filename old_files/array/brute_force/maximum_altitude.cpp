#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        vector<int> altitudes(gain.size() + 1);
        altitudes[0] = 0;

        int maxAltitude = 0;

        for (int i = 1; i < altitudes.size(); i++) {
            altitudes[i] = gain[i - 1] + altitudes[i - 1];
            if (maxAltitude < altitudes[i]) {
                maxAltitude = altitudes[i];
            }
        }
        return maxAltitude;
    }
};

int main() {
    Solution sol;

    vector<int> gain1 = {-5, 1, 5, 0, -7};
    vector<int> gain2 = {-4, -3, -2, -1, 4, 3, 2};

    cout << "Test Case 1:\n";
    cout << "Largest Altitude = "
         << sol.largestAltitude(gain1) << "\n\n";

    cout << "Test Case 2:\n";
    cout << "Largest Altitude = "
         << sol.largestAltitude(gain2) << "\n";

    return 0;
}
