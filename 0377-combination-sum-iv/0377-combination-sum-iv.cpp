class Solution {
public:
    int combinationSum4(vector<int>& nums, int target) {
        vector<long long>dp(target+1);
        dp[0]=1;
        for(int i=0;i<target+1;i++)
        {
            for(int num:nums)
            {
                if(i>=num)
                {
                    dp[i]+=dp[i-num];
                    if (dp[i] > INT_MAX)
                    dp[i] = INT_MAX;
                }
            }
        }
        return (int)dp[target];
    }
};