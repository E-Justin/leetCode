// 2ms
// 6.24 MB

#include <stdlib.h>
#include <stdio.h>
#include <limits.h>

int
reverse(int x) {
    int n_digits = 0;
    int orig = x;
    long long pow = 1;
    long long ret = 0;

    // get n_digits and place value
    while (orig) {
        if (n_digits) {
            pow *= 10;
        }
        n_digits++;
        orig /= 10;
    }

    // if only one number (no need to reverse)
    if (n_digits == 1) {
        return x;
    }

    // reverse int
    while (pow) {
        ret += pow * (x % 10);
        pow /= 10;
        x /= 10;
    }

    if (ret > INT_MAX || ret < INT_MIN) {
        ret = 0;
    }

    return (int)ret;
	
}

// 5ms
// 5.6 MB

int 
reverseInt(int x) {
    long long copy = x;
    long long  pv = 1;
    int n_digits = 0;
    int ret = 0;

    // get n_digits and place value
    for (int i = 0; copy; i++) {
        if (i != 0) {
            pv *= 10;
        }
        n_digits++;

        copy /= 10;
    }

    // reverse int
    for (int i = 0; x; i++) {
        copy += (x % 10) * pv;
        pv /= 10;
        x /= 10;
    }

    ret = copy > INT_MAX || copy < INT_MIN ? 0 : copy;

    return ret;
}
