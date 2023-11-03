int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
	int* ret[2];
	int done = 0;

	// keep first position and loop through all other elements
	for (int i = 0, j = i + 1, k; i < numsSize - 1 && !done; i++, j++) {
		k = j;
		while (k < numsSize) {
			printf("Checking %d and %d\n", nums[i], nums[k]);
			if (nums[i] + nums[k] == target) {
				ret[0] = i;
				ret[1] = k;
				done = 1;
				break;
			}
			k++;
		}
	}

	printf("%d, %d\n", ret[0], ret[1]);
	return ret;
}
