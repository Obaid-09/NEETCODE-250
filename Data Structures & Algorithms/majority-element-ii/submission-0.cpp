class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> ans;
        unordered_map<int, int> mpp;
        int n = nums.size();
        for(int i = 0; i < n; i++)
        {
            mpp[nums[i]]++;
        }

        int req = n / 3;

        for(auto it: mpp)
        {
            if(it.second > req) ans.push_back(it.first);
        }
        return ans;
    }
};