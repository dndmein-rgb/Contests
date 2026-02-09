# [3835. Count Subarrays With Cost Less Than or Equal to K](https://leetcode.com/problems/count-subarrays-with-cost-less-than-or-equal-to-k)

## Problem Statement
You are given an integer array `nums` and an integer `k`.

The **cost** of a subarray is defined as:  
(max element of subarray − min element of subarray) × length of subarray


Return the total number of subarrays whose cost is **less than or equal to `k`**.

---

## Constraints
- 1 ≤ nums.length ≤ 10⁵
- 1 ≤ nums[i] ≤ 10⁹
- 0 ≤ k ≤ 10¹⁸

---

## Approach
- Use the **sliding window** technique.
- Maintain:
  - A **monotonic decreasing deque** to track the maximum element.
  - A **monotonic increasing deque** to track the minimum element.
- Expand the window to the right.
- If the cost exceeds `k`, shrink the window from the left until it becomes valid.
- For each right index, count all valid subarrays ending at that index.

---

## Complexity Analysis
- **Time Complexity:** `O(n)` (each element enters and leaves the deque once)
- **Space Complexity:** `O(n)` (for deques)

---

## Key Idea
Efficiently maintaining the minimum and maximum in a sliding window allows us to v
