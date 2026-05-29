// Brute Force
#include <iostream>
#include <string>
#include <vector>

class Solution {
public:
    int lengthOfLastWord(std::string s) {
        std::vector<std::string> words;
        std::string temp = "";

        for (char c : s) {
            if (c != ' ') {
                temp += c;
            } else {
                if (!temp.empty()) {
                    words.push_back(temp);
                    temp = "";
                }
            }
        }

        if (!temp.empty()) {
            words.push_back(temp);
        }

        if (words.empty()) {
            return 0;
        }

        return words.back().length();
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