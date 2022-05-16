class Solution:
    def singleNumber(self, numList: List[int]) -> int:
        singleNum = int
        for i in range(len(numList)):
            if numList.count(numList[i]) == 1:
                singleNum = numList[i]
                break
        return singleNum