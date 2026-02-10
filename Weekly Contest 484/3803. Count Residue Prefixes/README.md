# [3803. Count Residue Prefixes](https://leetcode.com/problems/count-residue-prefixes)

## Problem Statement
You are given a string `s`.

A prefix ending at index `i` (0-based) is called a **residue prefix** if:
- The number of **distinct characters** in the prefix is equal to  
  `(length of prefix) % 3`.

Return the total number of residue prefixes in the string.

---

## Constraints
- 1 ≤ s.length ≤ 10⁵
- `s` consists of lowercase English letters

---

## Approach
- Traverse the string from left to right.
- Maintain a set to keep track of **distinct characters** seen so far.
- For each prefix ending at index `i`:
  - Check if  
    ```
    distinct_characters == (i + 1) % 3
    ```
  - If true, increment the answer.
- The set dynamically updates as we extend the prefix.

---

## Complexity Analysis
- **Time Complexity:** O(n)  
- **Space Complexity:** O(1) (at most 26 characters in the set)

---

## Key Insight
Since the number of lowercase letters is limited, maintaining distinct characters using a set is efficient and allows constant-time checks per prefix.
