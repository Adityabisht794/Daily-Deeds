class Solution {
public:
    int maxRepeating(string s, string w) {
        string temp = w;
        int count = 0;

        while(s.find(temp) != string::npos)
        {
            count++;
            temp += w;
        }

        return count;
    }
};