class Solution:
    def moveZeroes(self, num_list: List[int]) -> None:
        """
        Do not return anything, modify nums in-place instead.
        """
        c = Counter(num_list)
        while c[0] != 0:
            num_list.remove(0)
            num_list.append(0)
            c[0] -= 1
        return num_list