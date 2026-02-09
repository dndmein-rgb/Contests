# [3834. Merge Adjacent Equal Elements](https://leetcode.com/problems/merge-adjacent-equal-elements)

## Problem Statement
You are given an integer array `nums`.  
Traverse the array from left to right and merge **adjacent equal elements** as follows:

- If the current element is equal to the previous element in the result array,
  remove the previous element and insert **double its value**.
- Continue merging as long as adjacent equal elements exist.
- Return the final transformed array.

## Constraints
- 1 ≤ nums.length ≤ 10⁵  
- 1 ≤ nums[i] ≤ 10⁹  

## Approach
- Use a vector `ans` to simulate a stack.
- Iterate through the array:
  - For each element, keep merging while the top of the stack is equal.
  - Double the value on each merge.
  - Push the final value into the stack.
- This ensures all chain merges are handled correctly.

## Complexity Analysis
- **Time Complexity:** O(n) (each element is pushed and popped at most once)
- **Space Complexity:** O(n)
