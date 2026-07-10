class Solution {
public:
    int pivotIndex(vector<int>&v) {
        int n=v.size();
        vector<int>a(n);
        vector<int>b(n);
        int sum=0;
        for(int i=0;i<n;i++)
        {
            sum+=v[i];
            a[i]=sum;
        }
        sum=0;
        for(int i=n-1;i>=0;i--)
        {
            sum+=v[i];
            b[i]=sum;
        }
        for(int i=0;i<n;i++)
        {
            if(a[i]==b[i]) return i;
        }
        return -1;
    }
};