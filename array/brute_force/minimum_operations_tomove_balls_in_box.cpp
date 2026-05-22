#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> minOperations(string boxes) {
        vector<int> positions, ans;
        int len = boxes.size();

        // Store positions of '1's
        for (int i = 0; i < len; i++) {
            if (boxes[i] == '1')
                positions.push_back(i);
        }

        // Calculate operations for each index
        for (int i = 0; i < len; i++) {
            int sum = 0;
            for (int idx : positions) {
                sum += abs(i - idx);
            }
            ans.push_back(sum);
        }

        return ans;
    }
};

int main() {
    Solution sol;

    // Example inputs
    string boxes1 = "110";
    string boxes2 = "001011";

    vector<int> result1 = sol.minOperations(boxes1);
    vector<int> result2 = sol.minOperations(boxes2);

    // Print result for first input
    cout << "Input: " << boxes1 << "\nOutput: ";
    for (int x : result1) cout << x << " ";
    cout << "\n\n";

    // Print result for second input
    cout << "Input: " << boxes2 << "\nOutput: ";
    for (int x : result2) cout << x << " ";
    cout << "\n";

    return 0;
}
