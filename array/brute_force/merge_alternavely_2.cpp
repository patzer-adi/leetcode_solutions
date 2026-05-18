#include <iostream>
#include <string>
using namespace std;
// solution given by Abdullah sir
class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string ans = "";
        int i = 0, j = 0;

        while (i < word1.size() && j < word2.size()) {
            ans += word1[i];
            ans += word2[j];
            i++;
            j++;
        }

        if (i < word1.size()) {
            while (i < word1.size()) {
                ans += word1[i];
                i++;
            }
        } else {
            while (j < word2.size()) {
                ans += word2[j];
                j++;
            }
        }

        return ans;
    }
};

int main() {
    Solution sol;

    string word1 = "abc";
    string word2 = "pqr";

    string result = sol.mergeAlternately(word1, word2);

    cout << "word1: " << word1 << endl;
    cout << "word2: " << word2 << endl;
    cout << "Merged: " << result << endl;

    return 0;
}
