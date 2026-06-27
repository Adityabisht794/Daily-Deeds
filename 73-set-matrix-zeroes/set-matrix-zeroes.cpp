class Solution {
public:

    void putzero(int i,int j ,vector<vector<int>>&v, int m,int n)
    {
        for(int k=0;k<m;k++)
        {
            v[k][j]=0;
        }
        for(int k=0;k<n;k++)
        {
            v[i][k]=0;
        }
    }

    void setZeroes(vector<vector<int>>& v) {
        int m=v.size();
        int n=v[0].size();
        vector<pair<int,int>>ans;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(v[i][j]==0)
                {
                    ans.push_back({i,j});
                }
            }
        }
        for(auto i : ans)
        {
            putzero(i.first,i.second,v,m,n);
        }

    }
};