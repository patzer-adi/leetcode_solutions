# Reverse String (LeetCode 344)

## Problem Statement

Write a function that reverses a string.

The input string is given as an array of characters `s`.

You must modify the input array in-place with **O(1)** extra memory.

---

## Examples

### Example 1

Input:

```text
s = ['h','e','l','l','o']
```

Output:

```text
['o','l','l','e','h']
```

---

### Example 2

Input:

```text
s = ['H','a','n','n','a','h']
```

Output:

```text
['h','a','n','n','a','H']
```

---

## Approach

### Two-Pointer Technique

Use two pointers:

- `i` starts from the beginning.
- `j` starts from the end.

Swap the characters at both positions and move inward until the pointers meet.

---

### Algorithm

1. Initialize:
   ```cpp
   i = 0
   j = s.size() - 1
   ```

2. While `i < j`:
   - Swap `s[i]` and `s[j]`
   - Increment `i`
   - Decrement `j`

3. The string gets reversed in-place.

---

## Dry Run

### Input

```text
hello
```

Initial:

```text
h e l l o
^       ^
i       j
```

Swap:

```text
o e l l h
  ^   ^
  i   j
```

Swap:

```text
o l l e h
    ^
```

Result:

```text
olleh
```

---

## Code

```cpp
class Solution {
public:
    void reverseString(vector<char>& s) {
        int i = 0, j = s.size() - 1;

        while (i < j) {
            char temp = s[i];
            s[i] = s[j];
            s[j] = temp;

            i++;
            j--;
        }
    }
};
```

---

## Complexity Analysis

### Time Complexity

```text
O(n)
```

Each character is visited at most once.

---

### Space Complexity

```text
O(1)
```

The reversal is performed in-place using only a temporary variable.

---

## Key Concepts

- Two Pointer Technique
- In-Place Array Manipulation
- Character Swapping
- String Reversal

---

## Compilation & Execution

Compile:

```bash
g++ main.cpp -o reverseString
```

Run:

```bash
./reverseString
```

---

### Sample Run

```text
Enter a string: hello
Reversed String: olleh
```

---

## Why This Works

At every step:

- The leftmost character is swapped with the rightmost character.
- The pointers move toward the center.
- After all swaps, the string is reversed without using extra memory.

This satisfies the problem requirement of **in-place reversal with O(1) extra space**.

---

## Author

LeetCode Problem #344 - Reverse String

Language: C++