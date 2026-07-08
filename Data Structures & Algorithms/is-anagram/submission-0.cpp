class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()){
            return false;
        }
        int freq_1[26], freq_2[26];
        for (int i = 0; i < 26; ++i){
            freq_1[i] = 0;
            freq_2[i] = 0;
        }   
        int N = s.length();
        for (int i = 0; i < N; ++i){
            freq_1[s[i] - 'a']++;
            freq_2[t[i] - 'a']++;
        }
        for (int i = 0; i < 26; ++i){
            if (freq_1[i] != freq_2[i]) return false; 
        }
        return true;
    }
};
