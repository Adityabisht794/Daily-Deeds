class Solution {
public:
    int rob(vector<int>& v) {
        int n=v.size();
        if(n==1) return v[0];
        vector<int>dp(n);
        dp[0]=v[0];
        dp[1]=max(v[1],v[0]);
        for(int i=2;i<n;i++)
        {
            dp[i]=max(v[i]+dp[i-2],dp[i-1]);
        }
        return dp[n-1];
    }
};