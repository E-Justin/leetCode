function rotateArray(nums, k) {
  for (let i = 0; i < k; i++) {
    nums.unshift(nums.pop());
  }
}
