int maxProfit(vector<int>& prices) {
    int maxProfit=0;
    int bestbuy=prices[0];
    int n = prices.size();

    for (int i=1;i<n;i++){
        if(prices[i]>bestbuy){
            maxProfit=max(maxProfit ,prices[i]-bestbuy);
        }
        bestbuy=min(bestbuy,prices[i]);
    }
    return maxProfit;
    
}