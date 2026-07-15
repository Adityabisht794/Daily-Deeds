class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        // Step 1: Create a hash set for O(1) word lookup
        unordered_set<string> wordSet(wordDict.begin(), wordDict.end());
        
        int n = s.length();
        // Step 2: dp[i] records if s[0...i-1] can be segmented
        vector<bool> dp(n + 1, false);
        dp[0] = true; // Base case: empty string
        
        // Step 3: Traverse through all positions of the string
        for (int i = 1; i <= n; i++) {
            for (int j = 0; j < i; j++) {
                // If s[0...j-1] is valid and s[j...i-1] is a dictionary word
                if (dp[j] && wordSet.count(s.substr(j, i - j))) {
                    dp[i] = true;
                    break; // Found a valid breakdown for prefix of length i
                }
            }
        }
        
        return dp[n];
    }
};
