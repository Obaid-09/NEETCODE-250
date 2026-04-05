class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n = heights.size();
        int ans = INT_MIN;

        for(int i = 0; i < n; i++)
        {
            for(int j = i + 1; j < n; j++)
            {
                int base = (j - i);
                int length = min(heights[i], heights[j]);
                ans = max(ans, base * length);
            }
        }
        return ans;
    }
};
