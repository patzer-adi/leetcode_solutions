#include <iostream>
#include <string>
#include <cmath>   // for abs()
using namespace std;

class Solution {
public:
    int scoreOfString(string s) {
        int sum_total = 0;

        for (int i = 1; i < s.length(); i++) {
            sum_total += abs(s[i] - s[i - 1]);
        }
        return sum_total;
    }
};

int main() {
    Solution sol;

    string s = "hello";

    int result = sol.scoreOfString(s);

    cout << "Score of string: " << result << endl;

    return 0;
}
