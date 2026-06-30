class Solution {
public:
    int lastStoneWeight(vector<int>& v) {
        int n=v.size();
        int cnt = 0;
        for (int x : v) 
        if (x != 0)
        cnt++;

        if (cnt <= 1)
        return v[0];

        for(int i=0;i<n;i++)
        {
            sort(v.begin(),v.end(),greater<int>());
            v[0]=v[0]-v[1];
            v[1]=0;
        }
        return v[0];
    }
};