class Solution {
public:
    vector<int> twoSum(vector<int>& v, int target) {
        unordered_map<int,int>mp;
        for(int i=0;i<v.size();i++)
        {
            if(mp.find(target-v[i])!=mp.end()) return{i,mp[target-v[i]]};
            mp[v[i]]=i;
        }
        return {};
    }
};