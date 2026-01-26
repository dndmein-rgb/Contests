# [3820. Pythagorean Distance Nodes in a Tree](https://leetcode.com/problems/pythagorean-distance-nodes-in-a-tree)

## 🧠 Problem Statement

You are given a tree with `n` nodes labeled from `0` to `n - 1`.

You are also given:
- A list of edges describing the tree
- Three distinct nodes `x`, `y`, and `z`

A node `i` is called **special** if the distances from `i` to `x`, `y`, and `z` form a **Pythagorean triplet**.

That is, if after sorting the three distances:
a² + b² = c²


Return the number of special nodes in the tree.

---

## ✍️ Input

- Integer `n` — number of nodes
- `edges` — list of `n - 1` undirected edges
- Integers `x`, `y`, `z` — three distinct nodes

## 📤 Output

- An integer representing the number of special nodes

---

## 📌 Constraints

- `1 <= n <= 10^5`
- `edges.length == n - 1`
- `0 <= x, y, z < n`
- The given graph is a valid tree

---

## 🧪 Examples

### Example 1

**Input**
n = 5
edges = [[0,1],[1,2],[1,3],[3,4]]
x = 0, y = 2, z = 4


**Output**
1


**Explanation**

For node `1`, distances are:
dist(1,0) = 1
dist(1,2) = 1
dist(1,4) = 2


After sorting → `[1, 1, 2]`  
Since `1² + 1² ≠ 2²`, it is not special.

Only one node satisfies the Pythagorean condition.

---

## 🛠️ Approach

1. Build an adjacency list from the edges.
2. Run **BFS three times**:
   - From node `x`
   - From node `y`
   - From node `z`
3. For every node `i`:
   - Collect distances `(dx[i], dy[i], dz[i])`
   - Sort them
   - Check the Pythagorean condition
4. Count all nodes that satisfy it.

This works efficiently because BFS on a tree is linear.

---

## ⏱️ Complexity Analysis

- **Time Complexity:** `O(n)`
  - Three BFS traversals
  - One pass to validate all nodes
- **Space Complexity:** `O(n)`
  - Distance arrays and adjacency list

---

## ✅ Key Takeaway

This problem is not about geometry.  
It’s about recognizing that **tree distances are integers** and brute-force BFS is perfectly acceptable.

Once distances are known, the math is trivial.
If you tried anything more “clever” here, you probably wasted time.
