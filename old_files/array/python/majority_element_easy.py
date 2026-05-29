#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int findSecondMax(const vector<int>& nums) {
    int first = INT_MIN, second = INT_MIN;

    for (int num : nums) {
        if (num > first) {
            second = first;  // update second
            first = num;     // update first
        } else if (num > second && num < first) {
            second = num;    // update second if distinct
        }
    }

    if (second == INT_MIN) {
        throw runtime_error("No second maximum (array may have all equal elements or too few numbers).");
    }

    return second;
}

int main() {
    vector<int> nums = {10, 20, 4, 20, 5, 1};
    
    try {
        cout << "Second maximum is: " << findSecondMax(nums) << endl;
    } catch (const exception& e) {
        cout << "Error: " << e.what() << endl;
    }

    return 0;
}
