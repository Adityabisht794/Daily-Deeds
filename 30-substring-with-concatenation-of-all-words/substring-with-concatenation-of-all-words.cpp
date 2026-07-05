class Solution {
public:
    vector<int> findSubstring(string s, vector<string>& words) {

        vector<int> ans;

        if(words.empty() || s.empty())
            return ans;

        int wordLen = words[0].size();
        int wordCount = words.size();

        unordered_map<string,int> need;

        for(string word : words)
            need[word]++;

        for(int offset=0; offset<wordLen; offset++)
        {
            unordered_map<string,int> seen;

            int left = offset;
            int count = 0;

            for(int right=offset;
                right+wordLen<=s.size();
                right+=wordLen)
            {
                string word=s.substr(right,wordLen);

                if(need.count(word))
                {
                    seen[word]++;
                    count++;

                    while(seen[word]>need[word])
                    {
                        string leftWord=s.substr(left,wordLen);

                        seen[leftWord]--;

                        left+=wordLen;

                        count--;
                    }

                    if(count==wordCount)
                    {
                        ans.push_back(left);

                        string leftWord=s.substr(left,wordLen);

                        seen[leftWord]--;

                        left+=wordLen;

                        count--;
                    }
                }
                else
                {
                    seen.clear();

                    count=0;

                    left=right+wordLen;
                }
            }
        }

        return ans;
    }
};