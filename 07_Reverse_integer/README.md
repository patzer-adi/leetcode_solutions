# Reverse Integer (LeetCode 7)

## Problem Statement

Given a signed 32-bit integer `x`, return `x` with its digits reversed.

If reversing `x` causes the value to go outside the signed 32-bit integer range:

[-2³¹, 2³¹ - 1]

then return `0`.

Assume the environment does not allow storing 64-bit integers.

---

## Examples

### Example 1

Input:
```text
123
```

Output:
```text
321
```

### Example 2

Input:
```text
-123
```

Output:
```text
-321
```

### Example 3

Input:
```text
120
```

Output:
```text
21
```

### Example 4

Input:
```text
1534236469
```

Output:
```text
0
```

(Overflow occurs after reversal.)

---

## Approach

1. Extract the last digit using:
   ```cpp
   rem = x % 10;
   ```

2. Before updating the reversed number, check whether multiplying the current result by 10 would exceed the 32-bit integer range.

3. If overflow is detected, return `0`.

4. Otherwise:
   ```cpp
   rev = rev * 10 + rem;
   ```

5. Remove the last digit:
   ```cpp
   x = x / 10;
   ```

6. Continue until all digits are processed.

---

## Code

```cpp
class Solution {
public:
    int reverse(int x) {
        long int rev = 0, rem = 0;

        while (x != 0) {
            rem = x % 10;

            if ((rev > INT_MAX / 10) || (rev < INT_MIN / 10)) {
                return 0;
            }

            rev = (rev * 10) + rem;
            x = x / 10;
        }

        return rev;
    }
};
```

---

## Complexity Analysis

### Time Complexity

```text
O(log₁₀(n))
```

The loop runs once for every digit in the integer.

### Space Complexity

```text
O(1)
```

Only a few extra variables are used.

---

## Key Concepts

- Modulo Operator (`%`) for extracting digits.
- Integer Division (`/`) for removing digits.
- Overflow Handling using:
  ```cpp
  INT_MAX
  INT_MIN
  ```
- Iterative digit manipulation.

---

## Author

LeetCode Problem #7 - Reverse Integer
Language: C++