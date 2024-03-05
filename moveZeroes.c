// 295 ms
// 15 MB

#include <stdio.h>
#include <stdlib.h>

void
moveZeroes(int* nums, int numsSize) {
    int temp;
    int not_zeroes = numsSize;

    for (int i = 0; i < not_zeroes; i++) {
        
        while (nums[i] == 0 && i < not_zeroes) {
            for (int j = i; j < numsSize - 1; j++) {
                nums[j] = nums[j + 1];
                nums[j + 1] = 0;
                
            }
            not_zeroes--;
        }
    }
    return;
}
