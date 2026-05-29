
#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i = 0, j = 0;

        while (i < s.size() && j < t.size()) {
            if (s[i] == t[j]) {
                i++;
            }
            j++;
        }

        return i == s.size();
    }
};

int main() {
    Solution sol;

    string s1 = "abc";
    string t1 = "ahbgdc";

    string s2 = "axc";
    string t2 = "ahbgdc";

    cout << "Test Case 1: "
         << (sol.isSubsequence(s1, t1) ? "true" : "false") << endl;

    cout << "Test Case 2: "
         << (sol.isSubsequence(s2, t2) ? "true" : "false") << endl;

    return 0;
}