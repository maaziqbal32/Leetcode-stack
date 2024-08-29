class Solution {
public:
    int titleToNumber(string columnTitle) {
        int count = 0;
        for (char c : columnTitle) {
            int currentVal = c - 'A' + 1;
            count = count * 26 + currentVal;
        }
        return count;
    }
};