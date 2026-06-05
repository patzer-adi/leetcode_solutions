# 118. Pascal's Triangle

## Problem Link

https://leetcode.com/problems/pascals-triangle/

---

# Problem Statement

Given an integer `numRows`, return the first `numRows` rows of Pascal's Triangle.

In Pascal's Triangle:

- The first and last element of every row is always `1`.
- Every interior element is equal to the sum of the two elements directly above it.

For example:

```text
      1
     1 1
    1 2 1
   1 3 3 1
  1 4 6 4 1
```

---

# Intuition

- Start with the first row `[1]`.
- Every new row begins and ends with `1`.
- Each middle element is the sum of two adjacent elements from the previous row.
- Build the triangle row by row using the previous row.

---

# Approach

1. Create a 2D vector `result`.
2. Insert the first row `[1]`.
3. For each remaining row:
   - Add `1` at the beginning.
   - Generate middle elements using:
     `prevRow[j] + prevRow[j + 1]`
   - Add `1` at the end.
   - Store the row.
4. Return the completed triangle.

---

# Dry Run

Input:

```text
numRows = 5
```

Generated rows:

```text
[1]

[1,1]

[1,2,1]

[1,3,3,1]

[1,4,6,4,1]
```

Final Result:

```text
[
 [1],
 [1,1],
 [1,2,1],
 [1,3,3,1],
 [1,4,6,4,1]
]
```

---

# Complexity Analysis

## Time Complexity

O(n²)

## Space Complexity

O(n²)

---

# LeetCode Solution

```cpp
class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> result;

        if(numRows == 0)
            return result;

        result.push_back({1});

        for(int i = 1; i < numRows; i++)
        {
            vector<int> row;
            row.push_back(1);

            vector<int>& prevRow = result[i - 1];

            for(int j = 0; j < prevRow.size() - 1; j++)
            {
                row.push_back(prevRow[j] + prevRow[j + 1]);
            }

            row.push_back(1);
            result.push_back(row);
        }

        return result;
    }
};
```

# Key Takeaways

- Every row depends on the previous row.
- First and last elements are always `1`.
- Middle elements come from adjacent values in the previous row.
- Time Complexity: O(n²)
- Space Complexity: O(n²)
