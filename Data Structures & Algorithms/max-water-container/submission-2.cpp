class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n = heights.size();
        int ans = INT_MIN;

        int i = 0, j = n - 1;
        while(i < j)
        {
            int length = min(heights[i], heights[j]);
            int breadth = (j - i);
            ans = max(ans, length * breadth);
            if(heights[i] < heights[j]) i++;
            else j--;
        }
        return ans;
    }
};
