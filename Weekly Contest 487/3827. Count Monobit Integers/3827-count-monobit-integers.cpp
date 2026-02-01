class Solution {
public:
    int countMonobit(int n) {
        unordered_set<int> Monos = {0,1,3,7,15,31,63,127,255,511};
        int count = 0;
        for (int i = 0; i <= n; i++) {
            if (Monos.count(i)) count++;
        }
        return count;
    }
};
