// 2ms
// 6MB

#include <stdio.h>
#include <stbool.h>
#include <string.h>
#include <ctype.h>

bool
is_palindrome(char* s) {

    size_t orig_len = strlen(s);
    int front = 0;
    int end = orig_len - 1;
    bool result = true;

    while (front < end) {

        // find front alphanum char
        while (!isalnum(s[front]) && front < end) {
            front++;
        }
        // find end alphanum char
        while (!isalnum(s[end]) && front < end) {
            end--;
        }

        // if they dont match
        if (tolower(s[front]) != tolower(s[end])){
            result = false;
            break;
        }
        else {
          // move to next char
            front++;
            end--;
        }
    }

    return result;

    
}
