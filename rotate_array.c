#include <stdlib.h> // malloc / free
#include <string.h> // memcpy


// 2 ms
// 27.4 MB
void
rot8(int* nums, int numsSize, int k) {

  // if there is nothing to rotate
	if (numsSize <= 1 || k <= 0) return;

  // no need to rotate more than we have to
	k = k % numsSize;

  // allocate memory for copy array
	int* copy = malloc(sizeof(int) * numsSize);
	memcpy(copy, nums, numsSize * sizeof(int));

  // place elements in their new position
	for (int i = 0; i < numsSize; i++) {

    // calculate new position of elements
		int new_idx = (i + k) % numsSize;
		nums[new_idx] = copy[i];
	}

  // cleanup (if we have the caller free this, instead of doing it here, it would run in 0ms)
  free(copy);
  return;
}
