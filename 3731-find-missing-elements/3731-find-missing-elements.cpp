class Solution {
public:
    vector<int> findMissingElements(vector<int>& v) {
        int maxi=INT_MIN;
        int mini=INT_MAX;
        for(int i:v)
        {
            mini=min(mini,i);
            maxi=max(maxi,i);
        }
        vector<int>dp(maxi+1);
        for(int i:v)
        {
            dp[i]=1;
        }
        v.clear();
        for(int i=mini;i<=maxi;i++)
        {
            if(dp[i]==0) v.push_back(i);
        }
        return v;
    }
};