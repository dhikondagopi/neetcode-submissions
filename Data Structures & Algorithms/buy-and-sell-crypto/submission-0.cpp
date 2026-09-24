class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int maxProfit = 0;
        // buying stocks
        for(int i = 0; i <n ;i++){
            // selling stock
            for(int j = i + 1; j < n;j++){
            // find the profit 
            int profit = prices[j] - prices[i];
            maxProfit = max(maxProfit,profit);
                
            }
        }
        return maxProfit;
    }
};
