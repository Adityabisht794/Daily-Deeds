class Solution {
public:
    bool uniqueOccurrences(vector<int>& v) {
        int n=v.size();
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++)
        {
            mp[v[i]]++;
        }
        unordered_set<int> s;
        for(auto x : mp)
        {
            if(s.count(x.second)) return false;
            else s.insert(x.second);
        }
        return true;
    }
};