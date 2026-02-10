# [3805. Count Caesar Cipher Pairs](https://leetcode.com/problems/count-caesar-cipher-pairs)

## Problem Statement
You are given an array of lowercase strings `words`.

Two strings form a **Caesar cipher pair** if one string can be obtained from the other by applying the **same cyclic shift** to every character.

Return the total number of such valid pairs.

---

## Constraints
- 1 ≤ words.length ≤ 10⁵
- 1 ≤ words[i].length ≤ 10⁵
- `words[i]` contains only lowercase English letters

---

## Approach
- Normalize each word to a **canonical form**:
  - Shift the word so that its first character becomes `'a'`.
  - Apply the same shift to all characters (with wrap-around).
- Words that are Caesar-shift equivalents will map to the **same normalized string**.
- Use a hash map to count frequencies:
  - For each normalized word, add the number of times it has appeared before to the answer.
  - Increment its frequency.

---

## Example
Input: ["abc", "bcd", "xyz", "yza"]
Normalized: ["abc", "abc", "abc", "abc"]
Output: 6


---

## Complexity Analysis
- **Time Complexity:** O(total characters in all words)
- **Space Complexity:** O(n × average word length)

---

## Key Insight
By shifting every word to start with `'a'`, all Caesar-equivalent strings collapse into th
