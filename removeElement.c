// 4ms
// 6.54 MB

int removeElement(int* nums, int numsSize, int val){
    // run through list
    int k = numsSize;

    if (numsSize == 1) {
        if (nums[0] == val) {
            return 0;
        }
        else {
            return k;
        }
    }
    if (!numsSize) {
        return 0;
    }

    // run through list
    for (int i = 0; i < k; i++) {

        while (nums[i] == val) {
            // move element to end
            nums[i] = nums[k -1];
            nums[k -1] = 99;
            k--;
        }
    }

    return k;
}
