int maxProfit(int* prices, int pricesSize) {
    int profit = 0;

    // run through the list
    for (int i = 0, j = 1; j < pricesSize; j++, i++) {
      
        // if the price is higher the next day
        if (prices[j] > prices[i]) {

            // buy, then sell the next day, record the profit
            profit += prices[j] - prices[i];
        }
    }
    return profit;
}
