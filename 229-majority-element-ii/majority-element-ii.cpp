class Solution {
public:
    vector<int> majorityElement(vector<int>& v) {
        unordered_map<int,int>m;
        vector<int>ans;
        int n=v.size();
        for(int i:v)
        {
            m[i]++;
        }
        for(auto i:m)
        {
            if(i.second > n/3) ans.push_back(i.first);
        }
        return ans;
    }
};