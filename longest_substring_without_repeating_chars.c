#include <stdio.h>
#include <string.h>

// 23 ms
// 8.73 MB : Beats 86.99% of submissions
int
lenght_of_longest_substring(char* s) {
	size_t n_chars = 0;
	size_t temp_n_chars = 0;
	char char_count[127] = { 0 };
	size_t s_len = strlen(s);
	unsigned char new_round = 1;

	do {
    // if only 1 item in list
		if (s_len == 1) {
			n_chars = 1;
			break;
		}

		for (int i = 0, j = i + 1; j < s_len;) {

      // if new round (starting w empty char_count)
			if (new_round) {
        
				char_count[s[i]]++; // tally the char
				temp_n_chars++;// prefix len + 1
				new_round = 0;// signal new round is over
			}

      // if this char has not been used in prefix
			if (char_count[s[j]] == 0) {
        
				char_count[s[j]]++; // tally the char
				temp_n_chars++; // prefix len + 1
				j++; // move j to next position
			}
			else {
				new_round = 1; // signal new round for next iteration

        // if a new longest prefix len was found, assign it 
				if (temp_n_chars > n_chars) n_chars = temp_n_chars;

				temp_n_chars = 0; // reset temp_n_chars for the new round

				// reset char_count
				for (int k = i; k < j; k++) char_count[s[k]] = 0;

				i++;
				j = i + 1;
			}
		}

	} while (0);

  // return the larger of the two
	return n_chars < temp_n_chars ? temp_n_chars : n_chars;
}
