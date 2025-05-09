#include <stdlib.h>
#include <stdio.h>
#include <limits.h>


// 0ms (beats 100% of C submissions)
// 8.4 MB
int 
r_i(int x) {
   long long ret = x;
	
   ret = x % 10;
   x /= 10;
	
   while (x) {
	ret *= 10;
	ret += x % 10;
	x /= 10;
   }
	
   return ret > INT_MAX || ret < INT_MIN ? 0 : ret;
}

// 0ms (beats 100%)
// 8.5 MB
int reverse(int x){
    long long reversed = 0;

    while (x) {
        int digit = x % 10;
        reversed = reversed * 10 + digit;
        x /= 10;
        
        if (reversed > INT_MAX || reversed < INT_MIN){
            reversed = 0;
            break;
        }
    }

    return reversed;
}

// 0ms (beats 100%)
// 8.6 MB
int 
revInt(int x) {
	int ret = x;
	long long pv = 1;

	// get place value
	for (int i = 0; ret; i++) {
		ret /= 10;

		if (i != 0) {
			pv *= 10;
		}
	}

	// reverse int
	while (x) {
		ret += pv * (x % 10);
		pv /= 10;
		x /= 10;
	}
	
	//    if outside of int range, return 0, else ret
	ret = ret > INT_MAX || ret < INT_MIN ? 0 : ret;

	return ret;
}


// 2ms
// 6.24 MB
int
reverse(int x) {
    int n_digits = 0;
    int orig = x;
    long long pow = 1;
    long long ret = 0;

    // get n_digits and place value
    while (orig) {
        if (n_digits) {
            pow *= 10;
        }
        n_digits++;
        orig /= 10;
    }

    // if only one number (no need to reverse)
    if (n_digits == 1) {
        return x;
    }

    // reverse int
    while (pow) {
        ret += pow * (x % 10);
        pow /= 10;
        x /= 10;
    }

    if (ret > INT_MAX || ret < INT_MIN) {
        ret = 0;
    }

    return (int)ret;
	
}

// 5ms
// 5.6 MB

int 
reverseInt(int x) {
    long long copy = x;
    long long  pv = 1;
    int n_digits = 0;
    int ret = 0;

    // get n_digits and place value
    for (int i = 0; copy; i++) {
        if (i != 0) {
            pv *= 10;
        }
        n_digits++;

        copy /= 10;
    }

    // reverse int
    for (int i = 0; x; i++) {
        copy += (x % 10) * pv;
        pv /= 10;
        x /= 10;
    }

    ret = copy > INT_MAX || copy < INT_MIN ? 0 : copy;

    return ret;
}
