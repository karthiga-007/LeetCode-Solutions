// Last updated: 9/17/2026, 1:34:40 PM
int maxProfit(int* prices, int pricesSize) {
    int max = prices[0];
    int max_profit = 0;

    for(int i=0; i < pricesSize;i++){
        if(prices[i]<max){
            max = prices[i];
        }
       int profit = prices[i]- max;
        if(profit > max_profit){
            max_profit = profit;
 }

 }
         return max_profit;
    }

