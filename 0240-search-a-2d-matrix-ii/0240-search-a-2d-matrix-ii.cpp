class Solution {
public:
    bool searchMatrix(vector<vector<int>>& v, int target) {
        int m=v.size();
        int n=v[0].size();
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(target==v[i][j]) return true;
            }
        }
        return false;
    }
};