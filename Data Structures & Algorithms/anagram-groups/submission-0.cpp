class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> m;
        for (const string &s: strs){
            int N = s.length();
            vector<int> freq(26, 0);
            for (const char &c: s){
                freq[c - 'a']++;
            }
            string key;
            for ( const int &f : freq){
                key += "#" + to_string(f);
            }
            m[key].push_back(s);
        }
        vector<vector<string>> out;
        for( const auto& [key, value] : m){
            out.push_back(value);
        }
        return out;
    }
};
