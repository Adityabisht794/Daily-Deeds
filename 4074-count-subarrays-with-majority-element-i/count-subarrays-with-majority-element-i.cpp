class Solution {
public:
    int countMajoritySubarrays(vector<int>& v, int target) {
        int count=0;
        int n=v.size();
        for(int i=0;i<n;i++)
        {
            int sum=0;
            for(int j=i;j<n;j++)
            {
                if(v[j]==target) sum++;
                if(sum>(j-i+1)/2) count++; 
            }
        }
        return count;
    }
};