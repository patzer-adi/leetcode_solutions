#include <iostream>

using namespace std;

class Solution {
public:
    int climbStairs(int n) {
        if (n <= 2)
            return n;

        int a = 1, b = 2;
        int i = 3;

        while (i <= n) {
            int c = a + b;
            a = b;
            b = c;
            i++;
        }

        return b;
    }
};

int main() {
    Solution sol;

    int n;

    cout << "Enter number of stairs: ";
    cin >> n;

    cout << "Number of ways to climb " << n << " stairs: "
         << sol.climbStairs(n) << endl;

    return 0;
}