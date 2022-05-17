class Solution:
    def moveZeroes(self, numList: List[int]) -> None:
        """
        Do not return anything, modify nums in-place instead.
        """
        zeros = numList.count(0)

        for i in range(zeros):
            numList.remove(0)
            numList.append(0)

        return numList