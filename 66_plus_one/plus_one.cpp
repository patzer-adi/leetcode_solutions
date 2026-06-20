
---

# VS Code C++ Version

```cpp
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int idx = digits.size() - 1;

        while (idx >= 0) {
            if (digits[idx] == 9) {
                digits[idx] = 0;
            }
            else {
                digits[idx] += 1;
                return digits;
            }

            idx--;
        }

        digits.insert(digits.begin(), 1);
        return digits;
    }
};

int main() {
    int n;

    cout << "Enter number of digits: ";
    cin >> n;

    vector<int> digits(n);

    cout << "Enter digits: ";
    for (int i = 0; i < n; i++) {
        cin >> digits[i];
    }

    Solution obj;
    vector<int> result = obj.plusOne(digits);

    cout << "Result: ";

    for (int digit : result) {
        cout << digit << " ";
    }

    cout << endl;

    return 0;
}