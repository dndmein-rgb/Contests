# [3836. Maximum Score Using Exactly K Pairs](https://leetcode.com/problems/maximum-score-using-exactly-k-pairs)

## Problem Statement
You are given an integer array `nums` and an integer `k`.  
Count the number of subarrays such that:

(maximum element − minimum element) × (length of subarray) ≤ k

Return the total number of such subarrays.

---

## Constraints
- 1 ≤ nums.length ≤ 10⁵
- 1 ≤ nums[i] ≤ 10⁹
- 1 ≤ k ≤ 10¹⁸

---

## Approach
- Use a **sliding window** technique with two **monotonic deques**:
  - One deque to maintain the maximum element in the current window
  - One deque to maintain the minimum element in the current window
- Expand the window using a right pointer.
- Shrink the window from the left whenever the condition is violated.
- For each valid window ending at index `r`, all subarrays starting from `l` to `r` are valid.

---

## Complexity Analysis
- **Time Complexity:** O(n)
- **Space Complexity:** O(n) (for deques)

---

## Key Insight
Efficiently tracking the maximum and minimum in a sliding window allows us to validate subarrays in linear time without recomputing values repeatedly.
