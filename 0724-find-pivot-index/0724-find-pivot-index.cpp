class Solution {
public:
    int pivotIndex(vector<int>&v) {
        int n=v.size();
        int rsum=0;
        for(int i=0;i<n;i++)
        {
            rsum+=v[i];
        }
        int lsum=0;
        for(int i=0;i<n;i++)
        {
            rsum-=v[i];
            if(lsum==rsum) return i;
            lsum+=v[i];
        }
        return -1;
    }
};