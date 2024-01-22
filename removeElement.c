// 0ms : Beats 100% of users with C
// 5.97 MB : Beats 98.81% of users with C

#include <stdio.h>
#include <stdlib.h>

int 
removeElement(int* nums, int numsSize, int val){
int k = numsSize;

    // run through each element
    for (int i = 0; i < numsSize; i++) {

        // if val was found
        while (nums[i] == val ) {
            
            // move to end
            nums[i] = nums[k - 1];
            nums[k - 1] = 101;
            k--; // decrement k (one less element)
            
        }
    }

    return k;
}
