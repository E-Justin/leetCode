// 1845 ms
// 8.38 MB

int removeDuplicates(int* nums, int numsSize){
    int k = numsSize;
    // move through list find each duplicate
    for (int i = 0; i < numsSize - 1; i++) {
        int j = i + 1;
        while (j < numsSize && nums[j] == nums[i] && nums[i] != 999) {
            nums[j] = 999;
            k--;

            // move duplicate to end
            for (int x = j; x < numsSize - 1; x++) {
                int temp = nums[x];
                nums[x] = nums[x + 1];
                nums[x + 1] = temp;
            }
        }
    }
    return k;
}
