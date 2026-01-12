#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    string reversePrefix(string s, int k) {
        string ans;

        // Reverse first k characters
        for (int i = k - 1; i >= 0; i--) {
            ans.push_back(s[i]);
        }

        // Append remaining characters
        for (int i = k; i < s.length(); i++) {
            ans.push_back(s[i]);
        }

        return ans;
    }
};

int main() {
    Solution sol;

    string s = "abcdefd";
    int k = 4;

    string result = sol.reversePrefix(s, k);

    cout << "Result: " << result << endl;

    return 0;
}
