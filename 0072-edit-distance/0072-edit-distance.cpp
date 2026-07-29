class Solution {
public:
    int minDistance(string word1, string word2) {

        int n = word1.size();
        int m = word2.size();

        vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));

        // Base cases
        // If word2 is exhausted, delete remaining characters of word1
        for (int i = 0; i <= n; i++)
            dp[i][m] = n - i;

        // If word1 is exhausted, insert remaining characters of word2
        for (int j = 0; j <= m; j++)
            dp[n][j] = m - j;

        // Fill table
        for (int i = n - 1; i >= 0; i--) {
            for (int j = m - 1; j >= 0; j--) {

                if (word1[i] == word2[j]) {
                    dp[i][j] = dp[i + 1][j + 1];
                }
                else {
                    dp[i][j] = 1 + min({
                        dp[i + 1][j],     // Delete
                        dp[i][j + 1],     // Insert
                        dp[i + 1][j + 1]  // Replace
                    });
                }
            }
        }

        return dp[0][0];
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna