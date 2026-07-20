class Solution {
public:
    double findMaxAverage(vector<int>& v, int k) {
        int n = v.size();

        double maxi = INT_MIN;
        double sum = 0;

        int l = 0;

        for (int r = 0; r < n; r++) {

            sum += v[r];   // First include the current element

            if (r - l + 1 == k) {   // Window reaches size k

                maxi = max(maxi, sum);

                sum -= v[l];        // Slide the window
                l++;
            }
        }

        return maxi / k;
    }
};