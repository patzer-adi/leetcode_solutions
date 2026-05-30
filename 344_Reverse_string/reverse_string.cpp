#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    void reverseString(vector<char>& s) {
        int i = 0, j = s.size() - 1;

        while (i < j) {
            char temp = s[i];
            s[i] = s[j];
            s[j] = temp;

            i++;
            j--;
        }
    }
};

int main() {
    Solution sol;

    string input;

    cout << "Enter a string: ";
    cin >> input;

    vector<char> s(input.begin(), input.end());

    sol.reverseString(s);

    cout << "Reversed String: ";

    for (char ch : s) {
        cout << ch;
    }

    cout << endl;

    return 0;
}