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


// 98 ms
// 15.5 MB
int
max_profit(int* prices, int pricesSize) {
	int profit = 0;

	do {
		if (pricesSize == 0) break;

		int min_price = prices[0];

		for (int i = 1; i < pricesSize; i++) {

			if (prices[i] < min_price) min_price = prices[i];

			else if (prices[i] - min_price > profit) profit = prices[i] - min_price;

		}

	} while (0);

	return profit;
}
