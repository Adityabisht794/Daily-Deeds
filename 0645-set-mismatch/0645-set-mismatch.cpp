class Solution {
public:
    vector<int> findErrorNums(vector<int>& v) {

        unordered_map<int,int> mp;

        for(int i=0;i<v.size();i++)
        {
            mp[v[i]]++;
            mp[i+1]--;
        }

        vector<int> ans(2);

        for(auto x:mp)
        {
            if(x.second==1)
                ans[0]=x.first;     

            else if(x.second==-1)
                ans[1]=x.first;      
        }

        return ans;
    }
};