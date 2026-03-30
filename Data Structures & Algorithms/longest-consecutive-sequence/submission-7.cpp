class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        set<int> st;
        int n = nums.size();
        if(n == 0) return 0;
        for(int i = 0; i < n; i++)
        {
            st.insert(nums[i]);
        }

        int count = 0;
        int ans = 1;
        int curr = *st.begin();
        // int prev = st.top();
        // st.pop();
        for(int x : st)
        {
            if(curr == x - 1 || curr == x)
            {
                curr = x;
                count++;
            }else
            {
                ans = max(ans, count);
                curr = x;
                count = 1;
            } 
        }
        ans = max(ans, count);
        return ans;
    }
};
