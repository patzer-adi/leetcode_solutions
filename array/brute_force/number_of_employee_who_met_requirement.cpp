#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int numberOfEmployeesWhoMetTarget(vector<int>& hours, int target) {
        int count = 0;
        for (int i = 0; i < hours.size(); ++i) {
            if (hours[i] >= target) {
                count++;
            }
        }
        return count;
    }
};

int main() {
    Solution sol;

    // Example input
    vector<int> hours = {0, 1, 2, 3, 4};
    int target = 2;

    int result = sol.numberOfEmployeesWhoMetTarget(hours, target);

    cout << "Number of employees who met target: " << result << endl;

    return 0;
}
