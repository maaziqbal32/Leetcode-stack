class Solution {
public:
    bool isPowerOfTwo(int n) {
        // A power of two has exactly one '1' bit in its binary representation
        return n > 0 && (n & (n - 1)) == 0;
    }
};
