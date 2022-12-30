function containsDuplicates(nums) {
  let length = nums.length;
  for (let i = 0; i < length; i++) {
    let toCheck = nums.pop();
    if (nums.indexOf(toCheck) != -1) {
      return true;
    }
  }
  return false;
}
