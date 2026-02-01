# [3824. Minimum K to Reduce Array Within Limit](https://leetcode.com/problems/minimum-k-to-reduce-array-within-limit)

## Problem Statement
You are given an integer array `nums`.  
You need to choose an integer `k` and perform operations to reduce each element in `nums` to at most `k` by splitting it into smaller parts.  

Return the **minimum `k`** such that after splitting, the total number of parts does not exceed `k * k`.

---

## Constraints
- 1 ≤ nums.length ≤ 10⁵
- 1 ≤ nums[i] ≤ 10⁹

---

## Approach
1. Use **binary search** over possible `k` values.
2. For a given `k`, calculate the total number of parts needed:
parts_for_num = (num + k - 1) / k
total_parts = sum(parts_for_num for all nums)

3. If `total_parts <= k * k`, this `k` is valid. Try smaller `k`.
4. Otherwise, increase `k`.
5. Return the smallest valid `k`.

---

## Example
Input:
nums = [7, 17]


Output:
5


Explanation:
- For k = 5:
  - 7 → 2 parts: [5,2]
  - 17 → 4 parts: [5,5,5,2]
  - Total parts = 6 ≤ 5*5 = 25 → valid

---

## Complexity Analysis
- Time Complexity: O(n * log(maxNum))  
  (binary search over k with n elements per check)
- Space Complexity: O(1)
