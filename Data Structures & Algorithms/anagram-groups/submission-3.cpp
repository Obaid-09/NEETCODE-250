class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mpp;

        for(int i = 0; i < strs.size(); i++)
        {
            vector<int> freq(26, 0);
            string s = strs[i];
            int a = s.size();
            for(int j = 0; j < a; j++)
            {
                freq[s[j] - 'a']++;
            }

            string key = "";
            for(int k = 0; k < 26; k++)
            {
                key += to_string(freq[k]) + '#';
            }
            mpp[key].push_back(s);
        }

        vector<vector<string>> ans;
        for (auto &it : mpp) {
            ans.push_back(it.second);
        }

        return ans;
    }
};
