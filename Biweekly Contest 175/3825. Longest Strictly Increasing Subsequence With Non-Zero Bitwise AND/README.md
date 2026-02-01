# [3825. Longest Strictly Increasing Subsequence With Non-Zero Bitwise AND](https://leetcode.com/problems/longest-strictly-increasing-subsequence-with-non-zero-bitwise-and)

## Problem Statement
Given an integer array `nums`, find the length of the **longest strictly increasing subsequence** where the **bitwise AND of all elements in the subsequence is non-zero**.

---

## Constraints
- 1 ≤ nums.length ≤ 10⁵
- 1 ≤ nums[i] ≤ 10⁹

---

## Approach
1. For each bit position `i` from 0 to 31:
   - Filter the array for numbers with the `i`-th bit set.
   - Compute the **Longest Increasing Subsequence (LIS)** for this filtered array.
2. Track the maximum LIS length among all bit positions.
3. Return the maximum length found.

The key observation is that a subsequence with a non-zero AND must share at least one common set bit.

---

## Example
Input:
nums = [1, 3, 5, 7]


Output:
3


Explanation:
- Bit 0: [1, 3, 5, 7] → LIS = 4
- Bit 1: [3, 5, 7] → LIS = 3
- Bit 2: [5, 7] → LIS = 2
- Maximum length among all bits = 4

---

## Complexity Analysis
- Time Complexity: O(32 * n * log n) ≈ O(n log n)
- Space Complexity: O(n)
