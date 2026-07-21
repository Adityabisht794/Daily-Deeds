class Solution {
public:
    bool check(char c)
    {
        if(c=='A'|c=='E'||c=='I'||c=='O'||c=='U'||c=='a'||c=='e'||c=='i'||c=='o'||c=='u') return true ;
        return false;
    }
    int maxVowels(string v, int k) {
        int n=v.size();
        int maxi=INT_MIN;
        int count=0;
        int l=0;
        for(int r=0;r<n;r++)
        {
            if(check(v[r])) count++;
            if(r-l+1==k)
            {
                maxi=max(maxi,count);
                if(check(v[l])) count--;
                l++;
            }
            
        }

        return maxi;
    }
};