# 66. Plus One

## Problem Statement

You are given a large integer represented as an array of digits.

Each element in the array contains a single digit, and the digits are stored from left to right in order of significance.

Increment the integer by one and return the resulting array of digits.

---

## Examples

### Example 1

Input:

nums = [1,2,3]

Output:

[1,2,4]

Explanation:

123 + 1 = 124

---

### Example 2

Input:

nums = [4,3,2,1]

Output:

[4,3,2,2]

Explanation:

4321 + 1 = 4322

---

### Example 3

Input:

nums = [9]

Output:

[1,0]

Explanation:

9 + 1 = 10

---

## Constraints

- 1 <= digits.length <= 100
- 0 <= digits[i] <= 9
- The number does not contain leading zeros.

---

# Intuition

When adding 1 to a number, we always start from the last digit.

There are two possibilities:

1. The current digit is less than 9.
   - Simply increment it by 1.
   - No carry is generated.
   - Return the result immediately.

2. The current digit is 9.
   - Adding 1 makes it 10.
   - Store 0 and carry 1 to the previous digit.

If every digit is 9, then after processing all digits we still have a carry.

For example:

```text
999 + 1 = 1000