// Brute Force
#include <iostream>
#include <vector>
#include <string>
#include <cmath>

class Solution {
public:
    std::vector<int> minOperations(std::string boxes) {
        int n = boxes.size();
        std::vector<int> ans(n, 0);

        for (int i = 0; i < n; i++) {
            int operations = 0;

            for (int j = 0; j < n; j++) {
                if (boxes[j] == '1') {
                    operations += std::abs(i - j);
                }
            }

            ans[i] = operations;
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