#include <limits.h>
#include <stdio.h>

// 0ms       beats 100% of c submissions
// 5.6 MB
int
myAtoi(char* s) {
    long long num;
    int ret = sscanf(s, "%lld", &num);

    do {

        // if scanf failed
        if (ret <= 0) {
            num = 0;
            break;
        }

        // if outside of 32 bit range int
        if (num > INT_MAX || num < INT_MIN) {
            // clamp int
            num = num > INT_MAX ? INT_MAX : INT_MIN;
            break;
        }

    } while (0);

    return (int)num;
    
}
