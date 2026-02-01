# [3827. Count Monobit Integers](https://leetcode.com/problems/count-monobit-integers)

## Problem Statement
A **monobit integer** is an integer whose binary representation contains only `1`s or `0`s (i.e., numbers like 0, 1, 3, 7, 15, etc.).  

Given an integer `n`, return the **count of monobit integers** in the range `[0, n]`.

---

## Constraints
- 0 ≤ n ≤ 10⁹

---

## Approach
1. Precompute the set of monobit integers that fit in the constraint range.  
2. Loop through all numbers from 0 to `n`.  
3. Increment a counter for each number present in the precomputed set.  
4. Return the final count.

Note: Since the largest monobit integer within `n ≤ 10⁹` is `2^9 - 1 = 511`, we can safely store them in a set.

---

## Example
Input:
n = 10


Output:
4


Explanation:
- Monobit integers in range [0,10]: 0, 1, 3, 7 → count = 4

---

## Complexity Analysis
- Time Complexity: O(n) (or O(1) if precomputed and checked using set)
- Space Complexity: O(1)
