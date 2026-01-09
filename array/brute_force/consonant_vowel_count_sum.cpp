#include <iostream>
#include <string>
#include <algorithm>  // for count() and max()
using namespace std;

class Solution {
public:
    int maxFreqSum(string s) {
        int max_count_vowel = 0, count_vowel = 0;
        int max_count_consonant = 0, count_consonant = 0;

        for (int i = 0; i < s.length(); i++) {
            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || 
                s[i] == 'o' || s[i] == 'u') {

                count_vowel = count(s.begin(), s.end(), s[i]);
                max_count_vowel = max(max_count_vowel, count_vowel);

            } else {
                count_consonant = count(s.begin(), s.end(), s[i]);
                max_count_consonant = max(max_count_consonant, count_consonant);
            }
        }

        return max_count_consonant + max_count_vowel;
    }
};

int main() {
    Solution sol;

    string s = "leetcode";

    int result = sol.maxFreqSum(s);

    cout << "Max Frequency Sum: " << result << endl;

    return 0;
}
