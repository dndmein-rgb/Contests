class Solution {
public:
    int centeredSubarrays(vector<int>& nums) {
        int n = nums.size(), count = 0;

        for (int i = 0; i < n; i++) {
            int sum = 0;
            unordered_set<int> st;
            for (int j = i; j < n; j++) {
                st.insert(nums[j]);
                sum += nums[j];
                if (st.count(sum))
                    count++;
            }
        }
        return count;
    }
};
