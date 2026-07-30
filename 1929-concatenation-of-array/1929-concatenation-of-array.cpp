class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int>temp=nums;
        for(int i:temp) nums.push_back(i);
        return nums;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna