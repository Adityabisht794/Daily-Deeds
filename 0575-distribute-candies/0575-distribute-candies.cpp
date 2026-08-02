class Solution {
public:
    int distributeCandies(vector<int>& v) {
        unordered_set<int>s;
        for(int i:v) s.insert(i);
        int n=v.size()/2;
        int a=s.size();
        if(n>a) return a;
        return n;
    }
};