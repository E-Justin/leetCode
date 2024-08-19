// 3ms
// 5.7 MB

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

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

int comp_strings(const void* a, const void* b) {
	const char* str1 = *(const char**)a;
	const char* str2 = *(const char**)b;
	return strcmp(str1, str2);
}

char*
longest_common_prefix(char** strs, int strsSize) {
	char* ret = "";
	unsigned int n_prefix = 0;

	// sort array in ascending order
	qsort(strs, strsSize, sizeof(char*), comp_strings);

    // get size of longest common prefix
	size_t len1 = strlen(strs[0]);
	size_t len2 = strlen(strs[strsSize - 1]);
	for (int i = 0; i < len1 && i < len2 && strs[0][i] == strs[strsSize - 1][i]; i++){
		n_prefix++;
	}

    // if there is a longest common prefix
	if (n_prefix) {
        // allocate memory and copy the lcp
		ret = (char*)malloc(n_prefix + 1);
		memcpy(ret, strs[0], n_prefix);
		ret[n_prefix] = '\0';
	}

    // ret = n_prefix ? ret : ""
	return ret;
}
