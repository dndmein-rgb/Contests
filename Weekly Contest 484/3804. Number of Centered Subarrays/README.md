# [3804. Number of Centered Subarrays](https://leetcode.com/problems/number-of-centered-subarrays)

## Problem Statement
You are given an integer array `nums`.

A subarray is called **centered** if the **sum of its elements** is equal to **one of the elements present inside that subarray**.

Return the total number of centered subarrays.

---

## Constraints
- 1 ≤ nums.length ≤ 10⁵  
- 1 ≤ nums[i] ≤ 10⁹  

---

## Approach
- Fix a starting index `i`.
- Extend the subarray to the right using index `j`.
- Maintain:
  - `sum` → sum of elements in the current subarray
  - `unordered_set` → elements present in the current subarray
- At each extension, check:
if (sum exists in the set)

then the subarray is centered.
- Count all such valid subarrays.

---

## Complexity Analysis
- **Time Complexity:** O(n²)  
- **Space Complexity:** O(n)

---

## Note
This brute-force approach works for smaller constraints.  
For large inputs, an optimized solution would be required.
