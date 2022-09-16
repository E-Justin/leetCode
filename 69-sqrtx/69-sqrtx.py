class Solution:
    def mySqrt(self, x: int) -> int:
        sqrt = 0
        squared = 1
        while squared <= x:
            sqrt += 1
            squared = sqrt * sqrt
            if squared > x:
                sqrt -= 1
                break
        return sqrt