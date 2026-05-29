#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> result;
        if (numRows == 0) return result;

        result.push_back({1});  // first row

        for (int i = 1; i < numRows; i++) {
            vector<int> row;
            row.push_back(1);  // first element

            vector<int>& prevRow = result[i - 1];
            for (int j = 0; j < prevRow.size() - 1; j++) {
                row.push_back(prevRow[j] + prevRow[j + 1]);
            }

            row.push_back(1);  // last element
            result.push_back(row);
        }

        return result;
    }
};

int main() {
    Solution s;
    int numRows = 5;  // change this for testing
    vector<vector<int>> triangle = s.generate(numRows);

    // Print the triangle
    for (const auto& row : triangle) {
        for (int val : row) {
            cout << val << " ";
        }
        cout << endl;
    }

    return 0;
}
