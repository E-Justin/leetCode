// 4ms
// 5.9 mb

#include <stdlib.h>
#include <stdboo.h>
#include <string.h>

bool
is_anagram(char* s, char* t) {
    int s_char_count[256] = { 0 };
    int t_char_count[256] = { 0 };
    size_t s_len = strlen(s);
    size_t t_len = strlen(t);
    bool ret = true;

    do {
        // if lens dont match, no anagram
        if (s_len != t_len ) {
            ret = false;
            break;
        }

        // get count for each character in each string
        for (int i = 0; i < s_len; i++) {
            t_char_count[t[i]]++;
            s_char_count[s[i]]++;
        }

        // check that each count is the same
        for (int i = 0; i < s_len; i++) {
            if (t_char_count[t[i]] != s_char_count[t[i]]) {
                ret = false;
                break;
            }
        }

    } while (0);

    printf("ret = %d\n", ret);
    
    return ret;
}
