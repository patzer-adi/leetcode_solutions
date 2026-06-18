/*
 * ============================================================
 *  LeetCode 35 — Search Insert Position
 * ============================================================
 *  Given a sorted array of distinct integers and a target,
 *  return the index of the target if found, otherwise return
 *  the index where it would be inserted to keep the array sorted.
 *
 *  Constraints:
 *    - 1 <= nums.length <= 10^4
 *    - nums is sorted in ascending order (distinct values)
 *    - -10^4 <= nums[i], target <= 10^4
 * ============================================================
 */

#include <iostream>
#include <vector>
using namespace std;

// ─────────────────────────────────────────────
//  APPROACH 1: Linear Scan  [Your Original Solution]
//  Time:  O(n)  |  Space: O(1)
// ─────────────────────────────────────────────
class SolutionLinear {
public:
    int searchInsert(vector<int>& nums, int target) {
        for (int i = 0; i < (int)nums.size(); ++i) {
            if (nums[i] == target) {
                return i;               // Target found
            } else if (nums[i] > target) {
                return i;               // Insert before this position
            } else if (i == (int)nums.size() - 1) {
                return i + 1;           // Target larger than all elements
            }
        }
        return 0;
    }
};

// ─────────────────────────────────────────────
//  APPROACH 2: Binary Search  [Optimal — O(log n)]
//  Time:  O(log n)  |  Space: O(1)
//
//  Intuition:
//    At the end of binary search, `left` always points to
//    the first element >= target, which is exactly the
//    insert position (or found position).
// ─────────────────────────────────────────────
class SolutionBinary {
public:
    int searchInsert(vector<int>& nums, int target) {
        int left = 0, right = (int)nums.size() - 1;

        while (left <= right) {
            int mid = left + (right - left) / 2;  // Avoids integer overflow

            if (nums[mid] == target) {
                return mid;             // Found
            } else if (nums[mid] < target) {
                left = mid + 1;         // Search right half
            } else {
                right = mid - 1;        // Search left half
            }
        }

        return left;  // Insert position
    }
};

// ─────────────────────────────────────────────
//  Helper: Print test result
// ─────────────────────────────────────────────
void runTest(const string& label, vector<int> nums, int target,
             int expected, int resultLinear, int resultBinary) {
    cout << "━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━\n";
    cout << "  Test : " << label << "\n";
    cout << "  nums : [";
    for (int i = 0; i < (int)nums.size(); ++i)
        cout << nums[i] << (i + 1 < (int)nums.size() ? ", " : "");
    cout << "]\n";
    cout << "  target   : " << target << "\n";
    cout << "  expected : " << expected << "\n";
    cout << "  linear   : " << resultLinear  << (resultLinear  == expected ? " ✓" : " ✗") << "\n";
    cout << "  binary   : " << resultBinary  << (resultBinary  == expected ? " ✓" : " ✗") << "\n";
}

// ─────────────────────────────────────────────
//  Main — Test Cases
// ─────────────────────────────────────────────
int main() {
    SolutionLinear  sol1;
    SolutionBinary  sol2;

    cout << "\n╔════════════════════════════════════════╗\n";
    cout << "║  LeetCode 35 — Search Insert Position  ║\n";
    cout << "╚════════════════════════════════════════╝\n\n";

    // Test 1: Target exists in array
    {
        vector<int> nums = {1, 3, 5, 6};
        int target = 5, expected = 2;
        runTest("Target found", nums, target, expected,
                sol1.searchInsert(nums, target),
                sol2.searchInsert(nums, target));
    }

    // Test 2: Target between two elements
    {
        vector<int> nums = {1, 3, 5, 6};
        int target = 2, expected = 1;
        runTest("Insert in middle", nums, target, expected,
                sol1.searchInsert(nums, target),
                sol2.searchInsert(nums, target));
    }

    // Test 3: Target larger than all elements
    {
        vector<int> nums = {1, 3, 5, 6};
        int target = 7, expected = 4;
        runTest("Insert at end", nums, target, expected,
                sol1.searchInsert(nums, target),
                sol2.searchInsert(nums, target));
    }

    // Test 4: Target smaller than all elements
    {
        vector<int> nums = {1, 3, 5, 6};
        int target = 0, expected = 0;
        runTest("Insert at beginning", nums, target, expected,
                sol1.searchInsert(nums, target),
                sol2.searchInsert(nums, target));
    }

    // Test 5: Single element array — match
    {
        vector<int> nums = {5};
        int target = 5, expected = 0;
        runTest("Single element — found", nums, target, expected,
                sol1.searchInsert(nums, target),
                sol2.searchInsert(nums, target));
    }

    // Test 6: Single element array — no match
    {
        vector<int> nums = {5};
        int target = 3, expected = 0;
        runTest("Single element — not found (before)", nums, target, expected,
                sol1.searchInsert(nums, target),
                sol2.searchInsert(nums, target));
    }

    cout << "━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━\n\n";
    return 0;
}

/*
 * ─────────────────────────────────────────────
 *  HOW TO COMPILE & RUN IN VS CODE TERMINAL
 * ─────────────────────────────────────────────
 *
 *  g++ -std=c++17 -o solution solution.cpp && ./solution
 *
 * ─────────────────────────────────────────────
 *  EXPECTED OUTPUT
 * ─────────────────────────────────────────────
 *
 *  Test: Target found          → 2  ✓
 *  Test: Insert in middle      → 1  ✓
 *  Test: Insert at end         → 4  ✓
 *  Test: Insert at beginning   → 0  ✓
 *  Test: Single element found  → 0  ✓
 *  Test: Single element before → 0  ✓
 *
 * ─────────────────────────────────────────────
 */