class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {

        map<int, vector<vector<int>>> mp;

        for(auto &p : points)
        {
            int dis = p[0]*p[0] + p[1]*p[1];
            mp[dis].push_back(p);
        }

        vector<vector<int>> ans;

        for(auto &it : mp)
        {
            for(auto &point : it.second)
            {
                if(k==0) return ans;
                ans.push_back(point);
                k--;
            }
        }

        return ans;
    }
};