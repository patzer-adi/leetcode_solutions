#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans = "";
        if (strs.empty()) return ans; // edge case: no strings

        for (int i = 0; i < strs[0].length(); i++) {
            char ch = strs[0][i];
            bool match = true;

            // check this char across all strings
            for (int j = 1; j < strs.size(); j++) {
                if (i >= strs[j].size() || strs[j][i] != ch) {
                    match = false;
                    break;
                }
            }

            if (!match) break;     // stop at first mismatch
            ans.push_back(ch);     // otherwise add to prefix
        }

        return ans;
    }
};

int main() {
    Solution s;

    // Example test case
    vector<string> strs = {"flower","flow","flight"};
    cout << "Longest Common Prefix: " << s.longestCommonPrefix(strs) << endl;

    // Another test case
    vector<string> strs2 = {"dog","racecar","car"};
    cout << "Longest Common Prefix: " << s.longestCommonPrefix(strs2) << endl;

    return 0;
}
