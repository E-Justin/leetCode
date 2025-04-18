// 902 ms
// 12 MB

int removeDuplicates(int* nums, int numsSize){
    for (int i = 0, j = 1; j < numsSize && nums[j] != 101; j++, i++) {
    	while(nums[i] == nums[j] && j < numsSize){
    		numsSize--;
    		for (int k = j; k < numsSize; k++){
    			nums[k] = nums[k + 1];
    		}
    	}
    }
    
    return numsSize;
}
