class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& v, int k) {
        int n=v.size();
        unordered_map<int ,int> mp;
        for(int i=0;i<n;i++)
        {
            if(mp.find(v[i])!=mp.end())
            {
                int x=i-mp[v[i]];
                if(x<=k) return true;
            }
            mp[v[i]]=i;
        }
        return false;
    }
};