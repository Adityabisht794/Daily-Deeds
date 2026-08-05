class Solution {
public:
    int coinChange(vector<int>& v, int a) {

        vector<int> dp(a + 1, -1);
        dp[0] = 0;

        for (int i = 1; i <= a; i++) {
            for (int j = 0; j < v.size(); j++) {

                if (i - v[j] >= 0 && dp[i - v[j]] != -1) {

                    if (dp[i] == -1)
                        dp[i] = 1 + dp[i - v[j]];
                    else
                        dp[i] = min(dp[i], 1 + dp[i - v[j]]);
                }
            }
        }

        return dp[a];
    }
};