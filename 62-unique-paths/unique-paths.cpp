class Solution {
public:
    int uniquePaths(int m, int n) {
        // Initialize the dp array with 1s for the first row and column
        int dp[m][n];
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                // Fill the first row and column with 1s
                if (i == 0 || j == 0) {
                    dp[i][j] = 1;
                } else {
                    // Compute the number of unique paths for other cells
                    dp[i][j] = dp[i-1][j] + dp[i][j-1];
                }
            }
        }

        // Return the result from the bottom-right corner of the array
        return dp[m-1][n-1];
    }
};