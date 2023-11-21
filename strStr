int strStr(char * haystack, char * needle){
    size_t n_haystack = strlen(haystack);
    size_t n_needle = strlen(needle);
    int ret = -1;

    int n = 0;

    // run through list once
    for (int h = 0; h < n_haystack; h++) {

        // find first letters match
        if (haystack[h] == needle[0]) {

            // check haystack for needle
            for (int n = 0, i = h; n < n_needle; n++, i++) {
                if (haystack[i] == needle[n] && n == n_needle - 1) {
                    ret = h;

                    return ret;
                }
                else if (haystack[i] != needle[n]) {
                    break;
                }

            }
        }
    }

    return ret;
}
