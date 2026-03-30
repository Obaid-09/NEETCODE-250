class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n = nums.size();
        int ans = n;
        vector<int> ans1;
        for(int i = 0; i < n; i++)
        {
            if(nums[i] == val)
            {
                ans--;
            }else
            {
                ans1.push_back(nums[i]);
            }
        }
        for(int i = 0; i < ans1.size(); i++)
        {
            nums[i] = ans1[i];
        }
        return ans;
    }
};