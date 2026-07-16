class Solution {
public:
    long long gcdSum(vector<int>& v) {
        int n=v.size();
        long long maxi=INT_MIN;
        vector<long long>ans;
        for (long long i :v)
        {
            maxi=max(maxi,i);
            long long temp=gcd(maxi,i);
            ans.push_back(temp);
        }
        sort(ans.begin(),ans.end());
        long long sum=0;
        int l=0;
        int r=n-1;
        while(l<r)
        {
            sum+=gcd(ans[l++],ans[r--]);
        }
        return sum;
    }
};