// 0 ms (beats 100.00% of C submissions)
// 17.2 MB

#include <stdio.h>

void
reverseString(char* s, int sSize) {
    for (int i = 0, j = sSize - 1; i < sSize / 2; i++, j--) {
        char temp = s[i];
        s[i] = s[j];
        s[j] = temp;
    }

    return;
}
