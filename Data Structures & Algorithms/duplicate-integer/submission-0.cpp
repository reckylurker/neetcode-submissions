class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        std::unordered_map<int, int> freq;

        for (const int &e : nums){
            if (!freq.contains(e)){
                freq[e] = 0;
            }
            freq[e]++;
        }
        return freq.size() != nums.size();
    }
};