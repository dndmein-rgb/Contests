# 🏁 Weekly Contest 483 Solutions

This folder contains my optimized solutions for the problems featured in LeetCode Weekly Contest 483.

---

## 🚀 Problems Overview

| Problem | Difficulty | Key Concept | Time | Space |
| :--- | :--- | :--- | :--- | :--- |
| [Q1. Largest Even Number](#-q1-3798-largest-even-number) | **Easy** | Greedy / String | $O(N)$ | $O(N)$ |
| [Q2. Word Squares II](#-q2-3799-word-squares-ii) | **Medium** | Brute Force / Permutation | $O(N^4)$ | $O(S)$ |
| [Q3. Min Cost Binary Equal](#-q3-3800-minimum-cost-to-make-two-binary-strings-equal) | **Hard** | Greedy / Case Analysis | $O(N)$ | $O(1)$ |

---

## 🛠️ Problem Breakdowns

### 🧩 Q1. 3798. Largest Even Number
**Strategy:** Locate the rightmost even digit (specifically '2' in this context) to form the longest even-valued prefix.
* **Logic:** A single linear scan identifies the last index of '2'. Truncating the string at this index ensures we have the largest possible even-ending prefix.

### 🧩 Q2. 3799. Word Squares II
**Strategy:** Assemble a 4x4 word boundary where the corners of four words match.
* **Logic:** We utilize four nested loops to permute through the word list. The validity is checked by comparing character indices: Top[0]=Left[0], Top[3]=Right[0], Bottom[0]=Left[3], and Bottom[3]=Right[3].

### 🧩 Q3. 3800. Minimum Cost to Make Two Binary Strings Equal
**Strategy:** Calculate the most economical way to resolve two types of bit mismatches (1→0 and 0→1).
* **Logic:** 1. Pair opposite mismatches using the cheaper option between a `swap` and two `flips`.
  2. Pair remaining same-type mismatches using the cheaper option between a `swap + penalty` and two `flips`.
  3. Resolve any singular remaining bit with a `flip`.

---

## 📈 Performance Summary
* **Q1 & Q3** achieve linear time complexity $O(N)$, making them highly efficient for large inputs.
* **Q2** is $O(N^4)$, which is acceptable given the constraints often found in word square problems (usually smaller $N$).
* Used `long long` for all cost calculations in Q3 to ensure precision.

---
[← Back to Root Repository](../../README.md)
