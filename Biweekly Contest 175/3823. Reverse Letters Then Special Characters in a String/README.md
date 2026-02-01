# [3823. Reverse Letters Then Special Characters in a String](https://leetcode.com/problems/reverse-letters-then-special-characters-in-a-string)

## Problem Statement
You are given a string `s` containing lowercase English letters and special characters.
Reverse the lowercase letters among themselves and reverse the special characters among themselves,
while keeping their original positions based on character type.

---
## Constraints
- 1 ≤ s.length ≤ 10⁵
- `s` consists of lowercase English letters and special characters
- Only characters `'a'` to `'z'` are considered letters

---

## Approach
1. Traverse the string and separate:
   - lowercase letters
   - special characters
2. Reverse both collections independently.
3. Rebuild the string:
   - if the position originally had a letter, take from reversed letters
   - otherwise, take from reversed special characters

This guarantees positions are preserved by type.

---

## Example
Input:
"a#b$c"


Output:
"b$c#a"


Explanation:
- Letters: a, b, c → reversed to c, b, a
- Special characters: #, $ → reversed to $, #
- Characters are placed back according to their original type positions

---

## Complexity Analysis
- Time Complexity: O(n)
- Space Complexity: O(n)

---

## Notes
- Only lowercase letters are considered alphabetic
- The solution avoids in-place swaps for clarity and correctness
