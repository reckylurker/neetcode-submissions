class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::unordered_map<int, int> m;
        std::vector<int> out = {0, 0};
        int N = nums.size();
        for (int i = 0; i < N; ++i){
            if ( m.contains(target - nums[i]) ){
                return {m[target-nums[i]], i};
            }
            m[nums[i]] = i;
        }
        return out;
    }
};
