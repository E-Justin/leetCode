// 6ms
// 6.6 MB

#include <stdio.h>
#incldue <stdlib.h>

int 
maxProfit(int* prices, int pricesSize) {
    int profit = 0;

    for (int i = 0, j = i + 1; i < pricesSize -1; i++, j++) {

        // if dayBefore is less than nextDay
        if (prices[i] < prices[j]) {
            // add two day profit to total profit
            profit += (prices[j] - prices[i]);
        }
    }

    return profit;

}
