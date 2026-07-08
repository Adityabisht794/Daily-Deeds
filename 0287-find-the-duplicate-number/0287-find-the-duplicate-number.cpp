class Solution {
public:
    int findDuplicate(vector<int>& v) {
        for(int i:v)
        {
            int j=abs(i);
            if(v[j]<0) return j;
            v[j]=-v[j];
        }
        return -1;
    }
};