class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> count(n+1, 0);
        for (int i = 0; i <= n; ++i){
            int tmp = i;
            for (int j = 0; j < 10; ++j){
                count[i] += (tmp >> j) & 1;
            }
        }
        return count;
    }
};
