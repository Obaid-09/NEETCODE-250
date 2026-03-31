class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;
        int last = 0, mid = 0, right = 0;
        for(int i = 0; i < n - 2; i++)
        {
            if(i > 0 && nums[i] == nums[i - 1]) continue;
            int j = i + 1, k = n - 1;
            while(j < k)
            {
                int sum = nums[i] + nums[j] + nums[k];
                if(sum < 0) j++;
                else if(sum > 0) k--;
                else
                {
                    // st.insert({nums[i], nums[j], nums[k]});
                    // if((last != nums[i]) && (mid != nums[j]));
                    // {
                    //     ans.push_back({nums[i], nums[j], nums[k]});
                    //     last = nums[i];
                    //     mid = nums[j];
                    // }
                    ans.push_back({nums[i], nums[j], nums[k]});
                    j++;
                    k--;

                    while(j < k && nums[j] == nums[j - 1]) j++;

                    // skip duplicate k
                    while(j < k && nums[k] == nums[k + 1]) k--;
                }
            }
        }

        return ans;
    }
};