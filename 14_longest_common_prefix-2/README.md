# Longest Common Prefix (LeetCode 14)

## Problem Statement

Write a function to find the longest common prefix string among an array of strings.

If there is no common prefix, return an empty string `""`.

---

## Example 1

### Input

```text
["flower","flow","flight"]
```

### Output

```text
"fl"
```

---

## Example 2

### Input

```text
["dog","racecar","car"]
```

### Output

```text
""
```

There is no common prefix among the strings.

---

## Approach (Sorting Method)

This solution uses sorting to simplify the comparison.

### Key Observation

After sorting:

- The first string (`front()`) becomes lexicographically smallest.
- The last string (`back()`) becomes lexicographically largest.

The longest common prefix of the entire array must also be the common prefix between these two strings.

Therefore, we only need to compare:

```cpp
strs.front()
```

and

```cpp
strs.back()
```

---

## Algorithm

1. If the vector is empty, return `""`.
2. Sort the array of strings.
3. Store:
   - First string → `str_start`
   - Last string → `str_last`
4. Compare characters one by one.
5. Add matching characters to the answer.
6. Stop when a mismatch occurs.
7. Return the accumulated prefix.

---

## Dry Run

### Input

```text
["flower","flow","flight"]
```

After sorting:

```text
["flight","flow","flower"]
```

First String:

```text
flight
```

Last String:

```text
flower
```

Comparison:

```text
f == f ✓
l == l ✓
i != o ✗
```

Common Prefix:

```text
fl
```

Output:

```text
"fl"
```

---

## Code

```cpp
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans = "";

        if(strs.empty()) return ans;

        sort(strs.begin(), strs.end());

        string str_start = strs.front();
        string str_last = strs.back();

        int i = 0;

        while(i < str_start.size() && i < str_last.size()) {
            if(str_start[i] == str_last[i]) {
                ans += str_start[i];
                i++;
            }
            else {
                break;
            }
        }

        return ans;
    }
};
```

---

## Complexity Analysis

### Time Complexity

Sorting:

```text
O(n log n)
```

Comparing first and last strings:

```text
O(m)
```

Where:

- n = number of strings
- m = length of the common prefix

Overall:

```text
O(n log n + m)
```

---

### Space Complexity

```text
O(1)
```

Ignoring the output string.

No additional data structures are used.

---

## Why This Works

After sorting, strings with similar prefixes become adjacent.

The maximum difference among all strings is captured by:

```cpp
first string
```

and

```cpp
last string
```

If these two strings share a prefix, every string between them in sorted order must share that prefix as well.

Therefore:

```text
LCP(all strings)
=
LCP(first string, last string)
```

---

## Compilation

```bash
g++ main.cpp -o longestCommonPrefix
```

## Run

```bash
./longestCommonPrefix
```

---

## Sample Run

```text
Enter number of strings: 4

Enter the strings:
flower
flow
flight
flame

Longest Common Prefix: fl
```

---

## Key Concepts

- Lexicographical Sorting
- String Comparison
- Longest Common Prefix
- Greedy Observation
- STL sort()

---

## Author

LeetCode #14 — Longest Common Prefix

Language: C++