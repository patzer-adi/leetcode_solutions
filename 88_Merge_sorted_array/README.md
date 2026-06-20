# 88. Merge Sorted Array

## Problem Statement

You are given two integer arrays `nums1` and `nums2`, sorted in non-decreasing order, and two integers `m` and `n`.

- `nums1` has a length of `m + n`.
- The first `m` elements of `nums1` represent valid elements.
- The last `n` elements of `nums1` are initialized to `0` and should be ignored.
- `nums2` contains `n` valid elements.

Merge `nums2` into `nums1` so that the resulting array is sorted in non-decreasing order.

The final sorted array should be stored inside `nums1`.

---

## Examples

### Example 1

Input:

nums1 = [1,2,3,0,0,0]
m = 3

nums2 = [2,5,6]
n = 3

Output:

[1,2,2,3,5,6]

---

### Example 2

Input:

nums1 = [1]
m = 1

nums2 = []
n = 0

Output:

[1]

---

### Example 3

Input:

nums1 = [0]
m = 0

nums2 = [1]
n = 1

Output:

[1]

---

## Constraints

- nums1.length == m + n
- nums2.length == n
- 0 <= m, n <= 200
- -10⁹ <= nums1[i], nums2[i] <= 10⁹

---

# Observation

A straightforward solution is:

1. Copy all elements of nums2 into nums1.
2. Sort nums1.

However, sorting requires:

```text
O((m+n) log(m+n))