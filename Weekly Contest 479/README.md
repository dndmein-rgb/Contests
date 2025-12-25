# 🏁 Weekly Contest 479 Solutions

This folder contains my optimized solutions for LeetCode Weekly Contest 479. This contest involved a mix of bit manipulation, number theory with precomputation, and range-based health calculations.

---

## 🚀 Problems Overview

| Problem | Title | Difficulty | Key Concept | Time | Space |
| :--- | :--- | :--- | :--- | :--- | :--- |
| **Q1** | [3769. Sort Integers by Binary Reflection](#-q1-sort-integers-by-binary-reflection) | **Medium** | Bitwise Reversal | $O(N \log N \log V)$ | $O(1)$ |
| **Q2** | [3770. Largest Prime from Consecutive Prime Sum](#-q2-largest-prime-from-consecutive-prime-sum) | **Medium** | Sieve of Eratosthenes | $O(L \log \log L)$ | $O(L)$ |
| **Q3** | [3771. Total Score of Dungeon Runs](#-q3-total-score-of-dungeon-runs) | **Hard** | Prefix Sums / Binary Search | $O(N \log N)$ | $O(N)$ |

---

## 🛠️ Problem Breakdowns

### 🧩 Q1. Sort Integers by Binary Reflection
**Strategy:** Custom sorting using a bit-reversal logic.
* **Logic:** For each number, we strip bits from right to left (`n & 1`) and reconstruct them in reverse order.
* **Tie-breaking:** If the reflected values are identical, the original values are compared to maintain a stable relative order.



### 🧩 Q2. Largest Prime from Consecutive Prime Sum
**Strategy:** Using a Global Sieve to handle multiple queries efficiently.
* **Precomputation:** We generate a sieve up to $500,001$ only once using a static initialization block.
* **Consecutive Sum:** We iterate through the list of primes and maintain a cumulative sum starting from 2. If the current sum is prime (checked in $O(1)$ via the sieve), it becomes a candidate for the largest prime.



### 🧩 Q3. Total Score of Dungeon Runs
**Strategy:** Translating health requirements into a prefix sum inequality.
* **Condition:** For a hero to enter room $j$ starting from room $i$, their health must satisfy: $hp - (\text{prefix}[j] - \text{prefix}[i]) \ge rq[j]$.
* **Optimization:** Rearranging the formula gives $\text{prefix}[i] \ge \text{prefix}[j] + rq[j] - hp$.
* Since the `prefix` array is sorted (monotonic), we use **Binary Search** (`lower_bound`) to find the first valid index $i$ for every fixed end-point $j$.



---

## 📈 Performance Summary
* **Bit Manipulation:** Successfully handled variable-length binary reflections by stopping at the most significant bit.
* **Prime Logic:** Optimized the sieve to run globally, preventing $O(N \sqrt{N})$ timeouts on multiple test cases.
* **Dungeon Logic:** Reduced an $O(N^2)$ brute force to $O(N \log N)$ using prefix sums and binary search.

---
[← Back to Root Repository](../../README.md)
