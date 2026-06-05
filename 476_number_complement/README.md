# Number Complement (LeetCode 476)

## Problem Statement

Given a positive integer `num`, output its complement number.

The complement strategy is to flip the bits of its binary representation.

---

## Example 1

### Input

```text
num = 5
```

### Binary Representation

```text
101
```

### Complement

```text
010
```

### Output

```text
2
```

---

## Example 2

### Input

```text
num = 1
```

### Binary Representation

```text
1
```

### Complement

```text
0
```

### Output

```text
0
```

---

## Approach

The bitwise NOT operator (`~`) flips all 32 bits of an integer.

However, we only want to flip the bits that belong to the number's binary representation.

### Step 1: Create a Mask

For a number with `n` bits, create a mask containing all `1`s.

Example:

```text
num = 5
Binary = 101
Mask   = 111
```

This is done using:

```cpp
mask = (mask << 1) | 1;
```

---

### Step 2: Flip the Bits

Use:

```cpp
~num
```

Example:

```text
num = 5

00000101
↓
11111010
```

---

### Step 3: Keep Only Relevant Bits

Apply the mask:

```cpp
(~num) & mask
```

Example:

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

## Dry Run

### Input

```text
num = 5
```

Build Mask:

```text
mask = 1
mask = 3
mask = 7
```

Binary:

```text
001
011
111
```

Complement:

```text
~5 = ...11111010
```

Apply Mask:

```text
11111010
&
00000111
---------
00000010
```

Output:

```text
2
```

---

## Code

```cpp
class Solution {
public:
    int findComplement(int num) {
        int m = num;
        int mask = 0;

        while (m != 0) {
            mask = (mask << 1) | 1;
            m = m >> 1;
        }

        int ans = (~num) & mask;
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

The loop runs once for each bit in the number.

---

### Space Complexity

```text
O(1)
```

Only a few integer variables are used.

---

## Key Concepts

- Bit Manipulation
- Bitwise Complement (`~`)
- Bitwise AND (`&`)
- Left Shift (`<<`)
- Right Shift (`>>`)
- Binary Masking

---

## Why This Works

A mask containing all `1`s ensures that only the significant bits of the number are considered.

Formula:

```text
Complement = (~num) & mask
```

This flips all meaningful bits while ignoring unwanted leading bits introduced by the `~` operator.

---

## Compilation

```bash
g++ main.cpp -o complement
```

## Run

```bash
./complement
```

---

## Sample Run

```text
Enter a positive integer: 5

Complement: 2
```

---

## Author

LeetCode #476 — Number Complement

Language: C++