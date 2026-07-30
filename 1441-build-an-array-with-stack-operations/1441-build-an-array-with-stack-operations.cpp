class Solution {
public:
    vector<string> buildArray(vector<int>& v, int n) {
        vector<string>ans;
        int s=v.size();
        int t=v[s-1];
        if(t>n) return {};
        int j=0;
        for(int i=1;i<=n;i++)
        {
            
            if(i!=v[j])
            {
                ans.push_back("Push");
                ans.push_back("Pop");
            }
            if(i==v[j])
            {
                ans.push_back("Push");
                if(i==t) return ans;
                j++;

            }

        }
        return ans;
    }
};