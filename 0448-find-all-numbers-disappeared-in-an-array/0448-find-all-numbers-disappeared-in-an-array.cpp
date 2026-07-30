class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& v) {
        
        map<int,int> mp;

        for(int i=0;i<v.size();i++)
        {
            mp[v[i]]++;
            mp[i+1]--;
        }

        vector<int> ans;

        for(auto x:mp)
        {
            if(x.second==-1) ans.push_back(x.first);      
        }

        return ans;
    }
};