#include <stdio.h>
#include <stdlib.h>

int maxProductDifference(int* nums, int numsSize) {
	int big[2] = { 0, 0};
	int small[2] = { 0, 0};
	int ret = 0;

	for (int i = 0; i < numsSize; i++) {

		if (nums[i] < small[0] || nums[i] < small[1] || small[0] == 0 || small[1] == 0) {
			if (small[0] == 0) {
				small[0] = nums[i];
			}
			else if (small[1] == 0) {
				small[1] = nums[i];
			}
			else if  (small[0] > small[1]) {
				small[0] = nums[i];
			}
			else/* (small[1] > small[0])*/ {
				small[1] = nums[i];
			}
		}
		if (nums[i] > big[0] || nums[i] > big[1] || big[0] == 0 || big[1] == 0) {
			if (big[0] < big[1]) {
				big[0] = nums[i];
			}
			else {
				big[1] = nums[i];
			}
		}
	}

	
	ret = (big[0] * big[1]) - (small[0] * small[1]);
	printf("Ret = %d\n", ret);
	return ret;


}
