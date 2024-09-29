class Solution {
public:
    bool isUgly(int n) {
        // Ugly numbers are positive
        if (n <= 0) return false;

        // Continuously divide n by 2, 3, and 5
        while (n % 2 == 0) n /= 2;
        while (n % 3 == 0) n /= 3;
        while (n % 5 == 0) n /= 5;

        // After dividing, if n becomes 1, it is an ugly number
        return n == 1;
    }
};
