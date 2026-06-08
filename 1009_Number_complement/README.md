# Number Complement (LeetCode 1009)

## Problem Statement

Given a non-negative integer `n`, return its bitwise complement.

The complement of an integer is obtained by flipping all bits in its binary representation.

---

## Examples

### Example 1

Input:
```text
5
```

Binary Representation:
```text
101
```

Complement:
```text
010
```

Output:
```text
2
```

---

### Example 2

Input:
```text
7
```

Binary Representation:
```text
111
```

Complement:
```text
000
```

Output:
```text
0
```

---

### Example 3

Input:
```text
10
```

Binary Representation:
```text
1010
```

Complement:
```text
0101
```

Output:
```text
5
```

---

## Approach

### Step 1: Handle Edge Case

If `n = 0`, its binary representation is:

```text
0
```

The complement becomes:

```text
1
```

So return `1`.

---

### Step 2: Create a Mask

Construct a mask having all bits set to `1` for the length of the binary representation.

Example:

For:

```text
n = 5
```

Binary:

```text
101
```

Mask:

```text
111
```

Code:

```cpp
mask = (mask << 1) | 1;
```

---

### Step 3: Flip the Bits

Use the bitwise NOT operator:

```cpp
~n
```

This flips all 32 bits.

---

### Step 4: Keep Only Relevant Bits

Apply the mask:

```cpp
ans = (~n) & mask;
```

This removes unwanted leading bits and keeps only the complement of the original binary representation.

---

## Dry Run

### Input

```text
n = 5
```

Binary:

```text
101
```

Build mask:

```text
001
011
111
```

Complement:

```text
~101 = ...11111010
```

Apply mask:

```text
11111010
&
00000111
---------
00000010
```

Result:

```text
2
```

---

## Code

```cpp
class Solution {
public:
    int bitwiseComplement(int n) {
        int m = n;
        int mask = 0;

        if (n == 0) {
            return 1;
        }

        while (m != 0) {
            mask = (mask << 1) | 1;
            m = m >> 1;
        }

        int ans = (~n) & mask;
        return ans;
    }
};
```

---

## Complexity Analysis

### Time Complexity

```text
O(log₂ n)
```

The loop runs once for each bit in the binary representation of `n`.

---

### Space Complexity

```text
O(1)
```

Only a few integer variables are used.

---

## Key Concepts

- Bitwise Complement (`~`)
- Bitwise AND (`&`)
- Left Shift (`<<`)
- Right Shift (`>>`)
- Binary Masking
- Bit Manipulation

---

## Compilation & Execution

Compile:

```bash
g++ main.cpp -o complement
```

Run:

```bash
./complement
```

### Sample Run

```text
Enter a non-negative integer: 5
Bitwise Complement: 2
```

---

## Author

LeetCode Problem #1009 - Complement of Base 10 Integer

Language: C++