#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        for (int i = 0; i < flowerbed.size(); i++) {
            if (flowerbed[i] == 0) {

                bool left = false, right = false;

                if (i == 0 || flowerbed[i - 1] == 0)
                    left = true;

                if (i == flowerbed.size() - 1 || flowerbed[i + 1] == 0)
                    right = true;

                if (left && right) {
                    flowerbed[i] = 1;
                    n--;
                }
            }
        }
        return n <= 0;
    }
};

int main() {
    Solution sol;

    vector<int> flowerbed1 = {1, 0, 0, 0, 1};
    int n1 = 1;

    vector<int> flowerbed2 = {1, 0, 0, 0, 1};
    int n2 = 2;

    cout << "Test case 1:\n";
    cout << "Can place " << n1 << " flowers? ";
    cout << (sol.canPlaceFlowers(flowerbed1, n1) ? "true" : "false") << "\n\n";

    cout << "Test case 2:\n";
    cout << "Can place " << n2 << " flowers? ";
    cout << (sol.canPlaceFlowers(flowerbed2, n2) ? "true" : "false") << "\n";

    return 0;
}
