class Solution {
public:
    pair<int, int> convert_to_2d(int &t, int &n) const {
        return make_pair(t / n, t % n);
    }
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size(), n = matrix[0].size();
        int l = 0, r = m * n - 1;
        while (l <= r){
            pair<int, int> t = convert_to_2d(l, n);
            if (matrix[t.first][t.second] == target) return true;
            t = convert_to_2d(r, n);
            if (matrix[t.first][t.second] == target) return true;

            int mid = (l + r) / 2;
            t = convert_to_2d(mid, n);
            if (matrix[t.first][t.second] == target) return true;
            else if(matrix[t.first][t.second] < target) l = mid + 1;
            else r = mid - 1;
        }
        return false;
    }
};
