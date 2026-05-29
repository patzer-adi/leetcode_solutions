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
            } else {
                digits[idx] += 1;
                return digits;
            }
            idx--;
        }
        digits.insert(digits.begin(), 1); // if all were 9's
        return digits;
    }
};

int main() {
    Solution s;

    // Example 1
    vector<int> digits1 = {1,2,3};
    vector<int> res1 = s.plusOne(digits1);
    cout << "Input: [1,2,3] → Output: ";
    for (int d : res1) cout << d << " ";
    cout << endl;

    // Example 2
    vector<int> digits2 = {4,3,2,1};
    vector<int> res2 = s.plusOne(digits2);
    cout << "Input: [4,3,2,1] → Output: ";
    for (int d : res2) cout << d << " ";
    cout << endl;

    // Example 3
    vector<int> digits3 = {9,9,9};
    vector<int> res3 = s.plusOne(digits3);
    cout << "Input: [9,9,9] → Output: ";
    for (int d : res3) cout << d << " ";
    cout << endl;

    return 0;
}
