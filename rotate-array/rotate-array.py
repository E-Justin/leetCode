class Solution:
    def rotate(self, num_list: List[int], k: int) -> None:
        """
        Do not return anything, modify nums in-place instead.
        given an array, rotate the array to the right by k steps, 
    where k is non-negative
        """
        for _ in range(k):
            num_list.insert(0, num_list.pop())
