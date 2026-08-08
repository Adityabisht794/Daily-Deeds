class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& v) {
        int m = v.size();
        int n = v[0].size();

        if (v[0][0] == 1 || v[m - 1][n - 1] == 1)
            return 0;

        vector<vector<long long>> dp(m + 1, vector<long long>(n + 1, 0));

        dp[m - 1][n - 1] = 1;

        for (int i = m - 1; i >= 0; i--) {
            for (int j = n - 1; j >= 0; j--) {

                if ((i == m - 1 && j == n - 1) || v[i][j] == 1)
                    continue;

                long long right = dp[i][j + 1];
                long long down = dp[i + 1][j];

                dp[i][j] = right + down;
            }
        }

        return (int)dp[0][0];
    }
};