class Solution:
    def reverse(self, number: int) -> int:
        negative = False
        if number < 0:
            negative = True
            number = abs(number)
        number = str(number)
        number = number[::-1]
        number = int(number)
        if negative is True:
            number = 0 - number
        if number <= -2**31 or number >= 2**31 - 1:
         return 0
        return number