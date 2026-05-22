#include <iostream>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        long long new_num = 0;  // use long long to avoid overflow
        int temp_num = x;

        if (x < 0 || (x % 10 == 0 && x != 0)) {
            return false;
        }

        while (temp_num != 0) {
            new_num = new_num * 10 + temp_num % 10;
            temp_num /= 10;
        }

        return new_num == x;
    }
};

int main() {
    Solution sol;

    int x1 = 121;
    int x2 = -121;
    int x3 = 10;
    int x4 = 123454321;

    cout << sol.isPalindrome(x1) << endl; // 1 (true)
    cout << sol.isPalindrome(x2) << endl; // 0 (false)
    cout << sol.isPalindrome(x3) << endl; // 0 (false)
    cout << sol.isPalindrome(x4) << endl; // 1 (true)

    return 0;
}
