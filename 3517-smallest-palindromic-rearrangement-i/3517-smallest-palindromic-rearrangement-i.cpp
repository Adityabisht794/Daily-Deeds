class Solution {
public:
    string smallestPalindrome(string s) 
    {
        map<char,int>m;
        bool flag=false;
        string left="";
        string mid="";
        for( char i: s) m[i]++; 
        for( auto i:m)
        {
            left.append(i.second/2,i.first);
            if(i.second%2)
            {
                mid=i.first;
            }
        }
        string right = left;
        reverse(right.begin(), right.end());
        return left+mid+right;
    }
};