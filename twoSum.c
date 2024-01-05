// 118ms
// 7.23MB

#include <stdio.h>
#include <stdlib.h>

int*
twoSum(int* nums, int numsSize, int target, int* returnSize) {
	// it is the responsibility of the caller to free returned value

	int* ret = (int*)malloc(sizeof(int) * 2);
	*returnSize = 2;

	// move through each element in the array if necessary 
	for (int i = 0; i < numsSize -1; i++) {
		// run through remaining elements
		for (int j = i + 1; j < numsSize; j++) {

			// if target was found
			if (nums[i] + nums[j] == target) {
				ret[0] = i;
				ret[1] = j;
				break;
			}
		}
	}

	// description says there is always one result, so no need for not found solution
	return ret;
	
}
