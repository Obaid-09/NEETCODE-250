class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int product1 = 1;
        int n = nums.size();
        int product2 = 0;

        for(int i = 0; i < n; i++)
        {
            if(nums[i] != 0)
            {
                product2 *= nums[i];
                product1 *= nums[i];
            }else
            {
                product2 = product1;
                product1 = 0;

            }
        }
        vector<int> ans(n);
        for(int i = 0; i < n; i++)
        {
            if(nums[i] != 0) ans[i] = product1 / nums[i];
            else ans[i] = product2;
        }
        return ans;
    }
};
