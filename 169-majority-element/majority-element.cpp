class Solution {
public:
    int majorityElement(vector<int>& v) {
        unordered_map<int,int>mp;
        int n=v.size();
        for(int i:v) mp[i]++;
        for(auto i:mp)
        {
            if(i.second>n/2) return i.first;
        }
        return 0;
    }
};