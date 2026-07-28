class Solution {
public:
    int longestCommonSubsequence(string w1, string w2) {
        int a=w1.size();
        int b=w2.size();
        vector<vector<int>>dp(a+1,vector<int>(b+1,0));
        for(int i=a-1;i>=0;i--)
        {
            for(int j=b-1;j>=0;j--)
            {
                if(w1[i]==w2[j]) 
                {
                    dp[i][j]=1+dp[i+1][j+1];
                }
                else
                {
                    dp[i][j]=max(dp[i+1][j],dp[i][j+1]);
                }
            }
        }
        return dp[0][0];
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna