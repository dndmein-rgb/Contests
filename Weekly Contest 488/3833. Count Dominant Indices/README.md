# [3833. Count Dominant Indices](https://leetcode.com/problems/count-dominant-indices)

## Problem Statement
You are given an integer array `nums`.  
An index `i` is called **dominant** if `nums[i]` is strictly greater than the **average** of all elements to its right.

Return the total number of dominant indices in the array.

## Constraints
- 1 ≤ nums.length ≤ 10⁵  
- 1 ≤ nums[i] ≤ 10⁹  

## Approach
- Traverse the array from **right to left**.
- Maintain:
  - `sum` → sum of elements to the right of the current index
  - `count` → number of elements to the right
- For each index `i`, check if:
nums[i] > sum / count

- If true, increment the answer.
- Update the running sum as you move left.

This avoids recomputing averages repeatedly and runs efficiently in one pass.

## Complexity Analysis
- **Time Complexity:** O(n)
- **Space Complexity:** O(1)
