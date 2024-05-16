#include <stdlib.h>
#include <stdboo.h>
#include <string.h>


// 0ms : beats 100.00 % of submissions!
// 6 MB
bool
isAnagram(char* s, char* t) {
	bool is_anagram = true;
	
	do {

		if (strlen(s) != strlen(t)) {
			is_anagram = false;
			break;
		}

		int char_count_s[123] = { 0 };
		int char_count_t[123] = { 0 };

		for (int i = 0; s[i]; i++) {
			char_count_s[s[i]]++;
			char_count_t[t[i]]++;
		}

		for (int i = 0; s[i]; i++) {
			printf("Checking %c\n", s[i]);
			printf("Count = %d and %d\n", char_count_s[s[i]], char_count_t[s[i]]);

			if (char_count_s[s[i]] != char_count_t[s[i]]) {
				is_anagram = false;
				break;
			}
		}


	} while (0);

	return is_anagram;
}


// 4ms
// 5.9 mb
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
