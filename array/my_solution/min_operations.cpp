// Your Solution
#include <iostream>
#include <vector>
#include <string>
#include <cmath>

class Solution {
public:
    std::vector<int> minOperations(std::string boxes) {
        std::vector<int> positions, ans;
        int len = boxes.size();

        for (int i = 0; i < len; i++) {
            if (boxes[i] == '1')
                positions.push_back(i);
        }

        for (int i = 0; i < len; i++) {
            int sum = 0;
            for (int idx : positions) {
                int dst = std::abs(i - idx);
                sum += dst;
            }
            ans.push_back(sum);
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