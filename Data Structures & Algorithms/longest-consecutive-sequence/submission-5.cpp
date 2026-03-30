class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int count = 1;
        int n = nums.size();
        if(n == 0) return 0;
        int ans = 1, curr = nums[0];

        for(int i = 1; i < n; i++)
        {
            if(curr + 1 == nums[i]) 
            {
                curr = nums[i];
                count++;
            }else if(curr == nums[i])
            {
                count = count;
            }else
            {
                ans = max(ans, count);
                curr = nums[i];
                count = 1;
            }
        }
        ans = max(ans, count);
        return ans;
    }
};
