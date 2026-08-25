class Solution {
public:
    int missingMultiple(vector<int>& v, int k) {
        set<int> multiples;
        for (int i : v) {
            if (i > 0 && i % k == 0) {
                multiples.insert(i);
            }
        }
        int min = k;
        while (true) {
            if (multiples.find(min) == multiples.end()) 
                return min;
                
            min += k;
        }
        return -1;
    }
};