// 162 ms
// 14.1 MB

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int 
compare(const void* a, const void* b) {
    // >0 == ascending
    return (*(int*)a - *(int*)b);
}

bool
containsDuplicate(int* nums, int numsSize) {
    bool ret = false;

    // sort array
    qsort(nums, numsSize, sizeof(int), compare);
  
    // run thhrough array and search for dups
    for (int i = 0, j = i + 1; i < numsSize - 1; i++, j++) {
        if (nums[i] == nums[j]) {
            ret = true;
            break;
        }
    }
  
    return ret;
}
