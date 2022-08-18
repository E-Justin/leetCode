class Solution:
    def moveZeroes(self, num_list: List[int]) -> None:
        """
        Do not return anything, modify nums in-place instead.
        """
        count = num_list.count(0)

        while count != 0:
            num_list.remove(0)
            num_list.append(0)
            count -= 1
        return(num_list)