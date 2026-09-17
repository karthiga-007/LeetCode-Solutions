// Last updated: 9/17/2026, 8:51:44 AM
1int maxProfit(int* prices, int pricesSize) {
2    int max = prices[0];
3    int max_profit = 0;
4
5    for(int i=0; i < pricesSize;i++){
6        if(prices[i]<max){
7            max = prices[i];
8        }
9       int profit = prices[i]- max;
10        if(profit > max_profit){
11            max_profit = profit;
12 }
13
14 }
15         return max_profit;
16    }
17
18