class Solution {
public:
    bool closeStrings(string a, string b) {

        if (a.size() != b.size()) return false;

        vector<int> f1(26,0), f2(26,0);

        for(char c:a) f1[c-'a']++;
        for(char c:b) f2[c-'a']++;

        for(int i=0;i<26;i++)
        {
            if((f1[i]==0)!=(f2[i]==0))
                return false;
        }

        sort(f1.begin(),f1.end());
        sort(f2.begin(),f2.end());

        return f1==f2;
    }
};