class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::unordered_map<int, int> m;
        std::vector<int> out = {0, 0};
        int N = nums.size();
        for (int i = 0; i < N; ++i){
            if ( m.contains(nums[i]) ){
                m[nums[i]] = (m[nums[i]] < i) ? m[nums[i]] : i;
            }
            else{
                m[nums[i]] = i;
            }
            if ( m.contains(target - nums[i]) && m[target-nums[i]] != i){
                out[0] = i;
                out[1] = m[target-nums[i]];
                break;
            }
        }
        if (out[0] > out[1]) { std::swap(out[0], out[1]); }
        return out;
    }
};
