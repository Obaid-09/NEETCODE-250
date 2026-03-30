class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans = "";

        int n = strs.size();
        if(n == 1) return strs[0];
        sort(strs.begin(), strs.end());

        int i = 0, j = 0;
        while(i < strs[0].length())
        {
            if(strs[0][i] != strs[n - 1][i]) break;
            else ans += strs[0][i];
            i++;
        }
        return ans;
    }
};