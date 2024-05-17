#include <stdio.h>
#include <stbool.h>
#include <string.h>
#include <ctype.h>

// 0 ms : beats 100.00% of submissions!
// 6 MB
bool
isPalindrome(char* s) {
	char* modified = s;
	size_t len = strlen(s);
	bool is_palindrome = true;

	for (int front = 0, end = len - 1; end > front; front++, end--) {

        // while not alphanumeric, skip
		while (!isalnum(s[front]) && end > front) {
			front++;
		}

        // while not alphanumeric, skip
		while (!isalnum(s[end]) && end > front) {
			end--;
		}

        // if we have passed the middle (everything has already been compared)
		if (front > end) {
			break;
		}
		
		// if not same char after converting to lowercase
		if (tolower(s[front]) != tolower(s[end])) {
			is_palindrome = false;
			break;
		}
	}

	return is_palindrome;
}


// 2ms
// 6MB
bool
is_palindrome(char* s) {

    size_t orig_len = strlen(s);
    int front = 0;
    int end = orig_len - 1;
    bool result = true;

    while (front < end) {

        // find front alphanum char
        while (!isalnum(s[front]) && front < end) {
            front++;
        }
        // find end alphanum char
        while (!isalnum(s[end]) && front < end) {
            end--;
        }

        // if they dont match
        if (tolower(s[front]) != tolower(s[end])){
            result = false;
            break;
        }
        else {
          // move to next char
            front++;
            end--;
        }
    }

    return result;

    
}
