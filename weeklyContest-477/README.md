# 🏁 Weekly Contest 477 Solutions

This folder contains my optimized solutions for the problems featured in LeetCode Weekly Contest 477.

---

## 🚀 Problems Overview

| Problem | Difficulty | Key Concept | Time | Space |
| :--- | :--- | :--- | :--- | :--- |
| [Q1. Concatenate Non-Zero Digits I](#-q1-concatenate-non-zero-digits-and-multiply-by-sum-i) | **Easy** | Math / Simulation | $O(\log N)$ | $O(1)$ |
| [Q2. Balanced XOR Subarray](#-q2-find-maximum-balanced-xor-subarray-length) | **Medium** | Prefix XOR / Hash Map | $O(N \log N)$ | $O(N)$ |
| [Q3. Concatenate Non-Zero Digits II](#-q3-concatenate-non-zero-digits-and-multiply-by-sum-ii) | **Hard** | Rolling Hash / Prefix Sums | $O(N + Q)$ | $O(N)$ |

---

## 🛠️ Problem Breakdowns

### 🧩 Q1. Concatenate Non-Zero Digits and Multiply by Sum I
**Strategy:** Extract digits using modulo 10 and filter out zeros. Instead of string manipulation, use a mathematical multiplier to preserve the original order.
* **Logic:** As we find each non-zero digit $d$ from right to left, update the number using: 
  $$num = (d \times multiplier) + num$$ 
  and increment the multiplier by $10$ for the next non-zero digit found.



### 🧩 Q2. Find Maximum Balanced XOR Subarray Length
**Strategy:** A subarray is "balanced" (equal odd/even) and has a 0-XOR sum if the cumulative state remains unchanged between two indices.
* **Mechanism:** Maintain a prefix XOR and a balance counter ($+1$ for odd, $-1$ for even). Store the state `{xor_prefix, balance_prefix}` in a map. If the state repeats at index $j$ after being seen at index $i$, the subarray $(i, j]$ satisfies both conditions.



### 🧩 Q3. Concatenate Non-Zero Digits and Multiply by Sum II
**Strategy:** For large range queries, brute force fails. We treat the non-zero digits as a base-10 rolling hash to allow $O(1)$ extraction of any substring value.
* **Mechanism:** 1. **prefSum**: Prefix sum of non-zero digits for $O(1)$ sum queries.
    2. **prefNum**: Rolling hash of digits where $prefNum[i] = (prefNum[i-1] \times 10 + digit) \pmod M$.
    3. **pow10**: Precomputed powers of 10 to "shift" prefixes correctly.
* **Formula:** The value of a range $[L, R]$ is calculated as:
  $$Value(L, R) = (PrefNum[R] - PrefNum[L-1] \times 10^{nz\_count(L, R)}) \pmod M$$



---

## 📈 Performance Summary
* **Q1:** Optimized to avoid string overhead, resulting in $O(1)$ auxiliary space.
* **Q2:** Used `std::map<pair<int, int>, int>` for coordinate-like states, ensuring $O(N \log N)$ stability.
* **Q3:** Achieved linear precomputation $O(N)$, allowing all $Q$ queries to be answered in constant time, preventing TLE (Time Limit Exceeded).

---
[← Back to Root Repository](../../README.md)
