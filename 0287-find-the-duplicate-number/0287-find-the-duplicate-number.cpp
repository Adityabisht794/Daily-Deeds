class Solution {
public:
    int findDuplicate(vector<int>& v) {
        unordered_set<int>s;
        for(int i:v)
        {
            if(s.find(i)!=s.end()) return i;
            s.insert(i);
        }
        return 0;
    }
};