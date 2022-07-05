class Solution:
    def removeDuplicates(self, numList: List[int]) -> int:
        for num in numList:
            while numList.count(num) > 1:
                numList.remove(num)
        return len(numList)