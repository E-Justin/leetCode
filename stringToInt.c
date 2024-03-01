// 3ms
// 5.7 MB

#include <limits.h>
#include <stdio.h>

int myAtoi(char* s) {

    long long int num;
    int ret = sscanf(s, "%lld", &num);

    // check if scanf was successful
    if (ret <= 0) {
        num = 0;
    }
    // check if int overflow
    else if (num > INT_MAX || num < INT_MIN) {
        // clamp int
        num = num > INT_MAX ? INT_MAX : INT_MIN;
    }
    return (int)num;


}
