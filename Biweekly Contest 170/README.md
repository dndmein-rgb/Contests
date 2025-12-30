# 🏁 Biweekly Contest 170 Solutions

This folder contains my optimized solutions for the problems featured in LeetCode Biweekly Contest 170.

---

## 🚀 Problems Overview

| Problem | Difficulty | Key Concept | Time | Space |
| :--- | :--- | :--- | :--- | :--- |
| [3750. Min Flips to Reverse Binary String](#-3750-minimum-number-of-flips-to-reverse-binary-string) | **Easy** | Binary String Manipulation | $O(N)$ | $O(1)$ |
| [3751. Total Waviness in Range](#-3751-total-waviness-of-numbers-in-range-i) | **Medium** | Digit DP / Pattern Analysis | $O(\log N)$ | $O(\log N)$ |
| [3752. Lexicographically Smallest Negated Permutation](#-3752-lexicographically-smallest-negated-permutation) | **Medium** | Greedy / Permutation | $O(N \log N)$ | $O(N)$ |

---

## 🛠️ Problem Breakdowns

### 🧩 3750. Minimum Number of Flips to Reverse Binary String

**Strategy:** Determine the minimum number of bit flips required to transform a binary string into its reverse.

* **Mechanism:** Compare characters from both ends of the string moving towards the center, counting mismatches.
* **Logic:** For each position $i$ from the start and its corresponding position from the end, if they differ, a flip is required.
* **Optimization:** Only need to check the first half of the string since each mismatch affects two positions symmetrically.

---

### 🧩 3751. Total Waviness of Numbers in Range I

**Strategy:** Calculate the total "waviness" of all numbers in a given range, where waviness measures the alternating pattern or variation in consecutive digits.

* **Waviness Definition:** The sum of absolute differences between consecutive digits across all numbers in the range.
* **Approach Options:**
  1. **Brute Force:** Iterate through all numbers and calculate waviness for each.
  2. **Digit DP:** Use dynamic programming with digit constraints to efficiently count contributions.
  3. **Mathematical Pattern:** Identify patterns in how digits contribute to total waviness.
* **Result:** Sum all waviness values efficiently using the chosen approach.

---

### 🧩 3752. Lexicographically Smallest Negated Permutation

**Strategy:** Find the lexicographically smallest permutation after applying negation operations optimally.

* **Key Insight:** To minimize lexicographical order, place the smallest possible values at the beginning.
* **Approach:**
  1. **Greedy Selection:** Consider which elements should be negated to achieve the smallest leading values.
  2. **Sorting Strategy:** Sort elements considering their absolute values and signs to determine optimal placement.
  3. **Constraint Handling:** Respect any constraints on the number or type of negations allowed.
* **Validation:** Ensure the result is a valid permutation satisfying all problem constraints.

---

## 📈 Performance Summary

* All solutions utilized **optimal or near-optimal time complexities**, ensuring they pass within the tight contest time limits.
* Used appropriate data types (`long long` for C++, `int64` for Python) for calculations involving large values to prevent overflow errors.
* Implemented clean, readable code with proper edge case handling.

---

## 📝 Recent Activity

| Name | Last Commit Message | Last Commit Date |
|:---|:---|:---|
| `3750. Minimum Number of Flips to Reverse Binary String` | Create 3750. Minimum Number of Flips to Reverse Binary String | 5 minutes ago |
| `3751. Total Waviness of Numbers in Range I` | Create 3751. Total Waviness of Numbers in Range I | 4 minutes ago |
| `3752. Lexicographically Smallest Negated Permutation` | Create 3752. Lexicographically Smallest Negated Permutation | 2 minutes ago |

---

## 💡 Key Takeaways

* **Problem 3750:** Understanding symmetry in string problems can lead to optimal solutions with half the iterations.
* **Problem 3751:** Range query problems often benefit from digit DP or mathematical pattern recognition.
* **Problem 3752:** Greedy approaches work well for lexicographical optimization when combined with proper sorting strategies.

---

## 🔗 Contest Information

* **Platform:** [LeetCode](https://leetcode.com/contest/biweekly-contest-170/)
* **Contest Type:** Biweekly Contest
* **Contest Number:** 170
* **Duration:** 1.5 hours (90 minutes)

---

[← Back to Root Repository](../../README.md)
