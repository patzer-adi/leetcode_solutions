#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int count_stones = 0;

        for (int i = 0; i < stones.length(); i++) {
            if (jewels.find(stones[i]) != string::npos) {
                count_stones++;
            }
        }
        return count_stones;
    }
};

int main() {
    Solution sol;

    string jewels = "aA";
    string stones = "aAAbbbb";

    cout << "Jewels in stones: "
         << sol.numJewelsInStones(jewels, stones) << endl;

    return 0;
}
