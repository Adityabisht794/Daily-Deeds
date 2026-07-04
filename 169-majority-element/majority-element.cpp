class Solution {
public:
    int majorityElement(vector<int>& v) {
        int count =0,max=0;
        for(int i:v)
        {
            if(count==0)
            {
                max=i;
                count++;
            } 
            else
            {
                if(i==max) count++;
                else count--;
            }
        }
        return max;
    }
};