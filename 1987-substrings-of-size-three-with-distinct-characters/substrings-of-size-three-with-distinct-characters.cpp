class Solution {
public:
    int countGoodSubstrings(string s) {
        int l = 0;
        int r = 2;
        int count = 0;
        
        while (r < s.length()) {
            if (s[l] != s[l + 1] && s[l] != s[r] && s[l + 1] != s[r]) {
                count++;
            }
            l++;
            r++;
        }
        
        return count;
    }
};
