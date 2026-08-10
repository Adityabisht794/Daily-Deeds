class Solution {
public:
    int climbStairs(int n, vector<int>& costs) {
        vector<int> dp(n + 1, INT_MAX);

        dp[0] = 0;

        for (int i = 1; i <= n; i++) {
            for (int step = 1; step <= 3; step++) {
                if (i >= step) {
                    dp[i] = min(dp[i],
                                dp[i - step] + costs[i - 1] + step * step);
                }
            }
        }

        return dp[n];
    }
};