class Solution {
public:
    int rob(vector<int>& v) {
        int n=v.size();
        if(n==1) return v[0];
        int temp1=v[0];
        int temp2=max(v[1],v[0]);
        for(int i=2;i<n;i++)
        {
            int temp=max(v[i]+temp1,temp2);
            temp1=temp2;
            temp2=temp;
        }
        return temp2;
    }
};