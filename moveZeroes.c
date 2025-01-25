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


// 235 ms
// 19.7 MB
void
move_0s(int* nums, int numsSize) {
    unsigned char stay_at_pos = 0;
    unsigned char moved = 0;

    for (int i = 0; i < numsSize; i++) {

        // if we need to stay at current pos
        i = stay_at_pos ? i-= 1 : i;
        moved = 0;

        // move 0 to end
        for (int x = i; nums[x] == 0 && x < numsSize - 1; x++) {
            nums[x] = nums[x + 1];
            nums[x + 1] = 0;

            // flag moved
            moved = 1;
        }

        // if we need to stay at current pos
        stay_at_pos = nums[i] == 0 ? 1 : 0;

        // --numsSize if we moved 0 to back
        numsSize = moved ? numsSize -= 1 : numsSize;

    }

}
