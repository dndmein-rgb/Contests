
# 🏁 Weekly Contest 478 Solutions

This folder contains my optimized solutions for the problems featured in LeetCode Weekly Contest 478.

---

## 🚀 Problems Overview

| Problem | Difficulty | Key Concept | Time | Space |
| :--- | :--- | :--- | :--- | :--- |
| [Q1. Count Elements with K Greater](#-q1-count-elements-with-at-least-k-greater-values) | **Medium** | Sorting / Greedy | $O(N \log N)$ | $O(1)$ |
| [Q2. Max Substrings Distinct Start](#-q2-maximum-substrings-with-distinct-start) | **Easy** | Hash Set / Unique Counting | $O(N)$ | $O(1)$ |
| [Q3. Min Mirror Pair Distance](#-q3-minimum-absolute-distance-between-mirror-pairs) | **Medium** | Hash Map / Math Reversal | $O(N \cdot \text{digits})$ | $O(N)$ |

---

## 🛠️ Problem Breakdowns

### 🧩 Q1. Count Elements With at Least K Greater Values
**Strategy:** Identify elements that have at least $k$ strictly larger neighbors. In a sorted array, the $k$-th element from the end serves as the definitive boundary.
* **Mechanism:** 1. Sort the array. 
    2. Identify the threshold: $target = nums[n - k]$. 
    3. Any element strictly smaller than this target is guaranteed to have the elements from index $n-k$ to $n-1$ as strictly greater values.


### 🧩 Q2. Maximum Substrings With Distinct Start
**Strategy:** To maximize substrings with unique starting characters, we simply need to count how many unique characters are available in the input string.
* **Mechanism:** Each unique character $c$ present in the string can act as the start of at least one substring (the simplest being a substring of length 1). Therefore, the total count of unique characters is the maximum possible number of substrings.


### 🧩 Q3. Minimum Absolute Distance Between Mirror Pairs
**Strategy:** A mirror pair $(i, j)$ exists if $nums[i] = \text{reverse}(nums[j])$. We use a Hash Map to track the "looking for" state to find the closest pair in a single pass.
* **Mechanism:** 1. **Reversal:** A helper function reverses the digits of the current number. 
    2. **Map Tracking:** We store the last seen index of a number's reverse. 
    3. **Greedy Update:** For the current number $x$ at index $i$, if $x$ exists in the map, it means we found the mirror of a previously seen number. We calculate the distance $i - mp[x]$ and update the global minimum.


---

## 📈 Performance Summary
* **Q1:** Optimized with a single sort and linear scan, avoiding nested comparisons.
* **Q2:** Achieved $O(N)$ time with $O(1)$ auxiliary space (capped by character set size).
* **Q3:** Utilized a one-pass Hash Map approach to find the minimum distance in linear time relative to the array size, preventing $O(N^2)$ brute-force timeouts.

---
[← Back to Root Repository](../../README.md)
━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
*/
