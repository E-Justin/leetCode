// 40 ms
// 12.4 MB

#include <stdio.h>

void
reverseString(char* s, int sSize) {
    char temp;
    for (int front = 0, end = sSize -1; front < sSize / 2; front++, end--) {
        temp = s[front];
        s[front] = s[end];
        s[end] = temp;
    }

    return;
}
