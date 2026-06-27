class Solution {
public:

    void putzero(int i,int j ,vector<vector<int>>&ans)
    {
        int m=ans.size();
        int n=ans[0].size();
        for(int k=0;k<m;k++)
        {
            ans[k][j]=0;
        }
        for(int k=0;k<n;k++)
        {
            ans[i][k]=0;
        }
    }

    void setZeroes(vector<vector<int>>& v) {
        int m=v.size();
        int n=v[0].size();
        vector<vector<int>>ans=v;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(v[i][j]==0)
                {
                    putzero(i,j,ans);
                }
            }
        }
        v=ans;
    }
};