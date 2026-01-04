# 🏁 Biweekly Contest 173 Solutions

This folder contains my optimized solutions for the problems featured in LeetCode Biweekly Contest 173.

---

## 🚀 Problems Overview

| Problem | Difficulty | Key Concept | Time | Space |
| :--- | :--- | :--- | :--- | :--- |
| [Q1. Reverse String Prefix](#-q1-3794-reverse-string-prefix) | **Easy** | Two Pointers / Simulation | $O(K)$ | $O(1)$ |
| [Q2. Min Subarray Distinct Sum](#-q2-3795-minimum-subarray-length-with-distinct-sum-at-least-k) | **Medium** | Sliding Window / Hash Map | $O(N)$ | $O(N)$ |
| [Q3. Constrained Sequence Max](#-q3-3796-find-maximum-value-in-a-constrained-sequence) | **Hard** | Two-Pass Greedy / DP | $O(N)$ | $O(N)$ |

---

## 🛠️ Problem Breakdowns

### 🧩 Q1. 3794. Reverse String Prefix
**Strategy:** Reverse the first $k$ characters of a string.
* **Logic:** Use the built-in `std::reverse` on the range `[begin, begin + k)`. By performing this in-place on the input string, we maintain a constant auxiliary space complexity.



### 🧩 Q2. 3795. Minimum Subarray Length With Distinct Sum At Least K
**Strategy:** Find the shortest subarray where the sum of unique elements meets a threshold $k$.
* **Logic:** We use a **Sliding Window** combined with an `unordered_map`. 
* **Mechanism:** The `curr_sum` only increases when a new element enters the window (frequency becomes 1) and only decreases when an element completely leaves the window (frequency becomes 0).



### 🧩 Q3. 3796. Find Maximum Value in a Constrained Sequence
**Strategy:** Determine the highest possible value in an array given fixed caps at certain indices and maximum allowed differences between adjacent elements.
* **Logic:** This is a constraint propagation problem solved in linear time. 
    1. **Forward Pass:** Update $maxAt[i+1]$ based on $maxAt[i] + diff[i]$.
    2. **Backward Pass:** Update $maxAt[i]$ based on $maxAt[i+1] + diff[i]$.
* **Result:** After both passes, every index holds the tightest possible upper bound. The answer is the maximum value found in the array.



---

## 💻 Implementation Highlights

* **In-Place Mutation:** Applied in Q1 to achieve $O(1)$ space.
* **Frequency Tracking:** Used `unordered_map` in Q2 to handle distinct element sums efficiently.
* **Greedy Propagation:** Used a two-pass linear approach in Q3 to avoid complex $O(N^2)$ or $O(N \log N)$ logic.

---

## 📈 Performance Summary
* All solutions are optimized to pass within the strict LeetCode time limits.
* Used `long long` for Q2 and Q3 to prevent overflow errors during large summation/accumulation steps.

---
[← Back to Root Repository](../../README.md)
