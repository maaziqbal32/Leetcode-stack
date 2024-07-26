#include <unordered_map>
#include <string>

class Solution {
public:
    int romanToInt(std::string s) {
        // Define the map for Roman numeral values
        std::unordered_map<char, int> mp = {
            {'I', 1}, {'V', 5}, {'X', 10},
            {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}
        };

        int result = 0;
        int n = s.size();

        for (int i = 0; i < n; ++i) {
            if (i < n - 1 && mp[s[i]] < mp[s[i + 1]]) {
                result -= mp[s[i]];
            } else {
                result += mp[s[i]];
            }
        }

        return result;
    }
};
