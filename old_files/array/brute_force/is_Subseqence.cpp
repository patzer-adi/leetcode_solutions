
#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i = 0;
        bool ans = false;

        for (int k = 0; k < t.size(); k++) {
            if (i < s.size() && t[k] == s[i]) {
                i++;
            }
            if (i == s.length()) {
                ans = true;
                break;
            }
        }
        return ans;
    }
};

int main() {
    Solution sol;

    string s1 = "abc";
    string t1 = "ahbgdc";

    string s2 = "axc";
    string t2 = "ahbgdc";

    cout << "Test Case 1:\n";
    cout << "Is \"" << s1 << "\" a subsequence of \"" << t1 << "\"? ";
    cout << (sol.isSubsequence(s1, t1) ? "true" : "false") << "\n\n";

    cout << "Test Case 2:\n";
    cout << "Is \"" << s2 << "\" a subsequence of \"" << t2 << "\"? ";
    cout << (sol.isSubsequence(s2, t2) ? "true" : "false") << "\n";

    return 0;
}
