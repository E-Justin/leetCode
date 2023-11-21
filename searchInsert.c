int searchInsert(int* nums, int numsSize, int target){
  int index = 0;

    for (int i = 0; i < numsSize; i++) {
        if (nums[i] == target || nums[i] > target ) {
            index = i;
            break;
        }
        else if (nums[i] < target && i == numsSize - 1) {
            index = i + 1;
            break;
        }
        
    }

    return index;

        return index;
}
