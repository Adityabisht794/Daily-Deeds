class Solution {
public:
    int coinChange(vector<int>& v, int a) {
        vector<int>dp(a+1,a+1);
        dp[0]=0;
        for(int i=1;i<a+1;i++)
        {
            for(int coin:v)
            if(i-coin>=0)
            {
                dp[i]=min(dp[i],1+dp[i-coin]);
            }
        }
        return (dp[a]>a)?-1:dp[a];
    }
};