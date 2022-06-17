class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int profit = 0;
        
        int n = prices.size();
        for(int i=1; i<n; i++){
            
            int currDay = i;
            int prevDay = i - 1;
            if(prices[currDay] > prices[prevDay]){
                
                profit += prices[currDay] - prices[prevDay];
            }
        }
        
        return profit;
    }
};