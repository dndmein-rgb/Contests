# 🏆 LeetCode Weekly Contest 478 Solutions

This repository contains the optimized C++ solutions for the problems from Weekly Contest 478.

---

/*
━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
🗓️ Problem 1: 3759. Count Elements With at Least K Greater Values
📅 Date: January 6, 2026
━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

🎯 Problem: 3759. Count Elements With at Least K Greater Values
📌 Link: https://leetcode.com/problems/count-elements-with-at-least-k-greater-values/
🏷️ Difficulty: Medium
🏆 Topics: Array, Sorting, Greedy

━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
📖 Problem Summary
━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

Goal:
- Find how many elements have at least `k` elements strictly greater than them.

Key Insight:
- In a sorted array, the element at index `n-k` acts as the threshold.
- If `nums[i] < nums[n-k]`, then `nums[n-k]` and all elements to its right (totaling `k` elements) are strictly greater than `nums[i]`.

━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
*/

class Solution1 {
public:
    int countElements(vector<int>& nums, int k) {
        int n = nums.size();
        if (k == 0) return n;
        if (k >= n) return 0;

        sort(nums.begin(), nums.end());
        int targetValue = nums[n - k];
        int count = 0;

        for (int i = 0; i < n; i++) {
            if (nums[i] < targetValue) count++;
            else break;
        }
        return count;
    }
};

/*
━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
🗓️ Problem 2: 3760. Maximum Substrings With Distinct Start
📅 Date: January 6, 2026
━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

🎯 Problem: 3760. Maximum Substrings With Distinct Start
📌 Link: https://leetcode.com/problems/maximum-substrings-with-distinct-start/
🏷️ Difficulty: Easy
🏆 Topics: String, Hash Table

━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
📖 Problem Summary
━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

Goal:
- Maximum substrings possible where each substring starts with a unique character.

Key Insight:
- The maximum number of substrings is simply the count of unique characters in the string, as each unique character can start at least one substring (itself).

━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
*/

class Solution2 {
public:
    int maxDistinct(string s) {
        unordered_set<char> distinct;
        for(char& c : s) distinct.insert(c);
        return distinct.size();
    }
};

/*
━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
🗓️ Problem 3: 3761. Minimum Absolute Distance Between Mirror Pairs
📅 Date: January 6, 2026
━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

🎯 Problem: 3761. Minimum Absolute Distance Between Mirror Pairs
📌 Link: https://leetcode.com/problems/minimum-absolute-distance-between-mirror-pairs/
🏷️ Difficulty: Medium/Hard
🏆 Topics: Hash Table, Math, Mirror Symmetry

━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
📖 Problem Summary
━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

Goal:
- Find the minimum distance $|i - j|$ where $nums[i] == reverse(nums[j])$.

Key Insight:
- Use a Hash Map to store the last seen index of a number's reverse.
- Process: Check if current number is in map -> if yes, update minDist -> store current number's reverse for future pairs.

━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
*/

class Solution3 {
public:
    int rev(int num) {
        int x = 0;
        while(num > 0) {
            x = x * 10 + (num % 10);
            num /= 10;
        }
        return x;
    }

    int minMirrorPairDistance(vector<int>& nums) {
        unordered_map<int, int> mp;
        int n = nums.size();
        int distance = 1e9;

        for(int i = 0; i < n; i++) {
            int x = nums[i];
            if(mp.count(x)) {
                distance = min(distance, i - mp[x]);
            }
            mp[rev(x)] = i;
        }
        return distance == 1e9 ? -1 : distance;
    }
};

/*
━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
⚡ Overall Complexity Analysis
━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

1. Count Elements: Time O(N log N), Space O(1)
2. Distinct Start: Time O(N), Space O(1)
3. Mirror Pairs:   Time O(N * log10(maxVal)), Space O(N)

━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
*/
