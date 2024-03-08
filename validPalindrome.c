// 0ms  (beats 100.00 % of c submissions!!!)
// 6.4 MB

#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>

bool
isPalnindrome(char* s) {
    size_t len = strlen(s);
    int end = len - 1;
    int front = 0;
    bool ret = true;

    while (front <= end ) {

        // find first alnum char
        while (!isalnum(s[front]) && front < end) {
            front++;
        }

        // find last alnum char
        while (!isalnum(s[end]) && front < end) {
            end--;
        }

        // if we went too far
        if (front > end) {
            break;
        }

        // if they dont match
        if (tolower(s[front]) != tolower(s[end])) {
            ret = false;
            break;
        }

        end--;
        front++;
    }

    printf("ret = %d\n", ret);

    return ret;

}
