#include <iostream>
#include <climits>

using namespace std;

class Solution {
public:
    int reverse(int x) {
        long int rev = 0, rem = 0;

        while (x != 0) {
            rem = x % 10;

            // Check for overflow before multiplying by 10
            if ((rev > INT_MAX / 10) || (rev < INT_MIN / 10)) {
                return 0;
            }

            rev = (rev * 10) + rem;
            x = x / 10;
        }

        return static_cast<int>(rev);
    }
};

int main() {
    Solution sol;

    int x;

    cout << "Enter an integer: ";
    cin >> x;

    cout << "Reversed Integer: " << sol.reverse(x) << endl;

    return 0;
}