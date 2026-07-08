class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum = 0;
        for (const int &e : nums){
            sum += e;
        }
        int N = nums.size();
        return (N * (N + 1)) / 2 - sum;
    }
};
