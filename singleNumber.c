// 26 MS
// 7.6 MB

#include <stdio.h>
#include <stdlib.h>


int
compare(const void* a, const void* b) {
    // sort ascending
    return (*(int*)a - *(int*)b);
}

int
singleNumber(int* nums, int numsSize) {
    int ret = 30001; // 30000 is max elem value in nums

    // sort array
    qsort(nums, numsSize, sizeof(int), compare);

    // every element appears 2x except 1
    for (int i = 0, j = i + 1; i < numsSize - 1; i += 2, j += 2) {
      
        // if single elem was found
        if (nums[i] != nums[j]) {
            ret = nums[i];
            break;
        }
    }

    // if not found, it is last element
    if (ret == 30001) {
        ret = nums[numsSize - 1];
    }

    return ret;
}
