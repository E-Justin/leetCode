#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// 7 ms
// 6.89 MB
bool 
isPalindrome(int x) {
    bool is_palindrome = 0;
    long long pow = 1;
    int n_digits = 0;
    int orig = x;
    int reversed = 0;

    do {

        // negative can't be palindrome
        if (x < 0) {
            break;
        }

        // get pow and n_digits
        while (orig) {
            if (n_digits) {
                pow *= 10;
            }
            n_digits++;
            orig /= 10;
        }

        orig = x;

        // reverse
        while (orig) {
            reversed += (orig % 10) * pow;
            orig /= 10;
            pow /= 10;
        }

        is_palindrome = x == reversed ? 1 : 0;

    } while (0);

    return is_palindrome;
}
