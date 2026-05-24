// Optimal
#include <iostream>
#include <string>

class Solution {
public:
    int lengthOfLastWord(std::string s) {
        int i = s.length() - 1;
        int length = 0;

        while (i >= 0 && s[i] == ' ') {
            i--;
        }

        while (i >= 0 && s[i] != ' ') {
            length++;
            i--;
        }

        return length;
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