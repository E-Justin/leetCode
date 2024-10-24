#include <stdlib.h> // malloc
#include <string.h> // memset


int 
count_primes(int n) {

	unsigned char *primes = (int *)malloc( n);
	memset(primes, 1, n);
	int count = 0;

  // find all composite, and set flag
	for (int i = 2; i < n; i++) {
		for (int j = i * 2; j < n ; j += i) {
			
			primes[j] = 0;
		}
	}

  // count all primes
	for (int i = 2; i < n; i++) {
		if (primes[i] == 1) {
			count++;
		}
	}

	return count;
}
