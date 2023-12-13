// 3ms
// 6.36MB

#include <stdio.h>
#include <stdlib.h>

int climbStairs(int n) {
    int prev = 1;
    int curr = 2;
    int temp = 0;

    do {
        if (n < 2) {
            curr = 1;
            break;
        }

        for (int steps = 2; steps < n; steps++) {

            temp = curr;
            curr = curr + prev;
            prev = temp;
        }


    } while (0);

    return curr;
}
