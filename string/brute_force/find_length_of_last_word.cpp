#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    int lengthOfLastWord(string s) {
        int length_ans = 0;
        bool counting = false;

        for (int i = s.length() - 1; i >= 0; i--) {
            if (s[i] != ' ') {
                counting = true;
                length_ans++;
            } else if (counting) {
                break;
            }
        }
        return length_ans;
    }
};

int main() {
    Solution sol;

    string s = "Hello World";

    cout << "Length of last word: "
         << sol.lengthOfLastWord(s) << endl;

    return 0;
}
