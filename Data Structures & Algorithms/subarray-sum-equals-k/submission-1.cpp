class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int ans = 0, curSum = 0;
        unordered_map<int, int> mpp;
        mpp[0] = 1;
        int n = nums.size();
        for(int i = 0; i < n; i++)
        {
            curSum += nums[i];
            int diff = curSum - k;
            ans += mpp[diff];
            mpp[curSum]++;
        }
        return ans;
    }
};