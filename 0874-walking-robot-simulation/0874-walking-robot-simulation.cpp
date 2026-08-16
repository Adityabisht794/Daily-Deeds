class Solution {
public:
    int robotSim(vector<int>& commands, vector<vector<int>>& obstacles) {
        set<pair<int, int>> s;

        for (auto obstacle : obstacles) {
            s.insert({obstacle[0], obstacle[1]});
        }

        int x = 0, y = 0;
        int maxi = 0;

        int direction = 0;

        for (int command : commands) {

            if (command == -1) {
                direction = (direction + 1) % 4;
            }
            else if (command == -2) {
                direction = (direction + 3) % 4;
            }
            else {
                for (int i = 0; i < command; i++) {

                    int nx = x;
                    int ny = y;

                    if (direction == 0)
                        ny++;
                    else if (direction == 1)
                        nx++;
                    else if (direction == 2)
                        ny--;
                    else
                        nx--;

                    if (s.count({nx, ny}))
                        break;

                    x = nx;
                    y = ny;

                    maxi = max(maxi, x * x + y * y);
                }
            }
        }

        return maxi;
    }
};