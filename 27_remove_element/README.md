# Remove Element (LeetCode 27)

## Problem Statement

Given an integer array `nums` and an integer `val`, remove all occurrences of `val` in-place.

The order of the elements may be changed.

Return the number of elements in `nums` which are not equal to `val`.

The first `k` elements of `nums` should contain the remaining elements.

---

## Example 1

### Input

```text
nums = [3,2,2,3]
val = 3
```

### Output

```text
k = 2
nums = [2,2]
```

---

## Example 2

### Input

```text
nums = [0,1,2,2,3,0,4,2]
val = 2
```

### Output

```text
k = 5
nums = [0,1,3,0,4]
```

---

## Approach

This solution uses the **Two Pointer Technique**.

### Idea

- Traverse the array using index `i`.
- Maintain another index `k` that points to the next position where a valid element should be placed.
- If the current element is not equal to `val`, copy it to position `k` and increment `k`.
- Elements equal to `val` are skipped.

This ensures that all valid elements are moved to the beginning of the array.

---

## Algorithm

1. Initialize:

```cpp
k = 0
```

2. Traverse the array.
3. If:

```cpp
nums[i] != val
```

store the element at index `k`.

4. Increment `k`.
5. Return `k`.

---

## Dry Run

### Input

```text
nums = [3,2,2,3]
val = 3
```

Initial:

```text
k = 0
```

### i = 0

```text
nums[0] = 3
```

Skip.

### i = 1

```text
nums[1] = 2
```

Store:

```text
nums[0] = 2
k = 1
```

### i = 2

```text
nums[2] = 2
```

Store:

```text
nums[1] = 2
k = 2
```

### i = 3

```text
nums[3] = 3
```

Skip.

Final Array:

```text
[2,2]
```

Return:

```text
k = 2
```

---

## Code

```cpp
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k = 0;

        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] != val) {
                nums[k++] = nums[i];
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

The array is traversed exactly once.

### Space Complexity

```text
O(1)
```

No extra array is used.

---

## Why This Works

The pointer `k` always indicates the position where the next valid element should be placed.

Whenever a non-target value is found:

```cpp
nums[k] = nums[i];
k++;
```

Thus, all elements different from `val` are shifted to the front of the array while maintaining their relative order.

---

## Key Concepts

- Two Pointer Technique
- In-Place Array Modification
- Array Traversal
- Element Filtering
- Space Optimization

---

## Compilation

```bash
g++ main.cpp -o removeElement
```

## Run

```bash
./removeElement
```

---

## Sample Run

```text
Enter number of elements: 8

Enter array elements:
0 1 2 2 3 0 4 2

Enter value to remove: 2

Number of remaining elements: 5

Array after removing 2:
0 1 3 0 4
```

---

## Author

LeetCode #27 — Remove Element

Language: C++