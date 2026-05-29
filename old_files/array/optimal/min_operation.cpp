// Optimal
#include <iostream>
#include <vector>
#include <string>

class Solution {
public:
    std::vector<int> minOperations(std::string boxes) {
        int n = boxes.size();
        std::vector<int> ans(n, 0);

        int balls = 0;
        int moves = 0;

        for (int i = 0; i < n; i++) {
            ans[i] += moves;
            if (boxes[i] == '1')
                balls++;
            moves += balls;
        }

        balls = 0;
        moves = 0;

        for (int i = n - 1; i >= 0; i--) {
            ans[i] += moves;
            if (boxes[i] == '1')
                balls++;
            moves += balls;
        }

        return ans;
    }
};

int main() {
    Solution sol;
    std::string boxes = "110";

    std::vector<int> result = sol.minOperations(boxes);

    std::cout << "Result: ";
    for (int x : result) {
        std::cout << x << " ";
    }

    std::cout << std::endl;
    return 0;
}