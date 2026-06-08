#include <iostream>

using namespace std;

class Solution {
public:
    int bitwiseComplement(int n) {
        int m = n;
        int mask = 0;

        if (n == 0) {
            return 1;
        }

        while (m != 0) {
            mask = (mask << 1) | 1;
            m = m >> 1;
        }

        int ans = (~n) & mask;
        return ans;
    }
};

int main() {
    Solution sol;

    int n;

    cout << "Enter a non-negative integer: ";
    cin >> n;

    cout << "Bitwise Complement: " << sol.bitwiseComplement(n) << endl;

    return 0;
}