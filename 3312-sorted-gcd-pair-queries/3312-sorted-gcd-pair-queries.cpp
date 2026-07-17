class Solution {
public:
    vector<int> gcdValues(vector<int>& nums, vector<long long>& queries) {

        int mx = *max_element(nums.begin(), nums.end());

        vector<int> freq(mx + 1);

        for (int x : nums)
            freq[x]++;

        vector<long long> cnt(mx + 1);

        // cnt[d] = numbers divisible by d
        for (int d = 1; d <= mx; d++) {
            long long c = 0;
            for (int j = d; j <= mx; j += d)
                c += freq[j];

            cnt[d] = c * (c - 1) / 2;
        }

        // Inclusion-Exclusion:
        // cnt[d] = pairs whose gcd is exactly d
        for (int d = mx; d >= 1; d--) {
            for (int j = d + d; j <= mx; j += d)
                cnt[d] -= cnt[j];
        }

        // Prefix sums
        vector<long long> pref(mx + 1);

        for (int d = 1; d <= mx; d++)
            pref[d] = pref[d - 1] + cnt[d];

        vector<int> ans;

        for (long long q : queries) {

            int g = lower_bound(pref.begin(), pref.end(), q + 1) - pref.begin();

            ans.push_back(g);
        }

        return ans;
    }
};