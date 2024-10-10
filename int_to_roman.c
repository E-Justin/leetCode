#include <stdlib.h> // maloc
#include <stdio.h> // printf

// Runtime = 0ms : Beats 100.00%
// Memory = 8.49 MB : Beats 75.14%
char *
int_to_roman(int num) {
	int i = 0;
	unsigned long long pv = 1;
	int temp = num;
	int digit = 0;
	//char ret[20] = { 0 };
	char* ret = (char*)malloc(20);
	char roman[7] =			{ 'I', 'V', 'X', 'L', 'C', 'D', 'M' };
	unsigned int r_to_int[7] =	{ 1,    5,   10,  50, 100, 500, 1000 };

	// get the highest place value of num arg
	for (int j = 1; temp; j *= 10) {
		pv = j;
		temp /= 10;
	}

	temp = num;
	for (; temp; i++) {
		digit = temp / pv;

    // if 1 || 5, just grab from array
		if (digit == 1 || digit == 5) {
			digit = pv * digit;
			int idx = 0;
			for (int j = 0; r_to_int[j]; j++) {
				if (r_to_int[j] == digit) {
					idx = j;
					break;
				}
			}

			ret[i] = roman[idx];
		}
    // !1 && !5 && !4 && !9 && !0
		else if (digit != 4 && digit != 9 && digit != 0) {
			digit = pv * digit;
			int idx = 6;
			while (digit) {
				if (r_to_int[idx] <= digit) {
					ret[i] = roman[idx];
					digit -= r_to_int[idx];
					if (digit) i++;
				}
				else idx--;
				
			}
		}
		// digit == 4 || digit == 9
		else if (digit != 0){
			digit = pv * digit;
			int idx = 0;
			while (digit) {
				if (digit < r_to_int[idx]) {
          // get the portion to subtract
					ret[i++] = roman[(digit / pv ==  9) ? idx - 2 : idx - 1];
          // get the first symbol that is larger
					ret[i] = roman[idx];
					break;
				}
				else idx++;
			}


		}
		// digit == 0
		else {
			i--;
		}

    // get the numbers we have not used yet
		temp = temp % pv;
    // set new palce value to match temp
		pv /= 10;
	}

  // add null terminator
	ret[i] = '\0';

	return ret;
}
