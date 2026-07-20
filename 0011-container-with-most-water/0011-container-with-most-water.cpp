class Solution {
public:
    int maxArea(vector<int>& v) {
        int n=v.size();
        int maxi=0;
        int l=0,r=n-1;
        while(l<r)
        {
            int area=(r-l)*min(v[l],v[r]);
            maxi=max(maxi,area);
            if(v[l]<v[r]) l++;
            else r--;
        }
        return maxi;
    }
};