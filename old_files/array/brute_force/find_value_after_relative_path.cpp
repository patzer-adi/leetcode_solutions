#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int x = 0;
        for (int i = 0; i < operations.size(); i++) {
            // use .find() instead of .contains() for compatibility
            if (operations[i].find("++") != string::npos)
                x++;
            else if (operations[i].find("--") != string::npos)
                x--;
        }
        return x;
    }
};

int main() {
    Solution sol;
    vector<string> operations = {"--X", "X++", "X++"};
    cout << sol.finalValueAfterOperations(operations) << endl;  // Output: 1
    return 0;
}
