class Solution:
    def maxProfit(self, numList: List[int]) -> int:
        j = 1
        i = 0
        profit = 0
        while j < len(numList):
            if numList[i] < numList[j]:
                profit += numList[j] - numList[i]
            i += 1
            j += 1
        return profit