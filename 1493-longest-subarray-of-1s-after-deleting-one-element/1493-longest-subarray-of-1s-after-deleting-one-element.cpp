class Solution {
public:
    int longestSubarray(vector<int>& v) {
        vector<int> temp;
        int count = 0;
        int zero = 0;

        for (int r = 0; r < v.size(); r++) {
            if (v[r] == 1)
                count++;
            else {
                temp.push_back(count);
                count = 0;
                zero++;
            }
        }
        temp.push_back(count); 

        if (zero == 0)
            return v.size() - 1;

        int ans = 0;
        for (int i = 0; i < temp.size() - 1; i++) {
            ans = max(ans, temp[i] + temp[i + 1]);
        }

        return ans;
    }
};