class Solution {
public:
    bool check(char c)
    {
        if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U') return true;
        return false;
    }
    string reverseVowels(string s) {
        int l=0;
        int r=s.size()-1;
        while(l<r)
        {
            if(check(s[l])&&check(s[r]))
            {
                swap(s[l],s[r]);
                l++;
                r--;
            }
            if(!check(s[l])&&!check(s[r]))
            {
                l++;
                r--;
            }
            if(check(s[l])&&!check(s[r]))
            {
                r--;
            }
            if(!check(s[l])&&check(s[r]))
            {
                l++;
            }
        }
        return s;
    }
};