class Solution {
public:
    vector<int> check(vector<int> a, vector<int> b)
    {
        unordered_set<int>s;
        for( int i:a)
        {
            s.insert(i);
        }
        for(int i:b)
        {
            if(s.find(i)==s.end()) continue ;
            else s.erase(i);
        }
        vector<int>temp;
        for(auto i : s)
        {
            temp.push_back(i);
        }
        return temp;
    }
    vector<vector<int>> findDifference(vector<int>& a, vector<int>& b) {
        vector<int>temp1= check(a,b);
        vector<int>temp2= check(b,a);
        return {temp1,temp2};
    }
};