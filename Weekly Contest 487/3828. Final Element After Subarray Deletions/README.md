# [3828. Final Element After Subarray Deletions](https://leetcode.com/problems/final-element-after-subarray-deletions)

## Problem Statement
You are given an integer array `nums`.  
You repeatedly perform the following operation until only one element remains:

- Delete a contiguous subarray of **length ≥ 1** from either the **start** or **end** of the array.

Return the **final remaining element** after performing these deletions optimally.

---

## Constraints
- 1 ≤ nums.length ≤ 10⁵
- 1 ≤ nums[i] ≤ 10⁹

---

## Approach
1. Observe that any subarray deletion of length ≥ 1 at either end will eventually leave either:
   - The first element
   - The last element
2. To maximize the remaining element (or determine the final element), take:
max(nums[0], nums[n-1])


This works because intermediate elements can always be removed via deletions.

---

## Example
Input:
nums = [2, 5, 1, 3]


Output:
3


Explanation:
- You can delete subarrays from start/end to eventually leave the max of first or last element (2 vs 3) → 3

---

## Complexity Analysis
- Time Complexity: O(1)
- Space Complexity: O(1)
