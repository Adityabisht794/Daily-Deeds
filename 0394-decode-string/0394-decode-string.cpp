class Solution {
public:
    string solve(string &s, int &i) {
        string ans = "";

        while (i < s.size() && s[i] != ']') {

            if (isalpha(s[i])) {
                ans += s[i];
                i++;
            }
            else if (isdigit(s[i])) {

                int num = 0;

                // Handle multi-digit numbers
                while (i < s.size() && isdigit(s[i])) {
                    num = num * 10 + (s[i] - '0');
                    i++;
                }

                i++;                    // Skip '['

                string temp = solve(s, i);   // Decode inside brackets

                i++;                    // Skip ']'

                while (num--)
                    ans += temp;
            }
        }

        return ans;
    }

    string decodeString(string s) {
        int i = 0;
        return solve(s, i);
    }
};