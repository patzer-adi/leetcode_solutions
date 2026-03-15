#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    int maxPower(string s) {
        int max_count = 1;
        int count = 1;

        for (int i = 1; i < s.length(); i++) {
            if (s[i] == s[i - 1]) {
                count++;
                max_count = max(max_count, count);
            } else {
                count = 1;
            }
        }
        return max_count;
    }
};

int main() {
    Solution sol;

    string s1 = "leetcode";
    string s2 = "abbcccddddeeeeedcba";

    cout << "Max power (leetcode): "
         << sol.maxPower(s1) << endl;

    cout << "Max power (abbcccddddeeeeedcba): "
         << sol.maxPower(s2) << endl;

    return 0;
}
