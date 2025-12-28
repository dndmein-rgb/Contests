# 🏁 Weekly Contest 482 Solutions

This folder contains my optimized solutions for the problems featured in LeetCode Weekly Contest 482.

---

## 🚀 Problems Overview

| Problem | Difficulty | Key Concept | Time | Space |
| :--- | :--- | :--- | :--- | :--- |
| [3788. Max Score of a Split](#-3788-maximum-score-of-a-split) | **Medium** | Prefix/Suffix Arrays | $O(N)$ | $O(N)$ |
| [3789. Min Cost Required Items](#-3789-minimum-cost-to-acquire-required-items) | **Medium** | Greedy Case Analysis | $O(1)$ | $O(1)$ |
| [3790. Smallest All-Ones Multiple](#-3790-smallest-all-ones-multiple) | **Medium** | Modular Arithmetic | $O(K)$ | $O(1)$ |

---

## 🛠️ Problem Breakdowns

### 🧩 3788. Maximum Score of a Split
**Strategy:** To optimize the split evaluation, we avoid re-calculating sums for every possible index by using a pre-processing approach.
* **Mechanism:** We use **Prefix Sums** and **Suffix Sums** to store the properties of the left and right subarrays.
* **Logic:** By iterating through the string/array exactly once, we can calculate the score for each split point in constant time.


### 🧩 3789. Minimum Cost to Acquire Required Items
**Strategy:** This problem requires checking different greedy scenarios where buying "bundles" might be cheaper than individual items, even if it results in excess inventory.
* **Valid Purchase Scenarios:**
  1. **Strictly Individual:** No bundles at all.
  2. **Optimal Mixed:** Use bundles to cover the overlap between `need1` and `need2`, then buy the remainder individually.
  3. **Bulk Bundle:** Buy enough bundles to satisfy the larger requirement, effectively getting the smaller requirement "for free."
* **Result:** The answer is $\min(\text{Strategy 1, 2, 3})$.

### 🧩 3790. Smallest All-Ones Multiple
**Strategy:** Find the length of the smallest number $11...1$ divisible by $k$.
* **Prerequisite:** Numbers ending in $1$ are never divisible by $2$ or $5$. Thus, if $k \% 2 == 0$ or $k \% 5 == 0$, return $-1$.
* **Modular Iteration:** We generate the next all-ones remainder using the formula:
  $$rem = (rem \times 10 + 1) \pmod k$$
* **Pigeonhole Principle:** Since there are only $k$ possible remainders ($0$ to $k-1$), if we don't find a remainder of $0$ within $k$ steps, we are guaranteed to be in a cycle.


---

## 📈 Performance Summary
* All solutions utilized **optimal time complexities** ($O(1)$ to $O(N)$), ensuring they pass within the tight contest time limits.
* Used `long long` for calculations involving $10^9+$ values to prevent overflow errors.

---

## 📝 Recent Activity

| Name | Last Commit Message | Last Commit Date |
|:---|:---|:---|
| `3788. Maximum Score of a Split` | Create 3788. Maximum Score of a Split | 7 minutes ago |
| `3789. Minimum Cost to Acquire Required Items` | Create 3789. Minimum Cost to Acquire Required Items | 1 minute ago |
| `3790. Smallest All-Ones Multiple` | Create 3790. Smallest All-Ones Multiple | Just now |

---
[← Back to Root Repository](../../README.md)
