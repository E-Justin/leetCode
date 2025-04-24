#include <string.h> // memcpy
#include <stdlib.h> // malloc

// 0 ms (beats 100% of C submissions)
// 10.8 MB
int* intersect(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize) {
    int large_count[1001] = { 0 };
    int small_count[1001] = { 0 };
    int i = 0;
    int* ret = NULL;

    // find large/small array and size
    int small_sz = nums1Size <= nums2Size ? nums1Size : nums2Size;
    int large_sz = small_sz == nums1Size ? nums2Size : nums1Size;
    int* small_nums = nums1Size <= nums2Size ? nums1 : nums2;
    int* large_nums = small_nums == nums1 ? nums2 : nums1;

    // iterate through the smaller array
    for (; i < small_sz; i++) {

        //tally up digits in each array
        large_count[large_nums[i]]++;
        small_count[small_nums[i]]++;
    }

    // if arrays are not same size
    if (nums1Size != nums2Size) {

        // iterate through the rest of the larger array
        for (; i < large_sz; i++) {

            // finish tallying up elements in larger array
            large_count[large_nums[i]]++;
        }
    }

    int j = 0;
    *returnSize = 0;
    for (; j < small_sz; j++) {

        // while we have at least 1 of the same elements in each array
        while (large_count[small_nums[j]] >= 1 && small_count[small_nums[j]] >= 1) {

            // temp holder for new array @ front of large_nums
            large_nums[*returnSize] = small_nums[j];
            (*returnSize)++; 
            large_count[small_nums[j]]--;
            small_count[small_nums[j]]--;
        }
    }

    // allocate memory & copy over new array to return
    ret = malloc(sizeof(int) * (*returnSize));
    memcpy(ret, large_nums, sizeof(int) * (*returnSize));


    return ret;
}
