class Solution {
public:
    int minimumPushes(string s) {
        int n=s.size();
        int ans=0;
        int i=1;
        while(n>0)
        {
            if(n>=8)
            {
                ans+=8*i;
            }   
            else ans+=n*i;
            i++;
            n-=8;
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna