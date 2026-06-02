# Remove Duplicates from Sorted Array (LeetCode 26)

## Problem Statement

Given an integer array `nums` sorted in non-decreasing order, remove the duplicates in-place such that each unique element appears only once.

The relative order of the elements should remain the same.

Return the number of unique elements `k`.

The first `k` elements of `nums` should contain the unique elements.

---

## Example 1

### Input

```text
nums = [1,1,2]
```

### Output

```text
k = 2
nums = [1,2,_]
```

---

## Example 2

### Input

```text
nums = [0,0,1,1,1,2,2,3,3,4]
```

### Output

```text
k = 5
nums = [0,1,2,3,4,_,_,_,_,_]
```

---

## Approach

This problem is solved using the **Two Pointer Technique**.

### Idea

- Since the array is already sorted, duplicate elements appear next to each other.
- Use:
  - `i` → scans the array.
  - `k` → points to the next position where a unique element should be placed.

Whenever a new unique element is found:

```cpp
nums[k] = nums[i];
k++;
```

This overwrites duplicates while keeping unique elements at the beginning of the array.

---

## Algorithm

1. If the array is empty, return `0`.
2. Initialize:

```cpp
k = 1
```

3. Traverse the array from index `1`.
4. Compare current element with previous element.
5. If different:
   - Place it at index `k`.
   - Increment `k`.
6. Return `k`.

---

## Dry Run

### Input

```text
[1,1,2,2,3]
```

Initial:

```text
k = 1
```

### i = 1

```text
1 == 1
```

Duplicate → Ignore

### i = 2

```text
2 != 1
```

Store:

```text
nums[1] = 2
k = 2
```

Array:

```text
[1,2,2,2,3]
```

### i = 3

```text
2 == 2
```

Duplicate → Ignore

### i = 4

```text
3 != 2
```

Store:

```text
nums[2] = 3
k = 3
```

Array:

```text
[1,2,3,2,3]
```

Return:

```text
k = 3
```

Unique elements:

```text
[1,2,3]
```

---

## Code

```cpp
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k = 1;

        if (nums.empty())
            return 0;

        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] != nums[i - 1]) {
                nums[k] = nums[i];
                k++;
            }
        }

        return k;
    }
};
```

---

## Complexity Analysis

### Time Complexity

```text
O(n)
```

The array is traversed once.

### Space Complexity

```text
O(1)
```

No extra array is used.

---

## Why This Works

Because the array is sorted:

```text
1 1 2 2 3 3 4
```

All duplicates are adjacent.

Whenever:

```cpp
nums[i] != nums[i - 1]
```

a new unique element is found.

The pointer `k` ensures all unique elements are moved to the front of the array.

---

## Key Concepts

- Two Pointer Technique
- In-Place Array Modification
- Sorted Arrays
- Duplicate Removal
- Array Traversal

---

## Compilation

```bash
g++ main.cpp -o removeDuplicates
```

## Run

```bash
./removeDuplicates
```

---

## Sample Run

```text
Enter number of elements: 10

Enter sorted array elements:
0 0 1 1 1 2 2 3 3 4

Number of unique elements: 5

Array after removing duplicates:
0 1 2 3 4
```

---

## Author

LeetCode #26 — Remove Duplicates from Sorted Array

Language: C++