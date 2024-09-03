class Solution {
public:
    int longestPalindrome(string s) {
        // Array to store the frequency of each character
        int charCount[128] = {0};  // There are 128 ASCII characters

        // Count the frequency of each character in the string
        for (char c : s) {
            charCount[c]++;
        }

        int palindromeLength = 0;
        bool hasOddCount = false;

        // Calculate the maximum length of the palindrome
        for (int count : charCount) {
            if (count % 2 == 0) {
                palindromeLength += count;  // Add all even counts
            } else {
                palindromeLength += count - 1;  // Add the largest even count less than count
                hasOddCount = true;  // Flag to check if there's any odd count
            }
        }

        // If there's an odd count, we can place exactly one odd-count character in the middle
        if (hasOddCount) {
            palindromeLength++;
        }

        return palindromeLength;
    }
};
