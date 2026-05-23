// Your Solution
#include <iostream>
#include <string>

class Solution {
public:
    int lengthOfLastWord(std::string s) {
        int length_ans = 0;
        bool counting = false;

        for (int i = s.length() - 1; i >= 0; i--) {
            if (s[i] != ' ') {
                counting = true;
                length_ans++;
            }
            else if (counting) {
                break;
            }
        }
        return length_ans;
    }
};

int main() {
    Solution sol;
    std::string s;

    std::cout << "Enter a string: ";
    std::getline(std::cin, s);

    std::cout << "Length of last word: " << sol.lengthOfLastWord(s) << std::endl;

    return 0;
}