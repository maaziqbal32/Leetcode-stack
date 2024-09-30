class Solution {
public:
    int reverse(int x) {
        int reversedNumber = 0;
        while (x != 0) {
            int pop = x % 10; // Extract the last digit
            x /= 10;          // Remove the last digit from the original number
            
            // Check for overflow before adding the new digit
            if (reversedNumber > INT_MAX/10 || (reversedNumber == INT_MAX / 10 && pop > 7)) 
                return 0;
            if (reversedNumber < INT_MIN/10 || (reversedNumber == INT_MIN / 10 && pop < -8)) 
                return 0;
            
            // Append the last digit to the reversed number
            reversedNumber = reversedNumber * 10 + pop;
        }
        return reversedNumber;
    }
};
