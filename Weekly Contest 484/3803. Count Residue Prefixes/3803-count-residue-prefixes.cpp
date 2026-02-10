class Solution {
public:
    int residuePrefixes(string s) {
        int n = s.length();
        unordered_set<char> st;
        int count = 0;

        for (int i = 0; i < n; i++) {
            st.insert(s[i]);
            if (st.size() == (i + 1) % 3)
                count++;
        }
        return count;
    }
};
