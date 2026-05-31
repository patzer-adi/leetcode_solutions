#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans = "";

        if (strs.empty())
            return ans;

        for (int i = 0; i < strs[0].length(); i++) {
            char ch = strs[0][i];
            bool match = true;

            for (int j = 1; j < strs.size(); j++) {
                if (strs[j].size() <= i || strs[j][i] != ch) {
                    match = false;
                    break;
                }
            }

            if (!match)
                break;
            else
                ans.push_back(ch);
        }

        return ans;
    }
};

int main() {
    Solution sol;

    int n;
    cout << "Enter number of strings: ";
    cin >> n;

    vector<string> strs(n);

    cout << "Enter the strings:\n";
    for (int i = 0; i < n; i++) {
        cin >> strs[i];
    }

    cout << "Longest Common Prefix: "
         << sol.longestCommonPrefix(strs) << endl;

    return 0;
}