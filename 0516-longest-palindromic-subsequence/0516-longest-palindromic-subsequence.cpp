class Solution {
public:
    int longestPalindromeSubseq(string s) {
        int n = s.size();

        vector<vector<int>> dp(n, vector<int>(n, 0));

        // Base case: single character
        for (int i = 0; i < n; i++)
            dp[i][i] = 1;

        // Length of substring
        for (int len = n-1; len >= 0; len--) {

            // Starting index
            for (int i = len+1; i < n ; i++) {
                if (s[len] == s[i]) {
                    dp[len][i] = 2 + dp[len + 1][i - 1];
                } 
                else {
                    dp[len][i] = max(dp[len + 1][i], dp[len][i - 1]);
                }
            }
        }

        return dp[0][n - 1];
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna