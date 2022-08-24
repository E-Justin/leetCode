class Solution:
    def reverse(self, num: int) -> int:
        if num < 0:
            negative = True
        else:
            negative = False
        if negative is True:
            num = abs(num)
        num = str(num)
        num = num[::-1]
        num = int(num)
        if negative is True:
            num = 0 - num
        if not -2147483648 <num< 2147483648:
            return 0
        return (num)