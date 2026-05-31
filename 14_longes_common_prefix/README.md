# Longest Common Prefix (LeetCode 14)

## Problem Statement

Write a function to find the longest common prefix string amongst an array of strings.

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

### Explanation

There is no common prefix among the input strings.

---

## Approach

The first string is used as a reference.

For each character in the first string:

1. Store the current character.
2. Compare it with the character at the same position in all other strings.
3. If any string:
   - ends before that position, or
   - has a different character,
   
   stop the process.
4. Otherwise, add the character to the answer.

The accumulated characters form the longest common prefix.

---

## Algorithm

1. Initialize an empty string `ans`.
2. Handle the edge case when the vector is empty.
3. Traverse each character of the first string.
4. Compare the character with all other strings.
5. If all strings match:
   - append the character to `ans`.
6. Otherwise:
   - break the loop.
7. Return `ans`.

---

## Dry Run

### Input

```text
["flower","flow","flight"]
```

Initial:

```text
ans = ""
```

Check index 0:

```text
f == f == f
```

ans:

```text
"f"
```

Check index 1:

```text
l == l == l
```

ans:

```text
"fl"
```

Check index 2:

```text
o == o != i
```

Mismatch found.

Stop.

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

        if(strs.empty())
            return ans;

        for(int i = 0; i < strs[0].length(); i++) {
            char ch = strs[0][i];
            bool match = true;

            for(int j = 1; j < strs.size(); j++) {
                if(strs[j].size() <= i || strs[j][i] != ch) {
                    match = false;
                    break;
                }
            }

            if(!match)
                break;
            else
                ans.push_back(ch);
        }

        return ans;
    }
};
```

---

## Complexity Analysis

### Time Complexity

```text
O(n × m)
```

Where:

- n = number of strings
- m = length of the shortest common prefix

Each character position is compared across all strings.

---

### Space Complexity

```text
O(1)
```

Ignoring the output string.

No extra data structures are used.

---

## Key Concepts

- String Traversal
- Character Comparison
- Nested Loops
- Prefix Matching
- Arrays of Strings

---

## Why This Works

The longest common prefix must begin at the first character of every string.

By checking characters column-wise:

```text
flower
flow
flight
```

we ensure that every character added to the answer is common to all strings.

The first mismatch determines where the common prefix ends.

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
Enter number of strings: 3

Enter the strings:
flower
flow
flight

Longest Common Prefix: fl
```

---

## Author

LeetCode #14 — Longest Common Prefix

Language: C++