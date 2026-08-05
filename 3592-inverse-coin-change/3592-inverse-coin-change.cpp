class Solution {
public:
    vector<int> findCoins(vector<int>& numWays) {
        int n = numWays.size();

        vector<long long> dp(n + 1, 0);
        dp[0] = 1;

        vector<int> ans;

        for (int coin = 1; coin <= n; coin++) {

            // If we already have more ways than required, impossible.
            if (dp[coin] > numWays[coin - 1])
                return {};

            // If exactly equal, coin 'coin' does not exist.
            if (dp[coin] == numWays[coin - 1])
                continue;

            // We need one extra way, so coin 'coin' must exist.
            if (dp[coin] + 1 != numWays[coin - 1])
                return {};

            ans.push_back(coin);

            // Standard Coin Change II update
            for (int amt = coin; amt <= n; amt++)
                dp[amt] += dp[amt - coin];
        }

        return ans;
    }
};