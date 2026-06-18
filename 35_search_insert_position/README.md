# 🔍 LeetCode 35 — Search Insert Position

## 📋 Problem Statement

Given a **sorted array** of distinct integers `nums` and a `target` value, return the **index** of `target` if it is found. If not found, return the index where it **would be inserted** in order to keep the array sorted.

> ⚡ You must write an algorithm with **O(log n)** runtime complexity.

---

## 📥 Examples

### Example 1
```
Input:  nums = [1, 3, 5, 6],  target = 5
Output: 2
```
`5` is found at index `2`.

### Example 2
```
Input:  nums = [1, 3, 5, 6],  target = 2
Output: 1
```
`2` is not in the array. It would be inserted between index `0` (value `1`) and index `1` (value `3`), so return `1`.

### Example 3
```
Input:  nums = [1, 3, 5, 6],  target = 7
Output: 4
```
`7` is greater than all elements, so it goes at the end → index `4`.

### Example 4
```
Input:  nums = [1, 3, 5, 6],  target = 0
Output: 0
```
`0` is smaller than all elements, so it goes at the beginning → index `0`.

---

## 🧩 Constraints

- `1 <= nums.length <= 10⁴`
- `-10⁴ <= nums[i] <= 10⁴`
- `nums` contains **distinct** values sorted in **ascending order**
- `-10⁴ <= target <= 10⁴`

---

## 💡 Solution Intuition

### Approach: Linear Scan (Brute Force)

The submitted solution uses a **linear scan** from left to right.

#### How it works:

Walk through each element of the array and check three conditions:

| Condition | Action |
|---|---|
| `nums[i] == target` | Target found — return `i` |
| `nums[i] > target` | We've gone past where target would be — return `i` |
| `i == last index` | Target is larger than everything — return `i + 1` |

#### Why this works:

Since the array is **sorted in ascending order**, as soon as we find an element **greater than** the target, we know the target isn't present — and that index is exactly where it should be inserted. If we exhaust the entire array without finding a match or a larger element, the target belongs at the very end.

#### Walkthrough — `nums = [1, 3, 5, 6]`, `target = 2`:

```
i=0 → nums[0]=1 < 2  → continue
i=1 → nums[1]=3 > 2  → return 1  ✅
```

#### Walkthrough — `nums = [1, 3, 5, 6]`, `target = 7`:

```
i=0 → nums[0]=1 < 7  → continue
i=1 → nums[1]=3 < 7  → continue
i=2 → nums[2]=5 < 7  → continue
i=3 → nums[3]=6 < 7  → i == last index → return 4  ✅
```

---

## ⏱️ Complexity Analysis

| | Complexity |
|---|---|
| **Time** | O(n) — linear scan in the worst case |
| **Space** | O(1) — no extra space used |

> 📝 **Note:** The problem asks for O(log n). The optimal solution uses **Binary Search**. The linear scan works but is not the intended approach for large inputs.

---

## 🚀 Optimal Approach — Binary Search (O log n)

```
left = 0, right = nums.size() - 1

While left <= right:
    mid = (left + right) / 2
    if nums[mid] == target  → return mid
    if nums[mid] < target   → move left pointer right (left = mid + 1)
    if nums[mid] > target   → move right pointer left (right = mid - 1)

Return left   ← this is the insert position
```

At the end of the loop, `left` naturally lands on the insert position because it always points to the first element **≥ target**.

---

## 🔑 Key Takeaway

> The elegance of this problem is that the **same variable** (`left` in binary search, or `i` in linear scan) serves dual purpose: it's both the **found index** and the **insert position**. You don't need separate logic for the two cases.