//Runtime: 389 ms
// Memory: 8.8 MB

#include <stdio.h>

int 
missing_number(int* nums, int numsSize) {
	int missing_num = 0;

  // run through all numbers from 0 -> n
	for (int i = 0; i < nums; i++) {

    // flag to let us know if we found the missing number
		unsigned char found_it = 0;

    // run through each element in the array, starting from end and front, working towards the middle
		for (int k = 0, j = numsSize - 1; k <= numsSize / 2; k++, j--) {

      // if we found the number we are currently looking for
			if (nums[k] == i || nums[j] == i) {
				found_it = 1;
				break;
			}
		}

    // if we did not find i, in nums
		if (!found_it) {
			missing_num = i;
			break;
		}
	}

	return missing_num;
}
