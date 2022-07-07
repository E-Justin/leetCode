class Solution:
    def rotate(self, num_list: List[int], times: int) -> None:
        """
        Do not return anything, modify nums in-place instead.
        given an array, rotate the array to the right by k steps, 
    where k is non-negative
        """
        for i in range(times):
            to_move = num_list.pop()
            num_list.insert(0, to_move)
        