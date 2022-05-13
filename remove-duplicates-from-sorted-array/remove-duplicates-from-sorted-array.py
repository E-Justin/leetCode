class Solution:
    def removeDuplicates(self, numList: List[int]) -> int:
        i = 0
        while i < len(numList):
            if numList.count(numList[i]) > 1:
                numList.remove(numList[i])
            else:
                i += 1
        return len(numList)