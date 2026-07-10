class Solution {
public:
    long long comp_S(const vector<int> &piles, const int k){
        long long s = 0;
        for (int i = 0; i < piles.size(); ++i){
            s += ceil(piles[i] / (double) k);
        }
        std::cout << "k: " << k << " s: " << s << "\n";
        return s;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int n = piles.size();
        int max = 0;
        for (int i = 0; i < n; ++i){
            max = (max > piles[i]) ? max : piles[i];
        }
        int l = 1, r = max;
        while (l <= r){
            if ( comp_S(piles, l) <= (long long) h ) return l;
            int mid = floor((double) (l + r) / 2);
            if ( comp_S(piles, mid) <= (long long) h ) { r = mid; }
            else l = mid + 1;
        }
        return max;
    }
};
