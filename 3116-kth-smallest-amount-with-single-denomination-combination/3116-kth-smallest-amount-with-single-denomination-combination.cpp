class Solution {
public:
    long long gcd(long long a, long long b) {
        while (b) {
            long long temp = b;
            b = a % b;
            a = temp;
        }
        return a;
    }

    long long findKthSmallest(vector<int>& coins, int k) {
        int n = coins.size();

        auto count = [&](long long mid) {
            long long total = 0;

            for (int mask = 1; mask < (1 << n); mask++) {
                long long lcm = 1;
                int bits = 0;
                bool valid = true;

                for (int i = 0; i < n; i++) {
                    if (mask & (1 << i)) {
                        bits++;

                        lcm = lcm / gcd(lcm, coins[i]) * coins[i];

                        if (lcm > mid) {
                            valid = false;
                            break;
                        }
                    }
                }

                if (!valid)
                    continue;

                if (bits % 2 == 1)
                    total += mid / lcm;
                else
                    total -= mid / lcm;
            }

            return total;
        };

        long long low = 1;
        long long high = 1LL * *min_element(coins.begin(), coins.end()) * k;

        while (low < high) {
            long long mid = low + (high - low) / 2;

            if (count(mid) >= k)
                high = mid;
            else
                low = mid + 1;
        }

        return low;
    }
};