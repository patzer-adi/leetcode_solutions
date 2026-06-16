#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans = "";

        if (strs.empty())
            return ans;

        sort(strs.begin(), strs.end());

        string str_start = strs.front();
        string str_last = strs.back();

        int i = 0;

        while (i < str_start.size() && i < str_last.size()) {
            if (str_start[i] == str_last[i]) {
                ans += str_start[i];
                i++;
            }
            else {
                break;
            }
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