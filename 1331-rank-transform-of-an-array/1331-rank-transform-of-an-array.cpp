class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& a) {
        int n = a.size();
        map<int, int> m;

        for (int i = 0; i < n; i++) {
            if (m.find(a[i]) != m.end())
                continue;
            m[a[i]] = i;
        }

        int j = 1;
        for (auto &i : m) {
            i.second = j++;
        }

        for (int i = 0; i < n; i++) {
            a[i] = m[a[i]];
        }

        return a;
    }
};