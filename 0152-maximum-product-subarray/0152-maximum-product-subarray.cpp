class Solution {
public:
    int maxProduct(vector<int>& v) {
        int n=v.size();
        int maxi=INT_MIN;
        for(int i=0;i<n;i++)
        {
            int sum=v[i];
            maxi=max(sum,maxi);
            for(int j=i+1;j<n;j++)
            {
                sum*=v[j];
                maxi=max(sum,maxi);
            }
            maxi=max(sum,maxi);
        }
        return maxi;
    }
};