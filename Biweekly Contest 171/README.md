# 🏁 Biweekly Contest 171 Solutions

This folder contains my optimized solutions for LeetCode Biweekly Contest 171. The problems in this contest focused heavily on **Number Theory**, **Precomputation**, and **Greedy Priority Queues**.

---

## 🚀 Problems Overview

| Problem | Title | Difficulty | Key Concept | Time | Space |
| :--- | :--- | :--- | :--- | :--- | :--- |
| **Q1** | [3765. Complete Prime Number](#-q1-complete-prime-number) | **Easy** | Primality / String Slicing | $O(D\sqrt{V})$ | $O(D)$ |
| **Q2** | [3766. Minimum Operations to Make Binary Palindrome](#-q2-minimum-operations-to-make-binary-palindrome) | **Medium** | Precomputation / BFS | $O(N + P)$ | $O(P)$ |
| **Q3** | [3767. Maximize Points After Choosing K Tasks](#-q3-maximize-points-after-choosing-k-tasks) | **Medium** | Greedy / Max-Heap | $O(N \log N)$ | $O(N)$ |

---

## 🛠️ Problem Breakdowns

### 🧩 Q1. Complete Prime Number
**Strategy:** A number is "Complete Prime" if every prefix and suffix is prime. 
* We convert the number to a string and check every substring starting from the first character and every substring ending at the last character.
* **Optimization:** Use an $O(\sqrt{N})$ primality test.

### 🧩 Q2. Minimum Operations to Make Binary Palindrome
**Strategy:** We need to find the minimum bit flips or operations to reach a binary palindrome.
* **Logic:** Precompute all binary palindromes within the given range constraints.
* Since the search space for binary palindromes is relatively small ($2^{20}$ range), we can treat this as a shortest-path problem or use a precomputed list and binary search/BFS to find the closest target.



### 🧩 Q3. Maximize Points After Choosing K Tasks
**Strategy:** You have tasks with different points and potential costs.
* **Logic:** This is a greedy optimization problem. By using a **Max-Heap (Priority Queue)**, we can always ensure that we are picking the task that provides the maximum marginal gain for each of our $K$ choices.
* As tasks are chosen, their values might change (decay or dependency), so the heap dynamically re-sorts to keep the best option at the top.



---

## ⚡ Performance Summary
* **Primality Testing:** Optimized to handle multiple prefix/suffix checks without redundant calculations.
* **Binary Palindromes:** Used bit manipulation to quickly check or generate palindromic properties.
* **Greedy Heaps:** Implemented `priority_queue` to handle the $K$-task selection in $O(K \log N)$ time.

---
[← Back to Root Repository](../../README.md)
