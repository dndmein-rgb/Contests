# [3819. Rotate Non Negative Elements](https://leetcode.com/problems/rotate-non-negative-elements)

## 🧠 Problem Statement

You are given an integer array `nums` and an integer `k`.

Rotate **only the non-negative elements** of the array to the right by `k` positions.  
All negative elements must remain at their original indices.

Return the resulting array after performing the rotation.

---

## ✍️ Input

- An integer array `nums`
- An integer `k`

## 📤 Output

- The array after rotating only the non-negative elements

---

## 📌 Constraints

- `1 <= nums.length <= 10^5`
- `-10^9 <= nums[i] <= 10^9`
- `0 <= k <= 10^9`

---

## 🧪 Examples

### Example 1

**Input**
nums = [1, -1, 2, -2, 3]
k = 1


**Output**
[3, -1, 1, -2, 2]


**Explanation**

Non-negative elements are `[1, 2, 3]`.  
After rotating right by 1 → `[3, 1, 2]`.  
They are placed back at their original indices.

---

### Example 2

**Input**
nums = [-1, -2, -3]
k = 5


**Output**
[-1, -2, -3]


**Explanation**

There are no non-negative elements, so the array remains unchanged.

---

### Example 3

**Input**
nums = [4, 5, 6]
k = 2


**Output**
[5, 6, 4]


**Explanation**

All elements are non-negative, so this becomes a normal right rotation.

---

## 🛠️ Approach

1. Traverse the array and collect:
   - All non-negative elements
   - Their indices
2. Reduce `k` using modulo with the count of non-negative elements.
3. Rotate only the extracted non-negative values.
4. Place them back into their original positions.
5. Leave negative values untouched.

This isolates the moving parts instead of brute-forcing the whole array.

---

## ⏱️ Complexity Analysis

- **Time Complexity:** `O(n)`
- **Space Complexity:** `O(n)`

---

## ✅ Key Takeaway

The trick isn’t rotation.  
The trick is realizing **what is allowed to move and what is not**.  
Once you separate those, the solution becomes embarrassingly straightforward.
