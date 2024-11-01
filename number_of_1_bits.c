// Runtime: 0ms
// Memory: 7.9 MB


int 
n_bits_set(int n) {
	unsigned int n_bits = 0;

	while (n) {

    // check if the last bit is set
		n_bits += n & 1;

    // bitwise shift to right (/= 2)
		n >>= 1;
	}

	return n_bits;
}
