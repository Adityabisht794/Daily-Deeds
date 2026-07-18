class Solution {
public:
    int findGCD(vector<int>& v) {
        int mini=INT_MAX;
        int maxi=INT_MIN;
        for(int i:v)
        {
            mini=min(mini,i);
            maxi=max(maxi,i);
        }
        return gcd(mini,maxi);
    }
};