// Runtime: 0ms : beats 100% of submissions
// Memory Usage: 8.4 MB

#include <stdbool.h>
#include <stdio.h>

bool isPowerOfThree(int n) {
    long long pwr = 1;
    bool ret = 0;
    
    while(pwr < n){
        pwr *= 3;
    }
    
    if (pwr == n) ret = true;
    
    return ret;
}
