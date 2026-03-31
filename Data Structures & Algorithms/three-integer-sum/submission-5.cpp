class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        unordered_map<int, int> mpp;
        vector<vector<int>> ans;
        for(int i = 0; i < n; i++)
        {
            mpp[nums[i]]++;
        }

        for(int i = 0; i < n; i++)
        {
            mpp[nums[i]]--;
            if(i > 0 && nums[i] == nums[i - 1]) continue;
            for(int j = i + 1; j < n; j++)
            {
                mpp[nums[j]]--;
                if(j > i + 1 && nums[j] == nums[j - 1]) continue;
                int exp = nums[i] + nums[j];
                int target = -exp;
                if(mpp[target] > 0) ans.push_back({nums[i], nums[j], target});
            }
            for (int j = i + 1; j < nums.size(); j++) {
                mpp[nums[j]]++;
            }
        }
        return ans;
    }
};
