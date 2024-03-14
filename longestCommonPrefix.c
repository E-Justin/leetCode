// 3ms
// 5.7 MB

#include <stdio.h>
#include <string.h>

char* 
longestCommonPrefix(char** strs, int strsSize) {
    size_t p_len = 0;
    char* ret = NULL;
    size_t front_len = strlen(strs[0]);

    do {

        // if only one element in array
        if (strsSize < 2) {
            p_len = front_len;
            break;
        }

        // get prefix from first two elements
        while ((strncmp(strs[0], strs[1], p_len + 1) == 0) && p_len < front_len) {
            p_len++;
        }

        // check w/ rest. It wont get any bigger at this point
        for (int i = 2; i < strsSize && p_len; i++) {
            while (strncmp(strs[0], strs[i], p_len) != 0 && p_len != 0) {
                p_len--;
            }
        }
      
    } while (0);

    // now that we know the prefix len, allocate memory for prefix
    if (p_len > 0) {
        ret = (char*)malloc(p_len + 1);
        memcpy(ret, strs[0], p_len); // memcpy does not add \0
        ret[p_len] = '\0';
    }
    // if no prefix exists
    else {
        ret = (char*)malloc(2);
        memcpy(ret, "", 1);// memcpy does not add \0
        ret[1] = '\0';
    }

    
    return ret;

}
