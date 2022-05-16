class Solution:
    def plusOne(self, numList: List[int]) -> List[int]:
        print(type(numList))
        numList = map(str, numList)
        numList = ''.join(numList)
        numList = int(numList)
        numList += 1
        numList = str(numList)
        numList = map(int, numList)
        numList = list(numList)
        return numList