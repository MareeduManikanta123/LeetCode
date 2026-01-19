class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min = prices[0];
        int maxi = 0;
        int profit = 0;

        for(int i = 1; i < prices.size(); i++){
            profit = prices[i] - min;
            maxi = max(profit,maxi);
            if(profit < 0){
                profit = 0;
            }
            if(min > prices[i]){
                min = prices[i];
            }
        }
        return maxi;
    }
};