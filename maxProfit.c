#include <stdio.h>
#incldue <stdlib.h>

int maxProfit(int* prices, int pricesSize) {
    int small = prices[0];
    int total = 0;

    for (int i = 1; i < pricesSize; i++) {
        small = prices[i] < small ? prices[i] : small;

        total = (prices[i] - small) > total ? (prices[i] - small) : total;
        
    }

    return total;
}
