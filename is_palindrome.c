#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

// 0 ms : beats 100.00% of submissions!
// 6 MB
bool
is_palindrome(char* s) {
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



// 7 ms
// 6.89 MB
bool 
isPalindrome(int x) {
    bool is_palindrome = 0;
    long long pow = 1;
    int n_digits = 0;
    int orig = x;
    int reversed = 0;

    do {

        // negative can't be palindrome
        if (x < 0) {
            break;
        }

        // get pow and n_digits
        while (orig) {
            if (n_digits) {
                pow *= 10;
            }
            n_digits++;
            orig /= 10;
        }

        orig = x;

        // reverse
        while (orig) {
            reversed += (orig % 10) * pow;
            orig /= 10;
            pow /= 10;
        }

        is_palindrome = x == reversed ? 1 : 0;

    } while (0);

    return is_palindrome;
}
