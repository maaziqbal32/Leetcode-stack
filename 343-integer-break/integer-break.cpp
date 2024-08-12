class Solution {
public:
    int integerBreak(int n) {
        if (n < 2) {
            return 0;  // Edge case: integer break is not defined for n < 2
        }
        if (n == 2) {
            return 1;  // 2 can only be broken into 1 + 1
        }
        if (n == 3) {
            return 2;  // 3 can only be broken into 2 + 1
        }

        int ans = 1;
        while (n > 4) {
            ans *= 3;
            n -= 3;
        }
        
        return ans * n;  // Handle remaining 4 or less
    }
};
