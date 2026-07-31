class Solution {
public:
    int minimumPushes(string s) {
        unordered_map<char, int> m;

        for (char c : s)
            m[c]++;

        vector<pair<char, int>> v(m.begin(), m.end());

        sort(v.begin(), v.end(), [](auto &a, auto &b) {
            return a.second > b.second;
        });

        int i = 0;
        int sum = 0;

        for (auto &p : v) {
            sum += (i / 8 + 1) * p.second;
            i++;
        }

        return sum;
    }
};