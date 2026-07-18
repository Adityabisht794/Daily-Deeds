class Solution {
public:
    vector<int> productExceptSelf(vector<int>& v) {
        int n=v.size();
        vector<int> a(n,1);
        int prefix=1;
        int suffix=1;
        for(int i=0;i<n;i++)
        {
            a[i]=suffix;
            suffix*=v[i];
        }
        for(int i=n-1;i>=0;i--)
        {
            a[i]=prefix*a[i];
            prefix*=v[i];
           
        }
    return a;
    }
};