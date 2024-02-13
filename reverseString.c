// 48 ms
// 12.1 MB

#include <stdio.h>

void
reverseString(char* s, int size) {
    int end = size - 1;
    char temp;

    for (int i = 0; i < size / 2; i++) {
        temp = s[i];
        s[i] = s[end];
        s[end] = temp;
        end--;
        
    }

}
