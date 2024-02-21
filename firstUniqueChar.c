// 5ms
// 7.3 MB

#include <string.h>
#include <stdio.h>

int firstUniqeChar(char* s) {
    size_t len = strlen(s);
    int ret = -1;

    // assuming ascii
    int charCount[256] = { 0 };

    do {
        if (len == 0) {
            break;
        }

        // get total count of each char
        for (int i = 0; i < len; i++) {
            charCount[s[i]]++;
        }

        //find first with 1
        for (int i = 0; i < len; i++) {
            if (charCount[s[i]] == 1) {
                ret = i;
                break;
            }
        }

    } while (0);


    return ret;
}
