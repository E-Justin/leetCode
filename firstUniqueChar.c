// 5ms
// 7.3 MB

#include <string.h>
#include <stdio.h>

int 
f_u_c(char* s) {
	int char_count[123] = { 0 }; 
	unsigned int len = strlen(s);
	int ret = -1;

	for (int i = 0; i < len; i++) {
		char_count[s[i]]++;
	}


	for (int i = 0; i < len; i++) {
		if (char_count[s[i]] == 1) {
			ret = i;
			break;
		}
	}

	return ret;

}

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


// 4ms
// 7.2 MB
int 
first_unique_char(char* s) {

	// ascii letters end at 122
	int chars[123] = { 0 };
	int ret = 0;

	if (strlen(s) == 0){
		return ret;
	}

	// tally each char
	for (int i = 0; s[i]; i++) {
		chars[s[i]]++;
	}

	// find which char only has 1 tally
	for (int i = 0; s[i]; i++) {
		if (chars[s[i]] == 1) {
			ret = i;
			break;
		}
	}

	return ret;
}


