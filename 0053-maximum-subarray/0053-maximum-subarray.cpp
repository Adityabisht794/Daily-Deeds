class Solution {
public:
    int maxSubArray(vector<int>& v) {
        int sum=0;
        int maxi=INT_MIN;
        if(v.size()==1) return v[0];
        for(int i:v)
        {
            sum+=i;
            maxi=max(maxi,sum);
            if(sum<0) sum=0;
        }
        return maxi;
    }
};
