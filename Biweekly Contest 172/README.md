# 🏁 Biweekly Contest 172 Solutions

This folder contains my optimized solutions for the problems featured in LeetCode Biweekly Contest 172.

---

## 🚀 Problems Overview

| Problem | Difficulty | Key Concept | Time | Space |
| :--- | :--- | :--- | :--- | :--- |
| [Q1. Distinct Elements](#-q1-minimum-operations-for-distinct-elements) | **Easy** | Greedy / Hash Set | $O(N)$ | $O(N)$ |
| [Q2. Max Sum Divisible by 3](#-q2-maximum-sum-of-three-numbers) | **Medium** | Math / Remainder Buckets | $O(N \log N)$ | $O(N)$ |
| [Q3. Binary Swaps Score](#-q3-maximum-score-after-binary-swaps) | **Medium** | Max-Heap / Greedy | $O(N \log N)$ | $O(N)$ |

---

## 🛠️ Problem Breakdowns

### 🧩 Q1. Minimum Operations for Distinct Elements
**Strategy:** To minimize operations (removing blocks of 3 from the front), we find the **rightmost duplicate**. Every element from the start of the array up to that duplicate must be removed.
* **Logic:** $\text{Operations} = \lfloor (\text{index of last duplicate}) / 3 \rfloor + 1$.

### 🧩 Q2. Maximum Sum of Three Numbers Divisible by Three
**Strategy:** Group numbers by their remainders when divided by 3 ($r=0, r=1, r=2$).
* **Valid Triplet Sums:**
  1. $(0, 0, 0)$
  2. $(1, 1, 1)$
  3. $(2, 2, 2)$
  4. $(0, 1, 2)$
* We sort buckets in descending order and greedily pick the top 3 from valid combinations.



### 🧩 Q3. Maximum Score After Binary Swaps
**Strategy:** Since we can swap '1's in the binary string any number of times, we can essentially use a '1' to pick any number encountered so far.
* **Mechanism:** Use a **Max-Heap (Priority Queue)** to store values as we iterate. When we hit a `'1'`, we pop the largest value currently in the heap.



---

## 📈 Performance Summary
* All solutions passed with $O(N)$ or $O(N \log N)$ complexity.
* Used `long long` in Q3 to prevent integer overflow for high-score summations.

---
[← Back to Root Repository](../../README.md)
