class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int i = 0, j = 0;
        int n = s.length();
        unordered_set<char> st;
        int ans = 0;
        if(n ==0) return ans;
        while(i < n && j < n){
            if(st.find(s[j]) == st.end()){
                st.insert(s[j]);
                j++;
                ans = max(ans, j - i + 1);
            }else{
                ans = max(ans, j - i);
                st.clear();
                i++;
                j = i;
            }
        }
        return ans - 1;
    }
};
