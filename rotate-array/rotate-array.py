class Solution:
    def rotate(self, numList: List[int], times: int) -> None:
        """
        Do not return anything, modify nums in-place instead.
        """
        for i in range(times):
            numList.insert(0, numList[-1])
            numList.pop()
  