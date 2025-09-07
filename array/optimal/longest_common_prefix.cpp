#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.empty()) return "";

        sort(strs.begin(), strs.end());

        string first = strs[0];
        string last = strs.back();

        string result="";

        int i = 0;
        while(i < first.size() && i < last.size())
        {
            if(first[i] == last[i])
            {
                result += first[i];
                i++;
            }
            else{
                break;
            }
        }
        return result;
    }
};

int main() {
    Solution s;

    // Example test case
    vector<string> strs = {"flower","flow","flight"};
    cout << "Longest Common Prefix: " << s.longestCommonPrefix(strs) << endl;

    // Another test case
    vector<string> strs2 = {"dog","racecar","car"};
    cout << "Longest Common Prefix: " << s.longestCommonPrefix(strs2) << endl;

    return 0;
}
