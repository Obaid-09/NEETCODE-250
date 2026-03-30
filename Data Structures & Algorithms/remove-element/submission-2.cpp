class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n = nums.size();
        int i = 0, j = 0;

        while(j < n && i < n)
        {
            if(nums[i] == val && nums[j] == val) j++;
            else if(nums[i] == val && nums[j] != val)
            {
                swap(nums[i], nums[j]);
                i++;
                j++;
            }else if(nums[i] != val && nums[j] == val) i++;
            else
            {
                i++;
                j++;
            }
        }
        return i;
    }
};