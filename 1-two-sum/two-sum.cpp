class Solution {
public:
    vector<int> twoSum(vector<int>& v, int target) {
        map<int,int> mp;
        for(int i=0;i<v.size();i++)
        {
            int x=target-v[i];
            if(mp.find(x)==mp.end()) 
            {
                mp[v[i]]=i;
            }
            else return {i,mp[x]};
        }
        return {};
    }
};