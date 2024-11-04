// 5ms
// 7.7 MB

#include <stdint.h>

uint32_t
reverse_bits(uint32_t n) {
	uint32_t reversed = 0;

	for (int i = 0; i < 32; i++) {
		// make room to add another bit
		reversed <<= 1;

		// get the last bit & add it to front of reversed
		reversed |= (n & 1);

		// move next bit to the end
		n >>= 1;
	}

	return reversed;
}
