# Climbing Stairs (LeetCode 70)

## Problem Statement

You are climbing a staircase.

It takes `n` steps to reach the top.

Each time you can either:

- Climb 1 step
- Climb 2 steps

Return the number of distinct ways to reach the top.

---

## Example 1

### Input

```text
n = 2
```

### Output

```text
2
```

### Explanation

```text
1 + 1
2
```

---

## Example 2

### Input

```text
n = 3
```

### Output

```text
3
```

### Explanation

```text
1 + 1 + 1
1 + 2
2 + 1
```

---

## Approach

This problem follows the Fibonacci pattern.

To reach stair `n`, we can:

- Come from stair `n - 1` by taking 1 step.
- Come from stair `n - 2` by taking 2 steps.

Therefore:

```text
f(n) = f(n - 1) + f(n - 2)
```

Instead of using recursion, we store only the last two values and build the answer iteratively.

---

## Dry Run

### Input

```text
n = 5
```

Initial:

```text
a = 1
b = 2
```

Iterations:

```text
i = 3
c = 1 + 2 = 3

a = 2
b = 3
```

```text
i = 4
c = 2 + 3 = 5

a = 3
b = 5
```

```text
i = 5
c = 3 + 5 = 8

a = 5
b = 8
```

Return:

```text
8
```

---

## Code

```cpp
class Solution {
public:
    int climbStairs(int n) {
        if (n <= 2)
            return n;

        int a = 1, b = 2;
        int i = 3;

        while (i <= n) {
            int c = a + b;
            a = b;
            b = c;
            i++;
        }

        return b;
    }
};
```

---

## Complexity Analysis

### Time Complexity

```text
O(n)
```

The loop runs from 3 to n.

---

### Space Complexity

```text
O(1)
```

Only three variables (`a`, `b`, `c`) are used.

---

## Key Concepts

- Dynamic Programming
- Fibonacci Sequence
- Iterative Optimization
- Space Optimization

---

## Why This Works

Each stair can only be reached from:

```text
n - 1
```

or

```text
n - 2
```

Thus the total number of ways is:

```text
ways(n) = ways(n-1) + ways(n-2)
```

which is exactly the Fibonacci recurrence.

---

## Compilation

```bash
g++ main.cpp -o climbStairs
```

## Run

```bash
./climbStairs
```

---

## Sample Run

```text
Enter number of stairs: 5

Number of ways to climb 5 stairs: 8
```

---

## Author

LeetCode #70 — Climbing Stairs

Language: C++
