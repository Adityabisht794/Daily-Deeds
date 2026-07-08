class Solution {
public:
    int getSum(int a, int b) {
        int c;
        while(a!=0)
        {
            c=a&b;
            b=a^b;
            a=c<<1;
        }
        return b;
    }
};