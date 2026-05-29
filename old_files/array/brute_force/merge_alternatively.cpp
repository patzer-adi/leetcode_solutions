// problem 1768 
#include<iostream>
#include<string>
#include<vector>
using namespace std;

class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string ans = "";
        int i = 0;

        while (i < word1.length() || i < word2.length()) {
            if (i < word1.length()) {
                ans += word1[i];
            }
            if (i < word2.length()) {
                ans += word2[i];
            }
            i++;
        }

        return ans;
    }
};

int main() {
    Solution sol;
    string word1 = "abc";
    string word2 = "pqrstu";
    string merged = sol.mergeAlternately(word1, word2);

    cout << "Merged string: " << merged << endl;
    // Output: "apbqcrstu"
    return 0;
}
