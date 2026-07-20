class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0;
        int localmin = 1e9;
        for(int i = 0; i < prices.size(); i++){
            if(localmin != 1e9){
                profit = max(profit, prices[i] - localmin);
            }
            localmin = min(localmin, prices[i]);
        }
        return profit;
    }
};
