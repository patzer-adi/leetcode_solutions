
---

# VS Code C++ Version

```cpp
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> result;

        if (numRows == 0)
            return result;

        result.push_back({1});

        for (int i = 1; i < numRows; i++) {
            vector<int> row;
            row.push_back(1);

            vector<int>& prevRow = result[i - 1];

            for (int j = 0; j < prevRow.size() - 1; j++) {
                row.push_back(prevRow[j] + prevRow[j + 1]);
            }

            row.push_back(1);
            result.push_back(row);
        }

        return result;
    }
};

int main() {
    int numRows;

    cout << "Enter number of rows: ";
    cin >> numRows;

    Solution obj;
    vector<vector<int>> triangle = obj.generate(numRows);

    cout << "\nPascal's Triangle:\n";

    for (const auto& row : triangle) {
        for (int num : row) {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}