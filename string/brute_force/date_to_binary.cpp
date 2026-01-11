#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
    string toBinary(int num) {
        if (num == 0) return "0";

        string bin = "";
        while (num > 0) {
            bin.push_back((num % 2) + '0');
            num /= 2;
        }
        reverse(bin.begin(), bin.end());
        return bin;
    }

    string convertDateToBinary(string date) {
        string ans = "";
        int num = 0;

        for (int i = 0; i < date.length(); i++) {
            if (date[i] == '-') {
                ans += toBinary(num);
                ans.push_back('-');
                num = 0;
            } else {
                num = num * 10 + (date[i] - '0');
            }
        }

        // convert last part (day)
        ans += toBinary(num);

        return ans;
    }
};

int main() {
    Solution sol;

    string date = "2024-01-30";
    cout << sol.convertDateToBinary(date) << endl;

    return 0;
}
