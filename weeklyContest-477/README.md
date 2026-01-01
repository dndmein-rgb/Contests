# LeetCode Weekly Contest 477 Solutions

This repository contains optimized C++ solutions for the problems from **LeetCode Weekly Contest 477** (December 21, 2025). Each solution is designed for maximum efficiency and includes a breakdown of the logic used.

---

## 📂 Repository Structure

| Problem # | Name | Last Commit Message | Date |
| :--- | :--- | :--- | :--- |
| **3754** | [Concatenate Non-Zero Digits and Multiply by Sum I](#3754-i) | Create 3754. Concatenate Non-Zero Digits and Multiply by Sum I | 2 weeks ago |
| **3755** | [Find Maximum Balanced XOR Subarray Length](#3755) | Create 3755. Find Maximum Balanced XOR Subarray Length | 2 weeks ago |
| **3756** | [Concatenate Non-Zero Digits and Multiply by Sum II](#3756-ii) | Update 3756. Concatenate Non-Zero Digits and Multiply by Sum II | 2 weeks ago |

---

## 🎯 Problem Summaries

### 3754. Concatenate Non-Zero Digits and Multiply by Sum I
**Difficulty:** Easy  
**Topics:** Math, Simulation  
**Logic:** Extract digits from right-to-left using `n % 10`. To maintain the original order without using strings, we use a `multiplier` that grows by powers of 10. Each non-zero digit is placed at the "front" of the number being built.  
**Complexity:** $O(\log_{10} N)$ Time | $O(1)$ Space.



### 3755. Find Maximum Balanced XOR Subarray Length
**Difficulty:** Medium  
**Topics:** Prefix XOR, Hash Table, Prefix Sum  
**Logic:** A subarray is "balanced" and has a 0-XOR sum if the state `{PrefixXor, OddEvenDifference}` is identical at two different indices. We use a `std::map` to store the first occurrence of each state to calculate the maximum distance.  
**Complexity:** $O(N \log N)$ Time | $O(N) Space.



### 3756. Concatenate Non-Zero Digits and Multiply by Sum II
**Difficulty:** Hard  
**Topics:** Rolling Hash, Prefix Sum, Modular Arithmetic  
**Logic:** This version requires handling large queries ($10^5$). We precompute:
1. `prefSum`: Prefix sum of non-zero digits.
2. `prefNum`: Prefix value of digits treated as a rolling hash (base 10).
3. `nzCount`: Running count of non-zero digits to determine the shift.
**Complexity:** $O(N + Q)$ Time | $O(N)$ Space.



---

## 🛠️ Usage

Each solution is contained within a `Solution` class. To test locally:

1. Copy the code into your IDE.
2. Provide the necessary headers:
   ```cpp
   #include <iostream>
   #include <vector>
   #include <string>
   #include <algorithm>
   #include <map>
   #include <unordered_map>
   using namespace std;
