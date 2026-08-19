class Solution {
public:
    bool validSquare(vector<int>& p1, vector<int>& p2,
                     vector<int>& p3, vector<int>& p4) {

        vector<vector<int>> p = {p1, p2, p3, p4};
        unordered_map<int, int> mp;

        for (int i = 0; i < 4; i++) {
            for (int j = i + 1; j < 4; j++) {
                int dx = p[i][0] - p[j][0];
                int dy = p[i][1] - p[j][1];

                int d = dx * dx + dy * dy;
                mp[d]++;
            }
        }

        if (mp.size() != 2)
            return false;

        int side = 0, diagonal = 0;

        for (auto [d, count] : mp) {
            if (count == 4)
                side = d;
            else if (count == 2)
                diagonal = d;
            else
                return false;
        }

        return side > 0 && diagonal == 2 * side;
    }
};